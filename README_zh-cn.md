# LiteLoaderBDS - 新时代的BDS插件加载器

<a href="https://github.com/LiteLDev/LiteLoader/actions">![status](https://img.shields.io/github/workflow/status/LiteLDev/LiteLoader/Build%20LiteLoader?style=for-the-badge)</a>
<a href="https://discord.gg/27KTrxHc9t">![Discord](https://img.shields.io/discord/849252980430864384?style=for-the-badge)</a>
<a href="https://t.me/liteloader">![Telegram](https://img.shields.io/badge/telegram-LiteLoader-%232CA5E0?style=for-the-badge&logo=Telegram)</a><br>
<a href="https://github.com/LiteLDev/LiteLoader/releases/latest">![Latest Tag](https://img.shields.io/github/v/tag/LiteLDev/LiteLoader?label=LATEST%20TAG&style=for-the-badge)![GitHub
Releases (by
Asset)](https://img.shields.io/github/downloads/LiteLDev/LiteLoader/latest/total?style=for-the-badge)</a><br>
[赞助我们(爱发电)](https://afdian.net/@liteldev)  
[官方论坛](https://forum.litebds.com/)  

##### [English](README.md) | 简体中文

![Logo](https://socialify.git.ci/LiteLDev/LiteLoader/image?description=1&font=Inter&forks=1&issues=1&language=1&logo=https%3A%2F%2Fgithub.com%2FLiteLDev%2FWebsite%2Fraw%2Fmain%2Fimages%2Flogo-6pndg21x.png&owner=1&pattern=Plus&pulls=1&stargazers=1)

`LiteLoader` 是一个非官方的插件加载器,他提供了对`BDS`的基础API支持、具有海量的API、大量封装的实用程序接口、丰富的事件系统和强大的基本接口支持。

开发者们可以用C++, Golang等语言写插件,很容易地拓展BDS的功能,使其易于学习且非常灵活。

## 🎁 第一印象
> “为什么我应该选择LiteLoader?”  
 易于使用,直观的接口！ 

```c++
BlockInstance Actor::getBlockFromViewVector(FaceID& face, bool includeLiquid, bool solidOnly, float maxDistance, bool ignoreBorderBlocks, bool fullOnly) const {
    auto& bs = getRegion();
    auto& pos = getCameraPos();
    auto viewVec = getViewVector(1.0f);
    auto viewPos = pos + (viewVec * maxDistance);
    auto player = isPlayer() ? (Player*)this : nullptr;
    int maxDisManhattan = (int)((maxDistance + 1) * 2);
    HitResult result = bs.clip(pos, viewPos, includeLiquid, solidOnly, maxDisManhattan, ignoreBorderBlocks, fullOnly, nullptr);
    if (result.isHit() || (includeLiquid && result.isHitLiquid())) {
        BlockPos bpos;
        if (includeLiquid && result.isHitLiquid()) {
            bpos = result.getLiquidPos();
            face = result.getLiquidFacing();
        } else {
            bpos = result.getBlockPos();
            face = result.getFacing();
        }
        return Level::getBlockInstance(bpos, bs.getDimensionId());
    }
    return BlockInstance::Null;
}
```


<br>

## 💎 优势

- 📕 可以访问所有的类和功能
- 💻 拥有自动生成的C++头文件
- 💡 自由且简单的代码体验
- 🔌 大量的、高质量的API
- 🛡 修复BDS中的一些漏洞，确保您的服务器的稳定性和安全性
- 🏃 开源

------

## 💻 安装

### 对于Windows用户

1. 从 [Releases](https://github.com/LiteLDev/LiteLoader/releases) 或 [Actions](https://github.com/LiteLDev/LiteLoader/actions) 下载 `LiteLoader.zip`, 并将它解压到BDS目录
2. 运行 `SymDB2.exe` 来生成符号文件(`bedrock_server.symdb2`)和有导出符号的BDS `bedrock_server_mod.exe`(未来的插件可能会需要这个版本的BDS)。在你运行 `SymDB2.exe` 之前, 你需要检查 `bedrock_server.pdb` 是否存在

### 对于Linux用户

```
docker pull shrbox/liteloaderbds
docker create --name liteloader -p 19132:19132/udp -i -t shrbox/liteloaderbds
```

开服: `docker container start liteloader`

关服(不推荐): `docker container stop liteloader`

显示控制台: `docker attach liteloader`

退出控制台: 按下 `Ctrl + P + Q`, 如果你按下 `Ctrl + C`, 服务器进程将会退出
如果你想管理服务端文件, 使用命令 `docker volume --help` 了解详情

大功告成! 接下来, 你可以安装你想要的**LL**插件

## 📥自动更新

从`2.0.0`版本开始, LL增加了自动更新功能  
如果BDS版本相同, LiteLoader的更新将会 **自动推送**, 并且 **自动在下一次服务端开启时安装**  
最新功能, 第一事件获取更新! 免去重复手动升级的烦恼啦

## 🎯 加载插件

LL的插件主要在**MineBBS**发布, 请[点击这里](https://www.minebbs.com/resources/?prefix_id=59)来查找并下载你想要的LL插件

1. 如果下载到的是一个.zip文件, 请解压它
2. 将所有获取到的内容直接放入`plugins`目录
3. 运行`bedrock_server_mod.exe`

<br>

------

## 📕 LL插件开发

## 开发

1. 运行 `SymDB2.exe -def`
2. 将 `bedrock_server.dll` 添加入 `[项目配置 -> 链接器 -> 输入 -> 延迟加载的DLL]`
3. 使用下面的命令来生成导入的库 (建议使用Tools/llvm-dlltool-msys2)

```bash
llvm-dlltool -m i386:x86-64 -d bedrock_server_api.def -l bedrock_server_api.lib
llvm-dlltool -m i386:x86-64 -d bedrock_server_var.def -l bedrock_server_var.lib
```

4. 使用 `#pragma comment(lib, "path to lib")` 或任何其他你喜欢的方法来链接那些静态链接库
5. 将 `SymDBHelper.lib` 添加到你的项目
6. 使用SDK/Header/MC里的头文件, 让我们开始吧!
[点击这里](https://github.com/LiteLDev) 查看更多开源 LL 插件作为示例插件  
你可以在这里学习插件开发方法和技术

<br>

## 🔨 构建项目

> 前往 [`GitHub Actions`](https://github.com/LiteLDev/LiteLoaderBDS/actions) 来获取最新的构建工件(artifact)
当然，如果您愿意自己构建项目, 或者向 LiteLoader 贡献代码, 您可以按照以下说明自行构建

1. 安装最新的 **Microsoft Visual Studio** 和标准的C++桌面开发套件
2. 安装最新的 **Windows SDK**
3. 打开 `LiteLoader.sln` 项目文件, 点击 **Build**

<br>

## 🎬 参与共享

  您可以使用以下方法为 `LiteLoader` 项目做出贡献

1. 贡献代码, 维护符号
2. 帮助我们修改并优化开发文档
4. 按照格式写下你想要的新API并提交一个PR(issue), 或者提出好的建议
5. 帮助我们推广LL, 支持我们的发展

⭐⭐⭐我们欢迎您的贡献!⭐⭐⭐

------

## 📍 许可证
您必须接受Minecraft的最终用户许可协议(EULA).
- 它意味着**请勿将任何违反 EULA 的内容用于商业用途**
- 接受这个**许可证**意味着您也**接受了**[Minecraft EULA](https://account.mojang.com/terms)
- 如果您违反了**EULA**, 任何法律责任都与开发者**无关**
- **开发者不对您负责, 开发者没有义务为你写代码、为你使用造成的任何后果负责**

[LiteLoader](https://github.com/LiteLDev/LiteLoader) GPLv3以及额外限制和例外  
[BedrockX](https://github.com/Sysca11/BedrockX) GPLv3以及额外限制和例外   
[ElementZero](https://github.com/Element-0/ElementZero) GPLv3  
[ChakraCore](https://github.com/chakra-core/ChakraCore) MIT License  
[OpenSSL](https://github.com/openssl/openssl) Apache-2.0 License  
[SimpleIni](https://github.com/brofield/simpleini) MIT License  
[Nlohmann-Json](https://github.com/nlohmann/json) MIT License  
[nbt-cpp](https://github.com/handtruth/nbt-cpp) MIT License  

### 额外限制和例外
如果你提供服务器托管服务, 你可以免费使用这个框架, 但你不应该对这个框架进行私人更改作为卖点。 如果您修复或调整了代码, 请提交PR, 而不是将其设为私有用于商业用途。
> 不要作恶。
虽然我们期望建立一个开源社区, 但是强迫一切开源会毁了这个社区。
因此, 您可以使用任何开源许可证编写基于"LiteLoader"的插件,甚至不发布您的源代码。
但是如果你修改了框架或者基于这个框架编写了一个新的框架, 你必须开源它。

## 🏆 致谢
#### 重要贡献者


| ![ShrBox](https://avatars.githubusercontent.com/u/53301243?s=96&v=4) | ![dreamguxiang](https://avatars.githubusercontent.com/u/62042544?s=96&v=4) | ![dreamguxiang](https://avatars.githubusercontent.com/u/42824603?s=96&v=4) | ![wzy](https://avatars.githubusercontent.com/u/59381521?s=96&v=4) | ![xiaoqch](https://avatars.githubusercontent.com/u/37901097?s=96&v=4) | ![yqs112358](https://avatars.githubusercontent.com/u/37969157?s=96&v=4) | ![Sysca11](https://avatars.githubusercontent.com/u/46832985?s=96&v=4) | ![rimuruchan](https://avatars.githubusercontent.com/u/42002296?s=96&v=4)|
| ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: |
| [@ShrBox](https://github.com/ShrBox)                         | [@dreamguxiang](https://github.com/dreamguxiang)             | [@WangYneos](https://github.com/WangYneos)                   | [@wzy](https://github.com/wzyyyyyyy)                         | [@xiaoqch](https://github.com/xiaoqch)                       |          [@yqs112358](https://github.com/yqs112358)          |            [@Sysca11](https://github.com/Sysca11)            |            [@RimuruChan](https://github.com/RimuruChan)            |

**感谢 [JetBrains](https://www.jetbrains.com/) 给开源开发者分配免费的IDE许可证, 例如 [CLion](https://www.jetbrains.com/clion/)**.  
[<img src="https://upload.cc/i1/2021/12/29/XNohu5.png" width="200"/>](https://www.jetbrains.com/)
