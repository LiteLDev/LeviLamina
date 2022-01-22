# LiteLoaderBDS - New Era Bedrock Dedicated Servers Plugin Loader.

[![status](https://img.shields.io/github/workflow/status/LiteLDev/LiteLoader/Build%20LiteLoader?style=for-the-badge)](https://github.com/LiteLDev/LiteLoader/actions)
[![Discord](https://img.shields.io/discord/849252980430864384?style=for-the-badge)](https://discord.gg/27KTrxHc9t)
[![Telegram](https://img.shields.io/badge/telegram-LiteLoader-%232CA5E0?style=for-the-badge&logo=Telegram)](https://t.me/liteloader)
[
![Latest Tag](https://img.shields.io/github/v/tag/LiteLDev/LiteLoader?label=LATEST%20TAG&style=for-the-badge)
![GitHub Releases (by Asset)](https://img.shields.io/github/downloads/LiteLDev/LiteLoader/latest/total?style=for-the-badge)
](https://github.com/LiteLDev/LiteLoader/releases/latest)

[Donate us(afdian)](https://afdian.net/@liteldev) | [Official Forum](https://forum.litebds.com/)

##### English | [简体中文](README_zh-cn.md)

![Logo](https://socialify.git.ci/LiteLDev/LiteLoader/image?description=1&font=Inter&forks=1&issues=1&language=1&logo=https%3A%2F%2Fgithub.com%2FLiteLDev%2FWebsite%2Fraw%2Fmain%2Fimages%2Flogo-6pndg21x.png&owner=1&pattern=Plus&pulls=1&stargazers=1)

`LiteLoader` is an unofficial plugin loader that provides basic API support for `Bedrock Dedicated Server`, with a
massive API, lots of packed utility interfaces, a rich event system and powerful basic interface support.

Writing plugins in C++, Golang and other languages allows developers to easily extend and customize BDS functionality,
making it easy to learn and extremely flexible.

<br/>

## 🎁 First impression

> “Why should I choose LiteLoader?”

Easy to use, intuitive interface!

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

<br/>

## 💎 Advantage

- 📕 Full access to all classes and functions
- 💻 Auto-generated C++ headers lead to faster adaptation
- 💡 Free and simple coding experience
- 🔌 APIs of high quality and large quantity
- 🛡 Fix some vulnerabilities in BDS to ensure the stability and security of your server
- 🏃 Open-source

------

## 💻 Install

### For Windows

1. Download `LiteLoader.zip` from [Releases](https://github.com/LiteLDev/LiteLoader/releases)
   or [Actions](https://github.com/LiteLDev/LiteLoader/actions), unzip it to BDS directory
2. Run `SymDB2.exe` to generate symbol files(`bedrock_server.symdb2`) and BDS with export
   symbols `bedrock_server_mod.exe`(plugins in future may require this version of bds), before you run `SymDB2.exe` you
   need to check if the `bedrock_server.pdb` exists

### For Linux

```
docker pull shrbox/liteloaderbds
docker create --name liteloader -p 19132:19132/udp -i -t shrbox/liteloaderbds
```

Start server: `docker container start liteloader`

Stop server(unrecommended): `docker container stop liteloader`

Enter console: `docker attach liteloader`

Exit console: press `Ctrl + P + Q`. If you press `Ctrl + C`, the server process will exit. If you want to manage server
file, use `docker volume --help` for more details

Everything done! Next, you can install **LiteLoader** plugins!

<br/>

## 📥 Auto update

From version `2.0.0`, LiteLoader has added an auto-update function.  
If in the same BDS version, LiteLoader update will **automatically push**, and **automatically install** the next time
the server is started.  
The latest features, get the first time! Eliminate the trouble of repeated manual upgrades!

<br/>

## 🎯 Get plugins

LiteLoader plugins are mainly published in **MineBBS**,
please [click here](https://www.minebbs.com/resources/?prefix_id=59) to find and download your LiteLoader plugins.

There are some plugins in discussion too.

1. _If the download is a .zip, please unzip_
2. _Put all the obtained content directly into the `plugins` directory_
3. _run `bedrock_server_mod.exe`_

------

## 📕 LiteLoader plugin development

1. run `SymDB2.exe -def`
2. add `bedrock_server.dll` to `[Properties -> Linker -> Input -> Delay Load DLL]`
3. run llvm-dlltool to generate import library using the following command (Tools/llvm-dlltool-msys2 is recommended)

```bash
llvm-dlltool -m i386:x86-64 -d bedrock_server_api.def -l bedrock_server_api.lib
llvm-dlltool -m i386:x86-64 -d bedrock_server_var.def -l bedrock_server_var.lib
```

4. use `#pragma comment(lib, "path to lib")` or any method you like to add those libraries
5. add `SymDBHelper.lib` to your project
6. using headers in SDK/Header/MC and here we go
   [Click Here](https://github.com/LiteLDev) Check out more open source LiteLoader plugins as example plugins.  
   You can learn plugin development methods and techniques here

<br/>

## 🔨 Build project

> Go to [`GitHub Actions`](https://github.com/LiteLDev/LiteLoaderBDS/actions) to get the latest build artifact

Of course, if you are willing to build the project yourself, or contribute to LiteLoader, you can build it by yourself
according to the following instructions

1. Install newest **Microsoft Visual Studio** with standard C++ building suite
2. Install the newest version of **Windows SDK**
3. Open `LiteLoader.sln` project files,Click on **Build**

<br/>

## 🎬 Participate in contribution

You can use the following methods to contribute to the `LiteLoader` project

1. Contribute code, maintain symbols
2. Help us modify and optimize development documents
3. Write the new API that you want in the format and submit a PR, or make good suggestions
4. Help us promote LiteLoader, support our development

⭐⭐⭐We welcome your contributions to LiteLoader!⭐⭐⭐

------

<br/>

## 📍 LICENSE

You must accept the Minecraft EULA.

- It means **DO NOT MAKE COMMERCIAL USE OF ANYTHING which breaks the EULA.**
- Accepting this **LICENSE** means you **ACCEPTED** [Minecraft EULA](https://account.mojang.com/terms) too.
- If you violate the **EULA**, any legal liability is **IRRELEVANT** to the developers.
- **NO WARRANTY**.

[LiteLoader](https://github.com/LiteLDev/LiteLoader) GPLv3 with extra restrictions&exceptions  
[BedrockX](https://github.com/Sysca11/BedrockX) GPLv3 with extra restrictions&exceptions  
[ElementZero](https://github.com/Element-0/ElementZero) GPL v3  
[ChakraCore](https://github.com/chakra-core/ChakraCore) MIT License  
[OpenSSL](https://github.com/openssl/openssl) Apache-2.0 License  
[SimpleIni](https://github.com/brofield/simpleini) MIT License  
[Nlohmann-Json](https://github.com/nlohmann/json) MIT License  
[nbt-cpp](https://github.com/handtruth/nbt-cpp) MIT License

### Extra Restrictions & Exceptions

If you provide a server hosting service,you can use this framework for free, but you SHOULD NOT make PRIVATE changes to
this framework as a selling point. If you fixed or tweaked the code, please pull request, instead of making it private
for commercial use.
> Do not do evil.

Although we expected to build an open-source community, but forcing everything open-source will ruin this community. So
you can write plugins based on `LiteLoader` with ANY open-source license or even don't publish your source code. but if
you modified the framework, or write a new framework based on this framework, you MUST open-source it.

<br/>

## 🏆 Acknowledgement

#### Important Contributors

| ![ShrBox](https://avatars.githubusercontent.com/u/53301243?s=96&v=4) | ![dreamguxiang](https://avatars.githubusercontent.com/u/62042544?s=96&v=4) | ![WangYneos](https://avatars.githubusercontent.com/u/42824603?s=96&v=4) | ![wzy](https://avatars.githubusercontent.com/u/59381521?s=96&v=4) | ![xiaoqch](https://avatars.githubusercontent.com/u/37901097?s=96&v=4) | ![yqs112358](https://avatars.githubusercontent.com/u/37969157?s=96&v=4) | ![Sysca11](https://avatars.githubusercontent.com/u/46832985?s=96&v=4) | ![RimuruChan](https://avatars.githubusercontent.com/u/42002296?s=96&v=4) |
|:--------------------------------------------------------------------:|:--------------------------------------------------------------------------:|:-----------------------------------------------------------------------:|:-----------------------------------------------------------------:|:---------------------------------------------------------------------:|:-----------------------------------------------------------------------:|:---------------------------------------------------------------------:|:------------------------------------------------------------------------:|
|                 [@ShrBox](https://github.com/ShrBox)                 |              [@dreamguxiang](https://github.com/dreamguxiang)              |               [@WangYneos](https://github.com/WangYneos)                |               [@wzy](https://github.com/wzyyyyyyy)                |                [@xiaoqch](https://github.com/xiaoqch)                 |               [@yqs112358](https://github.com/yqs112358)                |                [@Sysca11](https://github.com/Sysca11)                 |               [@RimuruChan](https://github.com/RimuruChan)               |

**Thanks to [JetBrains](https://www.jetbrains.com/) for allocating free open-source licences for IDEs such
as [CLion](https://www.jetbrains.com/clion/)**.  
[<img src="https://upload.cc/i1/2021/12/29/XNohu5.png" width="200"/>](https://www.jetbrains.com/)
