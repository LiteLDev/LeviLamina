# LiteLoaderBDS

[![English](https://img.shields.io/badge/English-informational?style=for-the-badge)](README.md)&nbsp;![中文](https://img.shields.io/badge/简体中文-inactive?style=for-the-badge)

> [!IMPORTANT]
> LiteLoaderBDS 3尚在开发！对于生产环境，请访问<https://github.com/LiteLDev/LiteLoaderBDSv2>。

一个开创性的跨语言插件加载器，适用于Minecraft基岩版专用服务器（BDS）

LiteLoaderBDS是一个非官方的插件加载器，为基岩版专用服务器（BDS）提供必要的API支持。它拥有广泛的API、大量的实用接口、强大的事件系统和全面的基本接口支持。

LiteLoader提供了一个广阔的API、强大的事件系统和丰富的封装式开发基础接口，为增强基岩版BDS的游戏功能和功能提供了坚实的基础。通过插件，扩展BDS的功能变得轻松，具有用户友好的开发过程和灵活的方法。

开发者可以轻松地使用C++、JavaScript、Lua、Python、C#等语言编写插件。这种无缝集成使他们能够轻松扩展和个性化BDS的功能，促进直观的学习体验和无与伦比的灵活性。

更多信息，请参考[文档](https://docs.litebds.com)。

## 安全性

LiteLoaderBDS（以下简称“本软件”）由LiteLDev（以下简称“开发者”）开发和提供。本软件旨在帮助用户管理和安装各种软件包，但不对任何软件包的内容、质量、功能、安全性或合法性负责。用户应自行决定使用本软件，并承担相关风险。

开发者不保证本软件的稳定性、可靠性、准确性或完整性。开发者不对本软件中可能存在的任何缺陷、错误、病毒或其他有害组件负责。开发者不对因使用本软件而导致的任何直接或间接损害（包括但不限于数据丢失、设备损坏、利润损失等）承担责任。

开发者保留随时修改、更新或终止本软件及其相关服务的权利，无需事先通知用户。用户应备份重要数据并定期检查本软件的更新。

用户在使用本软件时应遵守相关法律法规，尊重他人的知识产权和隐私权，不得将本软件用于任何非法或侵权活动。如果用户违反上述规定并对任何第三方造成任何损害或被任何第三方提出索赔，开发者不承担任何责任。

如果您对本免责声明有任何疑问或意见，请与开发者联系。

## 安装

此项目使用[Lip](https://github.com/LipPkg/Lip)。如果您尚未在本地安装，请查看它们。

首先，创建一个新的目录用于您的Minecraft服务器并进入该目录：

```sh
$ mkdir myserver
$ cd myserver
```

然后，使用Lip安装LiteLoaderBDS：

```sh
$ lip install github.com/tooth-hub/liteloaderbds
```

更多信息，请参考[文档](https://docs.litebds.com)。

### 更新

考虑到数据安全性，我们不提供更新方法。如果您想要更新LiteLoaderBDS，请在其他地方安装新版本，并将下面显示的文件复制到服务器目录中：

- `worlds/`
- `server.properties`

## 使用方法

要启动服务器，只需运行`bedrock_server.exe`：

```sh
$ ./bedrock_server.exe
```

更多信息，请参考[文档](https://docs.litebds.com)。

## 贡献

欢迎参与！[提交问题](https://github.com/LiteLDev/LiteLoaderBDS/issues/new/choose)或提交PR贡献者

感谢所有为该项目作出贡献的人。

![Contributors]()许可证[LGPL-3.0-only](LICENSE) © 2021-2023 LiteLDev
