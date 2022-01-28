# LiteXLoader - 划时代 x 跨语言BDS脚本插件框架

[![GitHub license](https://img.shields.io/github/license/LiteLDev/LiteXLoader)](https://github.com/LiteLDev/LiteXLoader/blob/main/LICENSE)
[![Build](https://img.shields.io/badge/build-passing-brightgreen)](#)
![GitHub release (latest by date including pre-releases)](https://img.shields.io/github/v/release/LiteLDev/LiteXLoader?include_prereleases)

##### 简体中文 | [English](https://github.com/LiteLDev/LiteXLoader/blob/main/README_en.md)

![LiteXLoader](https://socialify.git.ci/LiteLDev/LiteXLoader/image?description=1&descriptionEditable=%E5%88%92%E6%97%B6%E4%BB%A3%20x%20%E8%B7%A8%E8%AF%AD%E8%A8%80%20BDS%E8%84%9A%E6%9C%AC%E6%8F%92%E4%BB%B6%E5%8A%A0%E8%BD%BD%E5%99%A8&font=KoHo&forks=1&logo=https%3A%2F%2Fgithub.com%2FLiteLDev%2FLiteXLoader%2Fblob%2Fmain%2Fassets%2FLXL.png%3Fraw%3Dtrue&owner=1&pattern=Circuit%20Board&pulls=1&stargazers=1&theme=Light)

## 🎨 简介
`LiteXLoader`是一个基岩版官方服务端`Bedrock Dedicated Server`（以下简称**BDS**）的脚本插件框架，提供强大的跨语言脚本插件支持能力和稳定的开发API支持。  

目前，基于注入技术的C++插件开发框架`LiteLoader`的使用十分广泛。它为拓展基岩版**BDS**的更多玩法和功能提供了坚实的基础，弥补了官方行为包系统长期以来存在的一些不足。

而脚本插件开发框架 `LiteXLoader` 的到来，进一步降低了开发门槛，为更多开发者参与社区发展提供了很好的支持。

使用脚本开发**BDS**插件具有上手容易、代码简洁、便于维护的优点。同时脚本插件不需要随着**BDS**版本更新而修改代码，仅需本项目在底层适配更新即可，给插件开发与维护带来了很大的便利。  

作为先进的脚本插件支持引擎，`LiteXLoader`支持使用多种不同的脚本语言编写插件，拥有完善的API系统、事件系统和大量的开发基础设施，为开发者提供了最大程度的便利。  

## 🎁 优势
> “为什么我要选择LiteXLoader？”

### 📝 封装，易用，简洁

##### 便于学习，快速编写 ⚽

对众多接口和事件进行了 **封装**，使用各种脚本语言作为基础，代码简短易上手，学习周期短 

这里用一个简易的游戏内停服插件作为参考示例：  

```javascript
let _VER = '1.1.1'
let _HasConfirmed = 1;

//加载器版本检查
if(!lxl.checkVersion(0,3,0))
    throw new Error("【加载失败】\nLXL版本过旧！请升级你的LXL版本到0.3.0及以上再使用此插件");

//注册关服命令
mc.regPlayerCmd("stop","关闭服务器", (pl,args) => {
    //鉴权
    if(!pl.isOP())
        return true;
    pl.tell("停服命令执行成功",1);
    mc.broadcast("玩家" + pl.realName + "执行停服命令。服务器将在5秒之后关闭");
    
    //执行关服命令
    setTimeout(() => {
        mc.runcmd("stop");
    },5000);
},1);
```

##### 多种脚本语言支持 📚

LXL 的插件可以使用 **多种** 不同的脚本语言开发。自由选择你的最爱！  
同时，保证面向各种语言的接口统一    

| 目前已支持的插件开发语言   | `JavaScript`，`Lua`                  |
| -------------------------- | ------------------------------------ |
| **即将支持的插件开发语言** | `Python`，`Ruby`，`C#`，`TypeScript` |

##### 开发文档内容详细，解释深入  📕

LXL 拥有 **极其详尽** 的文档说明和示例，帮助你从零开始学习，快速上手  
欢迎 👉[移步 LXL 文档站](https://lxl.litebds.com/)👈 查看更多  

##### 大量开发辅助工具  🧰

多语言补全库，强大的VSCode插件，热加载系统 ......  体验 **前所未有** 的开发体验  
众多辅助工具，帮你更有效地写好每一行代码

更多详情，请见下面的具体介绍

### 🔨 功能强大，设施完备

##### 众多的**游戏API**支持 🎈

- 玩家，实体，方块，物品，容器，NBT，服务器系统。。。。给你自由掌控世界的能力
- 多达 **五十多种** 游戏事件监听，不管什么事情发生，都可以第一时间响应

##### 方便的 开发基础设施 🧪

- 统一配置文件接口
- 统一日志接口
- 文件系统接口
- 关系型、非关系型数据库接口
- 系统调用接口
- 网络功能接口
- 脚本引擎辅助接口
- 脚本层底层调用接口
- 热加载、热卸载、热重载插件

完善，严谨，成体系的 **面向对象** api架构，符合编程逻辑的接口设计。  
让你专注于业务代码实现，而非在各种琐碎的技术细节上磕磕绊绊

### 🎨 架构设计充分

##### 兼容性强 🏆

- LXL支持通过Wine在Linux、MacOS平台运行，给Linux平台也带来自由的插件体验  
  一次编写，**多平台共享**
- 仅依赖 `LiteLoader` 加载器和标准的C/C++运行时库，没有其他的额外依赖，兼容性极强
- 兼容绝大多数其他主流插件加载器（`CSR` `PYR`等）
- 后续版本更新时将保证 API 向后兼容，脚本插件不需要随版本更新而修改代码，一次编写，**全版本适配**。

##### 模块化，高性能 🎯

- 使用 C++ 开发，底层 **性能优越** 。借助 ScriptX 的高效率通用接口，让脚本插件也可以做到高效运行。
- 底层仅有一套统一的 C++ API，维护和适配都比较方便，新版本适配速度快；`LiteLoader`系列独有符号查找技术，跨版本 **自动适配** 不再是梦想

### 💎 应用生态健全

##### 海量现有插件，成熟发布平台 ⛳

- 即刻 👉[前往MineBBS](https://www.minebbs.com/resources/?prefix_id=67)👈 查找并下载你喜欢的LXL插件  
- 同样，欢迎每一位开发者前往对应平台进行插件发布，技术交流与学习

##### 开源 & 永久免费 💡

- 项目采用 `GPL-3.0` 开源许可证，**永远不会** 收费或者推出商业版。  
- 设计思想采取 **去中心化** 设计，你可以放心享受 **自由** 的插件加载框架！  

希望社区多多贡献力量，共同维护和建设这个项目💕   

<br>

------

## 💻 安装

在安装 `LiteXLoader` 之前，你需要先配置好其依赖的 `LiteLoader` 加载器环境。  
`LiteLoader`是知名的BDS C++插件加载器，提供了强大的底层API支持。LXL使用其提供的接口，并进行了很多拓展。

1. [点击此处 前往MineBBS](https://www.minebbs.com/resources/liteloader.2059/)下载对应版本的 `LiteLoader` ，按要求解压之后运行SymDB2.exe生成相关数据
2. 完成上述操作，并确认成功
3. [点击此处 前往MineBBS](https://www.minebbs.com/resources/litexloader-x-bds.2670/)下载对应版本的`LiteXLoader`，解压
4. 把全部内容复制到 **BDS** 的`plugins`目录中。如果复制时提示文件有冲突，选择覆盖即可。

安装完毕！接下来，你就可以安装你想要的 **LXL** 插件了

## 📥自动更新

从版本`0.3.2`开始，LXL加入了自动更新的功能。  
在同一个BDS版本内，加载器的更新将 **自动推送**，在下一次启动服务端时 **自动安装**。  
最新特性，第一时间获得！免去反复手动升级的麻烦  
做一回真正的甩手掌柜😆

## 🎯 加载插件

LXL插件主要发布于**MineBBS**，请 [点击这里 前往MineBBS](https://www.minebbs.com/resources/?prefix_id=67) 查找并下载你喜欢的LXL插件

1. 如果下载得到的是压缩包，请解压
2. 将得到的所有内容直接放置到`plugins`目录中
3. 开服

> 没错，就这么简单 o(*￣▽￣*)ブ

关于具体的**安装与使用指南** ，请👉[移步LXL文档站](https://lxl.litebds.com/#/zh_CN/Usage/)👈查看

## 📡 实时调试
在BDS后台控制台执行
- `jsdebug`  
进入Js实时调试模式
- `luadebug`  
进入Lua实时调试模式

实时调试模式下，标准输入会被当做对应类型的脚本语言执行，并实时输出结果。  
如果发生错误，引擎将输出错误信息与堆栈跟踪信息。  
再次输入对应的`jsdebug`或`luadebug`将退出实时调试模式。

## 🔌 插件热管理

不用关闭服务端，就可以对LXL装载的脚本插件进行热管理。LXL提供了下面这些后台控制台命令

- `lxl list`  
- `lxl load ./plugins/xxxx.js`  
- `lxl unload xxxx.lua`  
- `lxl reload xxxx.js`  
- `lxl reload`  

关于他们的具体介绍和相关使用方法，请👉[移步 LXL 文档站](https://lxl.litebds.com/#/zh_CN/Usage/)👈查看

<br>

------

## 📕 LXL插件开发

### 开发文档与教程

请👉[移步 LXL 文档站](https://lxl.litebds.com/#/zh_CN/Development/)👈查看详细的**API文档**和**插件开发教程**  
如果有修订需求或者有新增API的需要，欢迎联系作者或者发布Issue  

[点击这里](https://github.com/LiteLDev-LXL) 查看更多开源的LXL插件，作为示例插件。  
你可以直接在生产环境中使用它们
也可以在这里学习插件开发的方法和技巧

<br>

### VSCode 开发辅助插件 & 补全库

使用 Moxicat 开发的 LiteXLoader 开发辅助插件
帮助你更好地完成LXL插件的开发  
代码提示、自动补全、自动文档、错误提醒、运行时调试。。。。
只有你想不到，没有他做不到  
用过绝不后悔的顶级插件开发体验！

![LXLDevHelper](assets/LXLDevHelper.gif)

[点击这里](https://www.minebbs.com/resources/lxldevhelper.2672/)
查看扩展说明与介绍  
VSCode扩展商店搜索`LXL`，安装**LXLDevHelper**，即刻体验

<br>

### Blockly-LXL 图形化开发套件

没有编程基础？对复杂的语言规则感到厌烦？  
你有没有想过，BDS插件开发可以像拼图一样容易？

看这里！pa733的 Blockly-LXL 图形化开发套件，将插件开发体验提升到了新的高度

![Blockly-LXL](assets/BLLXL.png)

[点击这里](https://www.minebbs.com/resources/blockly-lxl.2671/)
查看相关安装与使用说明

<br>

### CommonJs  for LXL

CJS.JS作者是callstackexceed，这个插件为在LXL下使用Js开发插件提供了大家熟知的CommonJS接口，方便Js插件的模块化设计

![CommonJs](assets/CommonJS.png)

[点击这里](https://github.com/callstackexceed/cjs.js) 前往GitHub查看使用说明，并下载使用

项目作者callstackexceed，也是MC addon `NormaConstructor`的一个开发者。  
`NormaConstructor`是一个开源的快速建造（类WorldEdit）插件，目前运行在Scripting API和LXL上。  
NC不仅需要用户，也需要开发人员。欢迎大家在 [MineBBS](https://www.minebbs.com/resources/integral-worldedit-liteloader.2738/) 和 mcpedl 关注 `NormaConstructor` 的相关进展

<br>

------

## 🔨 编译项目

> 前往`LiteXLoader`项目的[`GitHub Actions`](https://github.com/LiteLDev/LiteXLoader/actions)页面获取最新的自动构建结果

当然，如果你愿意自己编译项目，也可以按照如下说明自行编译  
VS项目采用多目标构建，构建的每种配置对应一种脚本语言

1. Install newest **Microsoft Visual Studio** with standard C++ building suite
2. Install the newest version of **Windows SDK**
3. 打开 LiteXLoader 目录下的 `LiteXLoader.sln` 项目文件，点击 **生成** 菜单中的 **批生成** 项
4. 弹出批生成对话框，选中每种语言配置对应的 **x64** 平台右侧的生成复选框
5. 选择完毕之后，点击对话框中的 **生成** 按钮，进行批生成
6. 编译生成成功之后，返回到项目根目录，执行根目录中的 `MakeRelease.cmd`，执行完之后根目录 `RELEASE` 文件夹内的内容即为完整的`LiteXLoader`及所有的依赖库

## 🎬 参与贡献

  你可以通过下面这些方法来`LiteXLoader`项目出一份力

1. 贡献代码，维护项目和符号
2. 帮助修改和优化开发文档
3. 按格式编写你想要的新API并提交PR，或者提出好的建议
4. 帮助我们宣传LXL，对我们的开发给予支持

⭐⭐⭐我们欢迎你对LiteXLoader做出自己的贡献！⭐⭐⭐  
如果你有意为LXL贡献代码，欢迎👉[移步 LXL 文档站](https://lxl.litebds.com/#/zh_CN/Maintance/)👈查看 **项目维护与支持文档**  

有你们，LiteXLoader将变得更好~

<br>

------

## 📍 许可协议声明
在使用我们的产品的时候，我们默认您已经承认并遵守了[Mojang Studios EULA](https://account.mojang.com/documents/minecraft_eula)协议。  
这意味着你不能对本项目进行任何违反EULA的商业性使用。违反EULA协议造成的一切后果由违反者自行承担。  
另外，您需要遵守本项目的`GPL-3.0`开源许可证条款，以及下列提到的各关联项目的开源许可证条款 

[LiteLoader](https://github.com/LiteLDev/LiteLoader) GPLv3 with extra restrictions&exceptions    
[ScriptX](https://github.com/Tencent/ScriptX) Apache License Version 2.0  
[BedrockX](https://github.com/Sysca11/BedrockX) GPLv3 with extra restrictions&exceptions  
[ElementZero](https://github.com/Element-0/ElementZero) GPL v3  
[ChakraCore](https://github.com/chakra-core/ChakraCore) MIT License  
[OpenSSL](https://github.com/openssl/openssl) Apache License Version 2.0    
[SimpleIni](https://github.com/brofield/simpleini) MIT License  
[Nlohmann-Json](https://github.com/nlohmann/json) MIT License  
[Hash](https://github.com/Chocobo1/Hash) GPL v3  
[ThreadPool](https://github.com/jhasse/ThreadPool) Zlib License  
[nbt-cpp](https://github.com/handtruth/nbt-cpp) MIT License  
[LightWebSocketClient](https://github.com/cyanray/LightWebSocketClient) MIT License

### Extra Restrictions & Exceptions
If you provides a server hosting service,you can use this framework for free, but you SHOULD NOT make PRIVATE changes to this framework as a selling point. If you fixed or tweaked the code, please pull request, instead of making it private for commercial use. 
> Do not do evil.

Although we expected to build an open-source community, but forcing everything open-source will ruin this community.
So you can write plugins based on `LiteXLoader` with ANY open-source license or even dont publish your source code.
but if you modified the framework, or write a new framework based on this framework, you MUST open-source it.

## 🏆 鸣谢
- 开源 [ScriptX](https://github.com/Tencent/ScriptX) 项目提供的跨语言引擎支持
- ScriptX开发者 [@LanderlYoung](https://github.com/Tencent/ScriptX/commits?author=LanderlYoung) 在开发过程中给予的很多帮助
- LiteLDev 开发组 [LiteLoader](https://github.com/LiteLDev/LiteLoaderBDS) 项目提供的加载服务与基础API  
- [LiteLuaLoader](https://github.com/wzyyyyyyy) 项目 和 [BDSPyRunner](https://github.com/twoone-3/BDSpyrunner) 项目 提供的很多底层接口实现
- 感谢整个BDS开源社区对项目做出的大大小小的贡献。感谢他们！ 💖💖

#### 重要贡献者

| ![yqs112358](https://avatars.githubusercontent.com/u/37969157?s=96&v=4) | ![wzy](https://avatars.githubusercontent.com/u/59381521?s=96&v=4) | ![twoone-3](https://avatars.githubusercontent.com/u/62778573?s=96&v=4) | ![dreamguxiang](https://avatars.githubusercontent.com/u/62042544?s=96&v=4) | ![Sysca11](https://avatars.githubusercontent.com/u/46832985?s=96&v=4) | ![RedbeanW](https://avatars.githubusercontent.com/u/29711228?s=96&v=4) | ![littlegao233](https://avatars.githubusercontent.com/u/46601807?s=96&v=4) | ![JasonZYT](https://avatars.githubusercontent.com/u/66063199?s=96&v=4) |
| :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | ------------------------------------------------------------ |
|          [@yqs112358](https://github.com/yqs112358)          |             [@wzy](https://github.com/wzyyyyyyy)             |           [@twoone-3](https://github.com/twoone-3)           |       [@dreamguxiang](https://github.com/dreamguxiang)       |            [@Sysca11](https://github.com/Sysca11)            |        [@RedbeanW](https://github.com/Redbeanw44602)         |           [@gxh](https://github.com/littlegao233)            | [@JasonZYT](https://github.com/Jasonzyt)                     |

## 📞 联系我们

LiteXLoader QQ交流群：850517473 [点击加入](https://jq.qq.com/?_wv=1027&k=zeUbrETH)  
LiteLoader QQ交流群：656669024 [点击加入](https://jq.qq.com/?_wv=1027&k=lagwtrfh)  
Discord 频道：#LiteLoaderBDS & LXL [点击加入](https://discord.gg/4tBQHc9u7p)  
Telegram 频道：#LiteLoader [点击加入](https://t.me/LiteLoader)

欢迎反馈崩溃和版本适配问题，以及参与相关技术讨论与交流。

## 💕赞助作者💕
项目已接入爱发电 [点击此处](https://afdian.net/@LiteXLoader?tab=home)    
Patreon Sponser [Click Here](https://www.patreon.com/litexloader) 

给我们不断继续下去的动力！  