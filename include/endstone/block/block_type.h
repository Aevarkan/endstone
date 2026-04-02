// Copyright (c) 2024, The Endstone Project. (https://endstone.dev) All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <memory>
#include <string>

#include "endstone/detail.h"
#include "endstone/registry.h"
#include "endstone/server.h"

namespace endstone {

class BlockData;

/**
 * @brief Represents a block type.
 */
class BlockType;
using BlockTypeId = Identifier<BlockType>;
class BlockType {
public:
    static constexpr auto Air = BlockTypeId::minecraft("air");

    ENDSTONE_REGISTRY_TYPE(BlockType)
    virtual ~BlockType() = default;

    /**
     * @brief Return the identifier of this block type.
     *
     * @return this block type's identifier
     */
    [[nodiscard]] virtual BlockTypeId getId() const = 0;

    /**
     * @brief Get the translation key, suitable for use in a translation component.
     *
     * @return the translation key
     */
    [[nodiscard]] virtual std::string getTranslationKey() const = 0;

    /**
     * @brief Returns true if this BlockType has a corresponding ItemType.
     *
     * @return true if there is a corresponding ItemType, otherwise false
     */
    [[nodiscard]] virtual bool hasItemType() const = 0;

    /**
     * @brief Creates a new BlockData instance for this block type, with all
     * properties initialized to unspecified defaults.
     *
     * @return new data instance
     */
    [[nodiscard]] virtual std::unique_ptr<BlockData> createBlockData() const = 0;

    bool operator==(const BlockTypeId &other) const { return getId() == other; }
    bool operator!=(const BlockTypeId &other) const { return !(*this == other); }
    bool operator==(const BlockType &other) const { return getId() == other.getId(); }
    bool operator!=(const BlockType &other) const { return !(*this == other); }
    operator BlockTypeId() const { return getId(); }
};
}  // namespace endstone

template <>
struct fmt::formatter<endstone::BlockType> : formatter<string_view> {
    using Type = endstone::BlockType;

    template <typename FormatContext>
    auto format(const Type &val, FormatContext &ctx) const -> format_context::iterator
    {
        return fmt::format_to(ctx.out(), "{}", val.getId());
    }
};
