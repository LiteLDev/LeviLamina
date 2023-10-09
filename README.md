# LiteLoader

_Main component of LiteLoaderBDS_

![English](https://img.shields.io/badge/English-inactive?style=for-the-badge)&nbsp;[![中文](https://img.shields.io/badge/简体中文-informational?style=for-the-badge)](README.zh.md)

> [!IMPORTANT]
> LiteLoaderBDS v3 is under development! For production use, go to <https://github.com/LiteLDev/LiteLoaderBDSv2>.

An epoch-making cross-language plugin loader for Minecraft Bedrock Dedicated Server (BDS)

LiteLoaderBDS is an unofficial plugin loader that offers essential API support for the Bedrock Dedicated Server (BDS). It boasts an extensive API, a plethora of utility interfaces, a robust event system, and comprehensive basic interface support.

LiteLoader presents an expansive API, a powerful event system, and an abundance of encapsulated development infrastructure interfaces, laying a sturdy groundwork for enhancing the Bedrock Edition BDS with additional gameplay features and functionalities. Through plugins, extending BDS functionality becomes effortless, with a user-friendly development process and adaptable approach.

Developers can effortlessly write plugins in languages such as C++, JavaScript, Lua, Python, C#, and others. This seamless integration enables them to effortlessly expand and personalize BDS functionality, facilitating an intuitive learning experience and unparalleled flexibility.

For more information, please refer to [the documentation](https://docs.litebds.com).

## Security

LiteLoaderBDS (hereinafter referred to as "this software") is developed and 
provided by LiteLDev (hereinafter referred to as "the developer"). This software is designed 
to help users manage and install various software packages, but is not responsible for any 
content, quality, functionality, security or legality of any software package. Users should 
use this software at their own discretion and assume all related risks.

The developer does not guarantee the stability, reliability, accuracy or completeness of this 
software. The developer is not liable for any defects, errors, viruses or other harmful components 
that may exist in this software. The developer is not liable for any direct or indirect damages 
(including but not limited to data loss, device damage, profit loss etc.) caused by the use of 
this software.

The developer reserves the right to modify, update or terminate this software and its related 
services at any time without prior notice to users. Users should back up important data and check 
regularly for updates of this software.

Users should comply with relevant laws and regulations when using this software, respect the 
intellectual property rights and privacy rights of others, and not use this software for any 
illegal or infringing activities. If users violate the above provisions and cause any damage 
to any third party or are claimed by any third party, the developer does not bear any 
responsibility.

If you have any questions or comments about this disclaimer, please contact the developer.

## Install

This project uses [Lip](https://github.com/LipPkg/Lip). Go check them out if you don't have them locally installed.

First, create a new directory for your Minecraft server and enter it:

```sh
$ mkdir myserver
$ cd myserver
```

Then, install LiteLoaderBDS using Lip:

```sh
$ lip install github.com/tooth-hub/liteloaderbds
```

For more information, please refer to [the documentation](https://docs.litebds.com).

### Updating

Considering data security, we do not provide an update method. If you would like to update LiteLoaderBDS, please install the new version somewhere else and copy the files shown below to your server directory:

- `worlds/`
- `server.properties`

## Usage

To start the server, simply run `bedrock_server.exe`: 

```sh
$ ./bedrock_server.exe
```

For more information, please refer to [the documentation](https://docs.litebds.com).

## Contributing

Feel free to dive in! [Open an issue](https://github.com/LiteLDev/LiteLoader/issues/new/choose) or submit PRs.

LiteLoaderBDS follows the [Contributor Covenant](https://www.contributor-covenant.org/version/2/1/code_of_conduct/) Code of Conduct.

## Contributors

This project exists thanks to all the people who contribute.

![Contributors](https://contrib.rocks/image?repo=LiteLDev/LiteLoader)

## License

[LGPL-3.0-only](LICENSE) © 2021-2023 LiteLDev
