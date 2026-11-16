---
layout: home
hero:
  name: LeviLamina
  text: Minecraft 基岩版模组加载器
  tagline: 适用于基岩版专用服务器和 Windows 客户端的轻量级、模块化模组加载器，LiteLoaderBDS 的后继者
  image:
    src: logo.svg
    alt: LeviLamina
  actions:
    - theme: brand
      text: 开你的第一个服务器
      link: https://levimc.org/tutorials/zh-Hans/server/first-server/
    - theme: alt
      text: 写你的第一个模组
      link: https://levimc.org/tutorials/zh-Hans/develop/first-levilamina-mod/
    - theme: alt
      text: C++ 参考
      link: /LeviLamina/api/
features:
  - title: 全面的 API
    details: 为用 C++ 编写的模组提供命令、表单、配置、事件、钩子、服务等接口。
    link: api_reference/index.md
  - title: 强大的事件系统
    details: 订阅游戏中发生的事情，从玩家加入到方块被破坏。
    link: developer_guides/how_to_guides/event_guide.md
  - title: 服务端与客户端
    details: 可运行在基岩版专用服务器和 Windows 上的 Minecraft 客户端中。
    link: versions.md
---

[![Discord](https://img.shields.io/discord/849252980430864384?style=for-the-badge&logo=discord)](https://discord.gg/v5R5P4vRZk)
[![Telegram](https://img.shields.io/badge/Telegram-blue?style=for-the-badge&logo=telegram)](https://t.me/LiteLoader)
[![656669024](https://img.shields.io/badge/656669024-red?style=for-the-badge&logo=qq)](https://qm.qq.com/cgi-bin/qm/qr?_wv=1027&k=ndxRXO1HARA8ing7OunMClOz3cQTogL0&authKey=D7QTcqnzhBzuh3zc%2F70FjgklsVvkCImTjSRqHMwYGCLwIFpxzp%2FflC97Y7AUG%2Fpy&noverify=0&group_code=656669024)
[![937236109](https://img.shields.io/badge/937236109-red?style=for-the-badge&logo=qq)](https://qm.qq.com/cgi-bin/qm/qr?_wv=1027&k=1u0nmmUIZOB716neFTlbyj_2aOQn_TV-&authKey=1lBqM20oOfdKjDnxkq09DjR729fqFfWVnaLQ7VjrDB%2FAg6qwvw6QCwdwYoRUrewU&noverify=0&group_code=937236109)
[![850517473](https://img.shields.io/badge/850517473-red?style=for-the-badge&logo=qq)](https://qm.qq.com/cgi-bin/qm/qr?_wv=1027&k=3Fxt0gwMYkoLPani_vQ9tsNfYrnVy4hK&authKey=2A%2BNk3jmRaK%2FO1FBQSjTIbStAU1kbZWkjEkyh2RTVA015eTg6c4CvVhfByc1BtGZ&noverify=0&group_code=850517473)

## LeviLamina 是什么

LeviLamina 是一个非官方的 Minecraft 基岩版模组加载器。它加载到基岩版专用服务器（BDS）或 Windows 上的 Minecraft
客户端中，加载你安装的模组，并为模组提供它们所依赖的 API：全面的 C++ API、强大的事件系统、命令、表单、配置、钩子，
以及对游戏自身类的访问。它是 LiteLoaderBDS 的后继者。

- **对服主来说**，LeviLamina 是所有服务端模组的基础：把它装进服务器，再在上面安装模组。
- **对玩家来说**，LeviLamina 在 Windows 上的 Minecraft 中运行客户端模组。
- **对模组开发者来说**，LeviLamina 是模组所依赖的 C++ API（`ll::` 和游戏自身的类），在本站和
  [C++ 参考](https://levimc.org/LeviLamina/api/)中有文档。

## 与其他项目的关系

LeviLamina 是 LeviMC 各项目的核心：

- [lip](https://levimc.org/lip/) 是包管理器：它搭建服务器、把 LeviLamina 装进服务器，并从
  [模组目录](https://levimc.org/mods/)安装模组。
- [LegacyScriptEngine](https://levimc.org/LegacyScriptEngine/) 是一个 LeviLamina 模组，运行用
  JavaScript、Lua 或 Python 编写的插件，适合不需要 C++ 的场合。
- [LeviLauncher](https://levimc.org/LeviLauncher/) 是 Minecraft 客户端的启动器：它为你安装游戏版本、
  LeviLamina 和客户端模组。

## 从这里开始

刚接触 LeviLamina？教程会一步步带你从零做成一件事：

- [开你的第一个服务器](https://levimc.org/tutorials/zh-Hans/server/first-server/)：安装 lip，搭建带 LeviLamina
  的服务器并启动它。
- [在 Windows 上玩模组](https://levimc.org/tutorials/zh-Hans/play/play-with-mods/)：用 LeviLauncher 运行
  LeviLamina 和客户端模组。
- [写你的第一个 LeviLamina 模组](https://levimc.org/tutorials/zh-Hans/develop/first-levilamina-mod/)：从模板创建模组，
  构建并加载它。

[全部教程](https://levimc.org/tutorials/zh-Hans/)

## 本站内容

- **指南**：面向服主的[使用准则](common_guides/usage_guidelines.md)和[故障排除](user_guides/troubleshooting.md)；
  面向模组开发者的[如何做到](developer_guides/how_to_guides/event_guide.md)系列（事件、命令、表单、钩子、国际化……）、
  [Android 原生模组 API](developer_guides/android/api/mod.md) 和 LeviLamina 的[项目架构](developer_guides/architecture.md)；
  以及[常见问题](developer_guides/faq.md)和[支持的版本](versions.md)。
- **API**：[API 的各个部分](api_reference/index.md)，附带示例。
- **C++ 参考**：从头文件生成的[所有类和函数](https://levimc.org/LeviLamina/api/)。

LeviLamina 是开源项目：参见它的[仓库](https://github.com/LiteLDev/LeviLamina)和
[如何参与贡献](https://github.com/LiteLDev/LeviLamina/blob/main/CONTRIBUTING.md)。

## 鸣谢

感谢[武汉旋律云网络科技有限公司](https://www.rhymc.com/)对本项目的支持  
[![Rhymc](https://www.rhymc.com/assets/img/logo.png)](https://www.rhymc.com/)
