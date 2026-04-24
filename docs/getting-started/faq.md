---
comments: true
---

<!-- 
    Note that I've removed the language ID from links to official documentation.
    https://www.minecraft.net/en-us/download/server/bedrock -> https://www.minecraft.net/download/server/bedrock
    
    This is so someone navigating to those sites will see a page in their browser's language, if possible.
 -->

# Frequently Asked Questions

???+ question "Which platforms and architectures are supported by Endstone?"

    Endstone is built around the official [Bedrock Dedicated Server (BDS)](https://www.minecraft.net/download/server/bedrock), which supports Windows and Ubuntu Linux.

    Accordingly, Endstone only supports Windows and Ubuntu Linux. Other platforms may or may not function.

    BDS natively supports the `x86-64` CPU architecture. Systems with `arm` CPU architectures are not officially supported.[^1]

[^1]: While BDS is natively built for `x86-64`, it can also run well on `arm` systems via [Docker emulation]. Using emulation can also allow Endstone to run on macOS.

[Docker emulation]: installation.md/#with-docker-latest-arm-with-emulation

<!--
    Note that there is guidance on the capitalisation of "Add-On"
    https://learn.microsoft.com/en-us/minecraft/creator/documents/learningjourneyguide?view=minecraft-bedrock-stable#journey-1-learn-about-add-ons
    
    "Add-On" can refer to Marketplace Add-Ons as well as simpler add-ons that just involve Behavior and/or Resource Packs. Generally, we'll use capitalized Add-On for the former and lowercased add-on for the latter.

    I ignored that here, because it looks better (In my opinion) when "Add-On" is capitalised for this FAQ entry.
-->
???+ question "Does Endstone support Add-Ons?"

    Endstone is built around the official [Bedrock Dedicated Server (BDS)](https://www.minecraft.net/download/server/bedrock).

    Add-Ons, including behavior and resource packs, created for the base game will also work on Endstone.

    For more information, refer to [Microsoft's documentation](https://learn.microsoft.com/minecraft/creator/documents/bedrockserver/getting-started).
