# LeviLamina

> [!IMPORTANT]
> 寻找LeviLamina的前身LiteLoaderBDS？请访问<https://github.com/LiteLDev/LiteLoaderBDSv2>。

![LeviLamina](https://socialify.git.ci/LiteLDev/LeviLamina/image?description=1&font=Raleway&forks=1&issues=1&logo=https%3A%2F%2Fraw.githubusercontent.com%2FLiteLDev%2FLeviLamina%2FHEAD%2Fdocs%2Fimg%2Flogo.svg&name=1&owner=1&pattern=Circuit%20Board&pulls=1&stargazers=1&theme=Auto)

[![English](https://img.shields.io/badge/English-informational?style=for-the-badge)](README.md)&nbsp;![中文](https://img.shields.io/badge/简体中文-inactive?style=for-the-badge)

LeviLamina是一个轻量、模块化和多功能的Minecraft Bedrock Server BDS插件加载器，前身为LiteLoaderBDS。

LeviLamina是一个非官方的插件加载器，旨在为Minecraft Bedrock Server BDS提供必要的API支持。它拥有全面的API、多种实用接口、强大的事件系统以及对基本接口的全面支持。LeviLamina提供了一个广泛的API、强大的事件系统和丰富的封装开发基础架构接口，为增加Bedrock Edition BDS的游戏功能和功能提供了坚实的基础。通过利用插件，扩展BDS功能的过程变得轻松，具有用户友好的开发过程和可调整的方法。

开发者可以轻松地使用C++、JavaScript、Lua、Python、C#等语言编写插件。这种无缝集成使他们能够轻松扩展和个性化BDS功能，提供直观的学习体验和无与伦比的灵活性。

更多信息，请参阅[文档](https://levilamina.liteldev.com)。

## 目录

- [安装](#安装)
  - [更新](#更新)
- [使用](#使用)
- [致谢](#致谢)
- [贡献](#贡献)
- [许可证](#许可证)
- [星星的历史](#星星的历史)
- [免责声明](#免责声明)

## 安装

此项目使用[lip](https://github.com/lippkg/lip)。如果您尚未在本地安装它们，请前往查看。

首先，为您的Minecraft服务器创建一个新目录并进入其中：

```sh
mkdir myserver
cd myserver
```

然后，使用lip安装捆绑了Minecraft Bedrock Server的LeviLamina：

```sh
lip install github.com/tooth-hub/corepack
```

更多信息，请参阅[文档](https://levilamina.liteldev.com)。

### 更新

考虑到数据安全性，我们不提供更新方法。如果您想更新LeviLamina，请在其他位置安装新版本，并将下面显示的文件复制到您的服务器目录中：

- `worlds/`
- `server.properties`

## 使用

要启动服务器，只需运行`bedrock_server_mod.exe`：

```sh
./bedrock_server_mod.exe
```

更多信息，请参阅[文档](https://levilamina.liteldev.com)。

## 致谢

感谢所有为此项目做出贡献的人。

![Contributors](https://contrib.rocks/image?repo=LiteLDev/LeviLamina)

## 贡献

请随意参与！[提交问题](https://github.com/LiteLDev/LeviLamina/issues/new/choose)或提交PR。

LeviLamina遵循[Contributor Covenant](https://www.contributor-covenant.org/version/2/1/code_of_conduct/)行为准则。

## 许可证

[LGPL-3.0-only](LICENSE) © 2021-2023 LiteLDev

## 星星的历史

![Star History Chart](https://api.star-history.com/svg?repos=LiteLDev/LeviLamina&type=Date)

## 免责声明

LeviLamina（以下简称“本软件”）由LiteLDev（以下简称“开发者”）开发和提供。本软件旨在帮助用户管理和安装各种软件包，但不对任何软件包的内容、质量、功能、安全性或合法性负责。用户应自行决定使用本软件，并承担所有相关风险。

开发者不保证本软件的稳定性、可靠性、准确性或完整性。开发者不对本软件中可能存在的任何缺陷、错误、病毒或其他有害组件承担责任。开发者不对因使用本软件而导致的直接或间接损害（包括但不限于数据丢失、设备损坏、利润损失等）承担责任。

开发者保留随时修改、更新或终止本软件及其相关服务的权利，无需事先通知用户。用户应备份重要数据，并定期检查本软件的更新。用户在使用本软件时应遵守相关法律法规，尊重他人的知识产权和隐私权，不得将本软件用于任何非法或侵权活动。如果用户违反上述规定并对任何第三方造成损害或被任何第三方提出索赔，开发者不承担任何责任。

如果您对本免责声明有任何疑问或意见，请联系开发者。
