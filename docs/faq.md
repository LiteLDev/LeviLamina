# FAQ

## Where does LeviLamina come from?

LeviLamina emerges from the depths of Minecraft Bedrock Server, sprouting forth from the seeds of the [LiteLoaderBDS](https://github.com/LiteLDev/LiteLoaderBDSv2) project.

The initial versions of Minecraft Bedrock Edition lacked the extensive mod and server plugin ecosystem present in Minecraft Java Edition, thereby limiting its gameplay possibilities. A collective of C++ enthusiasts, well-versed in Minecraft Bedrock Server, conducted an analysis and utilized reverse engineering techniques and hook injection mechanisms to intervene in the operation of the game server, thus pioneering the development of the first set of server plugins.

However, this development paradigm encountered several challenges. Primarily, the absence of underlying framework support necessitated the reliance on diverse low-level tools for symbol analysis, injection implementation, hook registration, and other functionalities during plugin development. Consequently, this led to code redundancy and duplication across different plugins, as well as the potential for unforeseen conflicts among them. Moreover, the lack of explicit type definitions compelled developers to engage in reverse engineering analysis while creating plugins, resulting in elevated development barriers and diminished efficiency.

In response to these predicaments, the maintainers of the precursor project, LiteLoaderBDS, constructed an injection-based plugin loading engine and a plugin development framework. In addition, they provided type information, enabling plugin developers to create plugins without requiring an exhaustive comprehension of the underlying principles. This significantly mitigated the entry barriers for plugin development and facilitated the flourishing of the plugin ecosystem.

Nevertheless, as LiteLoaderBDS progressed, certain issues came to the fore. The early design failed to account for future advancements, rendering many aspects obsolete and impeding the utilization of contemporary tools, thereby falling short of meeting the latest performance requirements. Furthermore, its tightly coupled design engendered substantial efforts when adapting to new iterations of Minecraft Bedrock Server. Consequently, LiteLDev made the decision to commence from scratch, leveraging existing expertise, and undertaking a comprehensive framework redesign to cultivate a plugin engine that promotes user-friendliness for maintainers, developers, and users alike.

## Why was LiteLoaderBDS renamed to LeviLamina?

Oh, it's quite a tale! You see, LiteLoaderBDS started off as a little joke, a playful experiment. But lo and behold, it grew faster than a creeper on steroids!

At first, we noticed that the name LiteLoaderBDS sounded strikingly similar to a mod launcher project in the Minecraft Java version. So, in a moment of genius, we slapped a "BDS" suffix on it to differentiate ourselves. Clever, right?

But as LiteLoaderBDS 2.0 expanded, it started bulking up like a piglet at an all-you-can-eat buffet. Its performance took a nosedive, leaving us scratching our heads.

That's when we made a bold decision to rebuild the entire project from scratch. And as we delved deeper into the revamping process, it became clear that a fresh start deserved a brand-new moniker. So, we dabbled in the ancient arts of Latin roots, preserving the beloved abbreviation `ll`, and voila! LeviLamina was born, a name befitting our magnificent creation.
