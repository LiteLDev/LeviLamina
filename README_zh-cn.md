# LiteLoaderBDS - 划时代 x 跨语言BDS插件加载器

[![status](https://img.shields.io/github/actions/workflow/status/LiteLDev/LiteLoaderBDS/cmake_repo.yml?style=for-the-badge)](https://github.com/LiteLDev/LiteLoaderBDS/actions)
[![Discord](https://img.shields.io/discord/849252980430864384?color=blue&label=Discord&style=for-the-badge)](https://discord.gg/27KTrxHc9t)
[![Telegram](https://img.shields.io/badge/telegram-LiteLoader-%232CA5E0?style=for-the-badge&logo=Telegram)](https://t.me/liteloader)
[
![Latest Tag](https://img.shields.io/github/v/tag/LiteLDev/LiteLoaderBDS?label=LATEST%20TAG&style=for-the-badge)
![GitHub Releases (by Asset)](https://img.shields.io/github/downloads/LiteLDev/LiteLoaderBDS/latest/total?style=for-the-badge)
](https://github.com/LiteLDev/LiteLoaderBDS/releases/latest)  
QQ群: [656669024](https://jq.qq.com/?_wv=1027&k=lagwtrfh) QQ2群: [850517473](https://jq.qq.com/?_wv=1027&k=zeUbrETH)

##### [English](README.md) | 简体中文

![LiteLoaderBDS](https://socialify.git.ci/LiteLDev/LiteLoaderBDS/image?description=1&font=KoHo&forks=1&issues=1&logo=https%3A%2F%2Fgithub.com%2FLiteLDev%2Fdocs%2Fraw%2Fmain%2Fassets%2FLogo.png&name=1&owner=1&pattern=Circuit%20Board&pulls=1&stargazers=1&theme=Light)

`LiteLoaderBDS` 是一个非官方的 `Minecraft` 服务端插件加载器，为基岩版专用服务器——`Bedrock Dedicated Server`（以下简称**
BDS**）提供插件开发支持 和 插件加载服务，弥补了官方行为包开发接口长期以来存在的一些不足。

`LiteLoader` 提供了海量的API、强大的事件系统以及大量封装的开发基础设施接口，为拓展基岩版**BDS**
的更多玩法和功能提供了坚实的基础。通过插件，可以很容易地拓展BDS的功能，相关开发易于学习，且开发方式比较灵活。

项目支持使用 **C++、JavaScript、Lua、C#** 等各种语言编写插件。同时，插件不需要随着**BDS**
版本更新而不断修改代码，仅需本项目在底层适配更新即可，给插件开发与维护带来了很大的便利。

## 🎁 第一印象

> “为什么我应该选择LiteLoader？”  
> 易于使用，直观的接口！

#### C++语言示例插件

```c++
#include <llapi/EventAPI.h>
#include <llapi/LoggerAPI.h>
#include <llapi/LLAPI.h>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/Actor.hpp>

Logger logger("AttackLog");

void PluginInit() {
    LL::registerPlugin("PluginName", "Introduction", LL::Version(1, 0, 0));
    logger.info("插件 xxx 已加载.");
    //监听玩家攻击事件
    Event::PlayerAttackEvent::subscribe([](const Event::PlayerAttackEvent& ev) {
        Player* player = ev.mPlayer;
        Actor* actor = ev.mTarget;
        logger.info(u8"玩家:{} 攻击了 {} | 坐标 {} 维度 {}",
            player->getRealName(), actor->getTypeName(), 
            actor->getPos().toString(), std::to_string(actor->getDimensionId())
        );
        return true;
    });
}
```

#### 脚本语言示例插件

```javascript
// 注册关服命令
mc.listen("onServerStarted", () => {
    const cmd = mc.newCommand("stopsvr", "关闭服务器");
    cmd.overload();
    cmd.setCallback((_cmd, ori, out, _res) => {
        out.success("关服命令执行成功");
        mc.broadcast(`${ori.player.realName}执行了关服命令。服务器将在5秒之后关闭`);

        //执行关服命令
        setTimeout(() => mc.runcmd("stop"), 5000);
    });
    cmd.setup();
});
```

<br/>

## 💎 优势

- 💻 支持多种不同的语言开发插件，保持接口统一

| 目前已支持的插件开发语言   | `C++`、`JavaScript(NodeJs)`、`Lua` 、`.NET` |
| -------------------------- |------------------------------------------|
| **即将支持的插件开发语言** | `Python`、`Ruby`、`TypeScript`、`Go`        |

- 📕 开发体验流畅，兼容性强
    - 拥有自动生成的C++头文件，可以访问`BDS`所有的类和功能，拥有完善的工具链支持，且功能不断发展中
    - 对于脚本语言插件，拥有多语言代码补全库、强大的VSCode插件、热加载系统……众多辅助工具，帮你更有效地写好每一行代码
    - 版本更新时，将保证 API 基本 **向下兼容**，插件几乎不需要随版本更新而修改代码。`LiteLoader`
      系列独有符号查找技术，跨版本 **自动适配** 不再是梦想

- 📋 开发文档完善，讲解详细
    - 欢迎 👉[移步 LiteLoader 文档站](https://docs.litebds.com/)👈 查看更多

- 🎈 大量封装完善的的接口
    - 拥有众多游戏API支持：玩家，实体，方块，物品，容器，NBT，服务器系统……
    - 多达 **五十多种** 游戏事件监听，不管什么事情发生，都可以第一时间响应

- 🛡 安全，稳定，通用
    - 修复BDS中的一些漏洞，确保您的服务器的稳定性和安全性
    - 广泛使用SEH异常保护框架，将服务器崩溃的风险降到最低
    - 支持通过 **Wine** 在Linux、MacOS平台运行，给其他平台也带来自由的插件体验：一次编写，**多平台共享**

- 🏆 应用生态健全
    - 海量现有插件，成熟发布平台，即刻 👉[前往官方论坛](https://www.litebds.com/)👈 查找并下载你喜欢的 LL 插件

- 🏃 开源 & 社区共建
    - 项目采用 `LGPL-3.0` 开源许可证，**永远不会** 收费或者推出商业版。
    - 设计思想采取 **去中心化** 设计，放心享受 **自由** 的插件加载框架！

------

## 💻 安装LiteLoaderBDS

请参考[安装指南](https://docs.litebds.com/zh-Hans/#/Usage?id=%f0%9f%92%bb-%e5%ae%89%e8%a3%85liteloaderbds)。
## 🎯 安装插件

请参考[插件安装指南](https://docs.litebds.com/zh-Hans/#/Usage?id=%f0%9f%8e%af-%e5%ae%89%e8%a3%85%e6%8f%92%e4%bb%b6)。

------

## 📕 编写插件

请参考[插件开发指南](https://docs.litebds.com/zh-Hans/#/README?id=%f0%9f%9b%b4-%e6%88%91%e6%83%b3%e5%8a%a8%e6%89%8b%e5%86%99%e4%b8%80%e4%b8%aa%e6%8f%92%e4%bb%b6%ef%bc%8c%e8%a6%81%e6%80%8e%e4%b9%88%e5%81%9a%e5%91%a2%ef%bc%9f)。

### 开发辅助工具 - VSCode 开发辅助插件 & 补全库

使用 Moxicat 开发的 LiteLoader 开发辅助插件
帮助你更好地完成**脚本插件**的开发!
代码提示、自动补全、自动文档、错误提醒、运行时调试……
只有你想不到，没有他做不到
用过绝不后悔的顶级插件开发体验!

[点击这里](https://www.minebbs.com/resources/llscripthelper.2672/)
查看扩展说明与介绍
VSCode扩展商店搜索`LLScriptHelper`，安装**LLScriptHelper**，即刻体验

### 开发辅助工具 - Blockly-LXL 图形化开发套件

没有编程基础？对复杂的语言规则感到厌烦?
你有没有想过，BDS插件开发可以像拼图一样容易?

看这里!pa733的 Blockly-LXL 图形化开发套件，将插件开发体验提升到了新的高度

[点击这里](https://www.minebbs.com/resources/blockly-lxl.2671/)
查看相关安装与使用说明

------

## 🔨 构建项目

> 前往 [`GitHub Actions`](https://github.com/LiteLDev/LiteLoaderBDS/actions) 来获取最新的构建工件(artifact)
>
> 当然，如果您愿意自己构建项目，或者向 LiteLoader 贡献代码，您可以按照以下说明自行构建项目

1. 安装最新版本的 **Microsoft Visual Studio** 和标准的 C++ 桌面开发套件 （或者你也可以只安装完整的 **msbuild**
   编译器套件，并配置好编译环境）
2. 安装最新的 **Windows SDK**
3. 使用你熟悉的 IDE （VS / VSCode / CLion等）打开项目目录，对 cmake 项目进行编译生成
4. 编译生成成功之后，返回到项目根目录，执行 Scripts 文件夹中的 `PackRelease.cmd` 脚本
5. 执行完之后，根目录 `RELEASE` 文件夹内的内容即为完整的 `LiteLoader` 环境及所有的依赖库
6. 如果需要 LL 的调试符号，则执行另一个 `PackReleaseWithPDB.cmd` 脚本，执行完后`RELEASE` 文件夹内还会附带上所有必要的调试符号，以方便调试

## 🎬 参与贡献

您可以使用以下方法为 `LiteLoader` 项目做出贡献

1. 贡献代码，维护项目和符号，增加新的API和事件以及基础设施
2. 帮助我们修改并优化开发文档、使用文档
3. 在GitHub Issue中反馈使用过程中遇到的问题，或者提出好的建议
4. 帮助我们推广 `LiteLoaderBDS`，支持我们的发展

⭐⭐⭐我们欢迎您的贡献！⭐⭐⭐

PS：如果你有意为LL贡献代码，欢迎👉[移步 LiteLoader 文档站](https://docs.litebds.com/#/zh_CN/Maintenance/)👈查看 **
项目维护与支持文档**

------

## 📍 许可证

- **开发者不对您负责，开发者没有义务为你编写代码、为你使用造成的任何后果负责**

| Project                                                                 | License                                                          |
| ----------------------------------------------------------------------- | ---------------------------------------------------------------- |
| [LiteLoader](https://github.com/LiteLDev/LiteLoader)                    | LGPLv3 with extra exceptions                                     |
| [ScriptX](https://github.com/Tencent/ScriptX)                           | Apache License Version 2.0                                       |
| [OpenSSL](https://github.com/openssl/openssl)                           | Apache-2.0 License                                               |
| [SimpleIni](https://github.com/brofield/simpleini)                      | MIT License                                                      |
| [Nlohmann-Json](https://github.com/nlohmann/json)                       | MIT License                                                      |
| [nbt-cpp](https://github.com/handtruth/nbt-cpp)                         | MIT License                                                      |
| [ThreadPool](https://github.com/jhasse/ThreadPool)                      | Zlib License                                                     |
| [LightWebSocketClient](https://github.com/cyanray/LightWebSocketClient) | MIT License                                                      |
| [magic_enum](https://github.com/Neargye/magic_enum)                     | MIT License                                                      |
| [dyncall](https://www.dyncall.org/index)                                | [ISC License](https://www.dyncall.org/license)                   |
| [vcproxy](https://github.com/pr701/vcproxy)                             | MIT License                                                      |
| [RawPDB](https://github.com/MolecularMatters/raw_pdb)                   | BSD 2-Clause License                                             |
| [SQLiteCpp](https://github.com/SRombauts/SQLiteCpp)                     | MIT License                                                      |
| [compact_enc_det](https://github.com/google/compact_enc_det)            | Apache-2.0 License                                               |
| [detours](https://github.com/microsoft/Detours)                         | MIT License                                                      |
| [httplib](https://github.com/yhirose/cpp-httplib)                       | MIT License                                                      |
| [magic_enum](https://github.com/Neargye/magic_enum)                     | MIT License                                                      |
| [entt](https://github.com/skypjack/entt)                                | MIT License                                                      |
| [fmt](https://github.com/fmtlib/fmt)                                    | [License](https://github.com/fmtlib/fmt/blob/master/LICENSE.rst) |
| [gsl](https://github.com/microsoft/GSL)                                 | MIT License                                                      |
| [leveldb](https://github.com/google/leveldb)                            | BSD-3-Clause License                                             |
| [parallel-hashmap](https://github.com/greg7mdp/parallel-hashmap)        | Apache-2.0 License                                               |
| [Base64](https://github.com/WangYneos/Base64)                           | MIT License                                                      |
| [EldenRingMods](https://github.com/techiew/EldenRingMods)               | MIT License                                                      |

### 额外限制和例外

如果你提供服务器托管服务，你可以免费使用这个框架，但你不应该对这个框架进行私下更改或者作为卖点。去除版权以及赞助商的信息是一件非常可耻的事情！如果您修复或调整了代码，请提交PR，而不是将其设为私有或用于商业用途。
> 不要作恶。

虽然我们期望建立一个开源社区，但是强迫一切开源会毁了这个社区。 因此，您可以使用任何开源许可证编写基于"LiteLoader"
的插件，甚至不发布您的源代码。 但是如果你修改了框架或者基于这个框架编写了一个新的框架，你必须开源它。

如果你想要分发，转载本框架，你必须得到我们的授权！

## 🏆 致谢

- LiteLDev 开发组全体成员对项目的巨大贡献
- 开源 [ScriptX](https://github.com/Tencent/ScriptX) 项目提供的跨语言脚本引擎支持
- ScriptX开发者 [@LanderlYoung](https://github.com/Tencent/ScriptX/commits?author=LanderlYoung) 在开发过程中给予的很多帮助
- [LiteLuaLoader](https://github.com/wzyyyyyyy) 项目 和 [BDSPyRunner](https://github.com/twoone-3/BDSpyrunner) 项目
  提供的很多底层接口实现
- 感谢整个BDS开源社区为相关技术发展添砖加瓦

#### 重要贡献者

| ![ShrBox](https://avatars.githubusercontent.com/u/53301243?s=96&v=4) | ![dreamguxiang](https://avatars.githubusercontent.com/u/62042544?s=96&v=4) | ![WangYneos](https://avatars.githubusercontent.com/u/42824603?s=96&v=4) | ![wzy](https://avatars.githubusercontent.com/u/59381521?s=96&v=4) | ![xiaoqch](https://avatars.githubusercontent.com/u/37901097?s=96&v=4) | ![yqs112358](https://avatars.githubusercontent.com/u/37969157?s=96&v=4) | ![Sysca11](https://avatars.githubusercontent.com/u/46832985?s=96&v=4) | ![RimuruChan](https://avatars.githubusercontent.com/u/42002296?s=96&v=4) |
| :------------------------------------------------------------------: | :------------------------------------------------------------------------: | :---------------------------------------------------------------------: | :---------------------------------------------------------------: | :-------------------------------------------------------------------: | :---------------------------------------------------------------------: | :-------------------------------------------------------------------: | :----------------------------------------------------------------------: |
|                 [@ShrBox](https://github.com/ShrBox)                 |              [@dreamguxiang](https://github.com/dreamguxiang)              |               [@WangYneos](https://github.com/WangYneos)                |               [@wzy](https://github.com/wzyyyyyyy)                |                [@xiaoqch](https://github.com/xiaoqch)                 |               [@yqs112358](https://github.com/yqs112358)                |                [@Sysca11](https://github.com/Sysca11)                 |               [@RimuruChan](https://github.com/RimuruChan)               |

**感谢 [JetBrains](https://www.jetbrains.com/)
给开源开发者分配免费的IDE许可证，例如 [CLion](https://www.jetbrains.com/clion/)** 。

[<img src="https://upload.cc/i1/2021/12/29/XNohu5.png" width="200"/>](https://www.jetbrains.com/)
