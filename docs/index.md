# LeviLamina

LeviLamina is an unofficial plugin loader designed to offer indispensable API support for Minecraft Bedrock Server BDS. It boasts a comprehensive API, an array of utility interfaces, a robust event system, and comprehensive support for basic interfaces. LeviLamina provides an expansive API, a powerful event system, and a wealth of encapsulated development infrastructure interfaces, forming a solid foundation for augmenting the Bedrock Edition BDS with additional gameplay features and functionalities. By leveraging plugins, the process of extending BDS functionality becomes effortless, with a user-friendly development process and an adaptable approach.

Developers can effortlessly author plugins in languages such as C++, JavaScript, Lua, Python, C#, and others. This seamless integration empowers them to effortlessly expand and personalize BDS functionality, facilitating an intuitive learning experience and unparalleled flexibility.

## Security

LeviLamina (hereinafter referred to as "this software") is developed and provided by LiteLDev (hereinafter referred to as "the developer"). This software is designed to enable users to extend the functionality of Minecraft Bedrock Server BDS (hereinafter referred to as "BDS") by loading plugins. This software is not affiliated with Mojang Studios (hereinafter referred to as "Mojang") or Microsoft Corporation (hereinafter referred to as "Microsoft"). The developer is not responsible for any content, quality, functionality, security or legality of any plugins loaded by this software. Users should use this software at their own discretion and assume all related risks.

The developer does not guarantee the stability, reliability, accuracy or completeness of this software. The developer is not liable for any defects, errors, viruses or other harmful components that may exist in this software. The developer is not liable for any direct or indirect damages (including but not limited to data loss, device damage, profit loss etc.) caused by the use of this software.

The developer reserves the right to modify, update or terminate this software and its related services at any time without prior notice to users. Users should back up important data and check regularly for updates of this software.

Users should comply with relevant laws and regulations when using this software, respect the intellectual property rights and privacy rights of others, and not use this software for any illegal or infringing activities. If users violate the above provisions and cause any damage to any third party or are claimed by any third party, the developer does not bear any responsibility.

If you have any questions or comments about this disclaimer, please contact the developer.

## Background

The initial versions of Minecraft Bedrock Edition lacked the extensive mod and server plugin ecosystem present in Minecraft Java Edition, thereby limiting its gameplay possibilities. A collective of C++ enthusiasts, well-versed in Minecraft Bedrock Server, conducted an analysis and utilized reverse engineering techniques and hook injection mechanisms to intervene in the operation of the game server, thus pioneering the development of the first set of server plugins.

However, this development paradigm encountered several challenges. Primarily, the absence of underlying framework support necessitated the reliance on diverse low-level tools for symbol analysis, injection implementation, hook registration, and other functionalities during plugin development. Consequently, this led to code redundancy and duplication across different plugins, as well as the potential for unforeseen conflicts among them. Moreover, the lack of explicit type definitions compelled developers to engage in reverse engineering analysis while creating plugins, resulting in elevated development barriers and diminished efficiency.

In response to these predicaments, the maintainers of the precursor project, LiteLoaderBDS, constructed an injection-based plugin loading engine and a plugin development framework. In addition, they provided type information, enabling plugin developers to create plugins without requiring an exhaustive comprehension of the underlying principles. This significantly mitigated the entry barriers for plugin development and facilitated the flourishing of the plugin ecosystem.

Nevertheless, as LiteLoaderBDS progressed, certain issues came to the fore. The early design failed to account for future advancements, rendering many aspects obsolete and impeding the utilization of contemporary tools, thereby falling short of meeting the latest performance requirements. Furthermore, its tightly coupled design engendered substantial efforts when adapting to new iterations of Minecraft Bedrock Server. Consequently, LiteLDev made the decision to commence from scratch, leveraging existing expertise, and undertaking a comprehensive framework redesign to cultivate a plugin engine that promotes user-friendliness for maintainers, developers, and users alike.

## Contributing

Feel free to dive in! [Open an issue](https://github.com/LiteLDev/LeviLamina/issues/new/choose) or submit PRs.

LeviLamina follows the [Contributor Covenant](https://www.contributor-covenant.org/version/2/1/code_of_conduct/) Code of Conduct.

### Contributors

This project exists thanks to all the people who contribute.

![Contributors](https://contrib.rocks/image?repo=LiteLDev/LeviLamina)

## License

[LGPL-3.0-only](https://github.com/LiteLDev/LeviLamina/blob/HEAD/LICENSE.md) © 2021-2023 LiteLDev
