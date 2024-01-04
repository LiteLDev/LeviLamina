# LeviLamina

![LeviLamina](https://socialify.git.ci/LiteLDev/LeviLamina/image?description=1&font=Raleway&forks=1&issues=1&logo=https%3A%2F%2Fraw.githubusercontent.com%2FLiteLDev%2FLeviLamina%2FHEAD%2Fdocs%2Fimg%2Flogo.svg&name=1&owner=1&pattern=Circuit%20Board&pulls=1&stargazers=1&theme=Auto)

[![English](https://img.shields.io/badge/English-inactive?style=for-the-badge)](README.md)
![中文](https://img.shields.io/badge/简体中文-informational?style=for-the-badge)

轻量级、模块化和多功能的Minecraft Bedrock Server BDS插件加载器，曾被称为LiteLoaderBDS

LeviLamina是一个非官方的插件加载器，旨在为Minecraft Bedrock Server BDS提供必不可少的API支持。它拥有全面的API，一系列的实用接口，一个强大的事件系统，以及对基本接口的全面支持。LeviLamina提供了一个广泛的API，一个强大的事件系统，以及丰富的封装开发基础设施接口，为增强Bedrock Edition BDS的附加游戏功能和功能提供了坚实的基础。通过利用插件，扩展BDS功能的过程变得轻而易举，具有用户友好的开发过程和灵活的方法。

开发者可以轻松地用C++，JavaScript，Lua，Python，C#等语言编写插件。这种无缝集成赋予了他们轻松扩展和个性化BDS功能的能力，促进了直观的学习体验和无与伦比的灵活性。

有关更多信息，请参阅[文档](https://levilamina.liteldev.com).

## 目录

- [安全性](#安全)
- [背景](#背景)
- [安装](#安装)
  - [更新](#更新)
- [使用方法](#使用方法)
- [星星历史](#星星历史)
- [贡献](#贡献)
  - [贡献者](#贡献者)
- [许可证](#许可证)

## 安全

LeviLamina（以下简称“本软件”）由LiteLDev（以下简称“开发者”）开发和提供。本软件的设计目的是使用户能够通过加载插件来扩展Minecraft Bedrock Server BDS（以下简称“BDS”）的功能。本软件与Mojang Studios（以下简称“Mojang”）或Microsoft Corporation（以下简称“Microsoft”）没有任何关联。开发者对本软件加载的任何插件的内容、质量、功能、安全性或合法性不承担任何责任。用户应自行判断并承担所有相关风险。

开发者不保证本软件的稳定性、可靠性、准确性或完整性。开发者不对本软件中可能存在的任何缺陷、错误、病毒或其他有害组件负责。开发者不对用户使用本软件造成的任何直接或间接损害（包括但不限于数据丢失、设备损坏、利润损失等）负责。

开发者保留随时修改、更新或终止本软件及其相关服务的权利，无需事先通知用户。用户应备份重要数据并定期检查本软件的更新。用户在使用本软件时应遵守相关法律法规，尊重他人的知识产权和隐私权，不得将本软件用于任何非法或侵权活动。如果用户违反上述规定，给任何第三方造成任何损害或被任何第三方索赔，开发者不承担任何责任。如果您对本免责声明有任何疑问或意见，请联系开发者。

## 安装

该项目使用 [lip](https://github.com/lippkg/lip)。如果您尚未在本地安装，请前往查看。

首先，创建一个新的目录用于您的Minecraft服务器，并进入该目录：

```sh
mkdir myserver
cd myserver
```

接下来，使用lip安装捆绑了Minecraft Bedrock Server的LeviLamina：

```sh
lip install github.com/tooth-hub/levilamina
```

如需更多信息，请参阅[文档](https://levilamina.liteldev.com)。

### 更新

在涉及数据安全时，我们建议不要在当前位置更新LeviLamina。相反，我们建议创建一个新目录，在新目录中安装新版本的LeviLamina，并将旧位置的`worlds`目录复制到新目录中。然后，按照插件开发者提供的说明，将您使用的插件的配置文件和数据文件迁移到新目录中。

然而，如果您坚持要在相同位置更新，您可以使用以下命令来更新LeviLamina：

```sh
lip install --upgrade github.com/tooth-hub/levilamina
```

## 使用方法

要启动服务器，只需运行`bedrock_server_mod.exe`：

```sh
./bedrock_server_mod.exe
```

如需更多信息，请参阅[文档](https://levilamina.liteldev.com)。

## 星星历史

![星星历史图](https://api.star-history.com/svg?repos=LiteLDev/LeviLamina&type=Date)

## 贡献

欢迎参与！[打开一个问题](https://github.com/LiteLDev/LeviLamina/issues/new/choose)或提交Pull Requests。

LeviLamina遵循[贡献者契约](https://www.contributor-covenant.org/version/2/1/code_of_conduct/)行为准则。

### 贡献者

这个项目的存在要感谢所有的贡献者。

![贡献者](https://contrib.rocks/image?repo=LiteLDev/LeviLamina)

## 许可证

[LGPL-3.0-only](https://github.com/LiteLDev/LeviLamina/blob/HEAD/LICENSE.md) © 2021-2023 LiteLDev
