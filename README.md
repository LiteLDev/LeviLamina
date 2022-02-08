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

`LiteLoaderBDS` is an unofficial plugin loader that provides basic API support for `Bedrock Dedicated Server`, with a
massive API, lots of packed utility interfaces, a rich event system and powerful basic interface support.

`LiteLoader` provides a massive API, a powerful event system and a large number of encapsulated development infrastructure interfaces, providing a solid foundation for extending the Bedrock Edition **BDS** with more gameplay and functionality. With plugins, it is easy to extend the functionality of BDS, the associated development is easy to learn, and the development approach is flexible.

Writing plugins in**C++，Golang，JavaScript，Lua，Python**  and other languages allows developers to easily extend and customize **BDS** functionality,
making it easy to learn and extremely flexible.

<br/>

## 🎁 First impression

> “Why should I choose LiteLoader?”

Easy to use, intuitive interface!
#### C++ language sample plugin
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
#### Sample scripting language plugin
```javascript
//Register for shutdown command
mc.regPlayerCmd("stop","close server", (pl,args) => {
    //鉴权
    if(!pl.isOP())
        return true;
    pl.tell("stop command executed successfully",1);
    mc.broadcast("Player" + pl.realName + "Execute the stop command. The server will be shut down after 5 seconds");
    
    //Execute stop command
    setTimeout(() => {
        mc.runcmd("stop");
    },5000);
},1);
```

<br/>

## 💎 Advantage
- 💻 Support for developing plugins in many different languages, Keeping the API uniform

| Supported plugin development languages | `C++`，`Golang`，`JavaScript`，`Lua` |
| -------------------------- | ------------------------------------ |
| **Upcoming supported plugin development languages** | `Python`，`Ruby`，`C#`，`TypeScript` |

- 📕 Smooth development experience with great compatibility
  - Auto-generated C++ headers, access to all `BDS` classes and functions, full toolchain support and evolving features
  - For scripting language plugins, a multi-language code completion library, a powerful VSCode plugin, a hot-loading system ...... Many tools to help you write every line of code more efficiently
  - When a version is updated, the API is guaranteed to be largely **backward compatible** and the plugin requires little or no code changes with the version update. With the `LiteLoader` series' unique symbol lookup technology, cross-version **auto-adaptation** is no longer a dream

- 📋 Well documented and explained in detail
  - Welcome 👉[move to the LiteLoader documentation web](https://lxl.litebds.com/)👈 See more  

- 🎈 Numerous well-packaged interfaces
  - Numerous game APIs support: players, entities, cubes, items, containers, NBTs, server systems ......
  - Up to **50+** game events to listen to, no matter what happens,  the first to respond

- 🛡 Secure, stable and versatile
  - Fixes a number of vulnerabilities in BDS to ensure the stability and security of your server  
  - Extensive use of the seh exception protection framework to minimise the risk of server crashes
  - Supports running on Linux, MacOS platforms via **Wine**, bringing a free plugin experience to other platforms as well: write once, **share on multiple platforms**.

- 🏆 Sound app ecosystem
  - A large number of existing plugins, mature publishing platform, instantly 👉[Go to MineBBS](https://www.minebbs.com/resources/?prefix_id=67)👈 to find and download your favorite LL plugins  
- 🏃 Open Source & Community Building
  - The project is licensed under the `GPL-3.0` open source license and will **never** be charged for or released as a commercial version.  
  - The design philosophy is **decentralised** and you can be assured of a **free** plugin loading framework!  
------

## 💻 Install

### For Windows

1. Download the latest <code>LiteLoader-<i>version</i>.zip</code> from [Releases](https://github.com/LiteLDev/LiteLoader/releases) or [Actions](https://github.com/LiteLDev/LiteLoader/actions), unzip everything to the directory of `bedrock_server.exe`. 
2. Run `SymDB2.exe` to generate the symbol file(`bedrock_server.symdb2`) and BDS with exported symbols(`bedrock_server_mod.exe`, plugins in future may require this version of BDS). Before you run `SymDB2.exe`, you need to check if `bedrock_server.pdb` exists. 
3. When the console says `Press any key to continue . . . `, press any key to close the window. Then open `bedrock_server_mod.exe` and enjoy it. 

### For Linux
Enter the following lines in your terminal: 
```
docker pull shrbox/liteloaderbds
docker create --name liteloader -p 19132:19132/udp -i -t shrbox/liteloaderbds
```
Start server: `docker container start liteloader`  
Force stop server(not recommended): `docker container stop liteloader`  
Enter console: `docker attach liteloader`  
Exit console: Press `Ctrl + P + Q`. If you press `Ctrl + C`, the server process will exit.  
If you want to manage server files, use `docker volume --help` for more details.  

Everything's done! Next, you can install **LiteLoader** plugins!  

## 📥 Auto update

From version `2.0.0`, LiteLoader has added an auto-update function.  
If in the same BDS version, LiteLoader update will **automatically push**, and **automatically install** the next time
the server is started.  
The latest features, get the first time! Eliminate the trouble of repeated manual upgrades!

<br/>

## 🎯 Get plugins

### Plugin downloads

`LiteLoader` main plugin distribution channels.

- MineBBS Forum: [click here to go to downloads](https://www.minebbs.com/resources/?prefix_id=59)
- GitHub Discussion: [Discussions - LiteLDev/LiteLoaderBDS](https://github.com/LiteLDev/LiteLoaderBDS/discussions)

### Plugin installation

1. If you downloaded a zip file, unzip it
2. Place all the obtained contents directly into the `plugins` directory
3. Run `bedrock_server_mod.exe` to start the service

For more **installation and usage guides**, please 👉[move to LiteLoader documentation site](https://lxl.litebds.com/#/zh_CN/Usage/)👈 to view

------

## 📕 LiteLoader plugin development

### Developing plugins with C++
### ① The first
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

### ② The second
1. Go to the [LiteLoader plugin template repository](https://github.com/LiteLDev/PluginTemplate) to download project templates, or create your own project repository based on the templates and download the code locally
1. Open the Template.sln project file
1. start writing the plugin code in Plugin.cpp
1. compile and generate and select the appropriate PDB file as prompted to generate the dependency libs
1. copy the plug-in to the plugins directory for testing

For plugins development examples and guidance, please 👉[go to LiteLoader documentation site](https://lxl.litebds.com/#/zh_CN/Usage/)👈  
If you have a revision request or need to add an API, please contact the author or post an Issue 

### Developing plugins using scripting Languages

1. create the file
2. write the code
3. Copy the plugin to the plugins directory for testing

Please 👉[go to LiteLoader documentation site](https://lxl.litebds.com/#/zh_CN/Development/)👈 for detailed **API documentation** and **plugin development tutorial**.  
If you have a revision request or need to add an API, please feel free to contact the author or post an Issue  

<br>

### Example Plugins
[click here](https://github.com/LiteLDev-LXL) See more open source LiteLoader plugins as sample plugins.
You can use them directly in production environments
You can also learn plugin development methods and tips here

<br>

### Development Aids - VSCode Development Aids & Complementary Libraries

Use the LiteLoader development helper plugin developed by Moxicat
Helps you do better with **script plugins**!  
Code hint, auto-completion, auto-documentation, error alert, runtime debugging ....


![LXLDevHelper](docs/assets/LXLDevHelper.gif)

[点击这里](https://www.minebbs.com/resources/lxldevhelper.2672/)
查看扩展说明与介绍  
VSCode extension store search `LXL`, install **LXLDevHelper** and experience it instantly!

<br>

### Development Aids - Blockly-LXL Graphical Development Kit

No programming foundation? Tired of complex language rules?  
Have you ever thought that BDS plug-in development could be as easy as a puzzle?

Here it is! The Blockly-LXL graphical development kit from pa733 takes the plugin development experience to a new level!

![Blockly-LXL](docs/assets/BLLXL.png)

[Click here](https://www.minebbs.com/resources/blockly-lxl.2671/)
View related installation and usage instructions
<br/>

## 🔨 Build project

> Go to [`GitHub Actions`](https://github.com/LiteLDev/LiteLoaderBDS/actions) to get the latest build artifact
>   
> Of course, if you prefer to build the project yourself, or contribute code to LiteLoader, you can build the project yourself by following these instructions

1. install the latest **Microsoft Visual Studio** and the standard C++ desktop development suite
2. Install the latest **Windows SDK**. 3.
3. Open the `LiteLoader.sln` project file and click on the **Batch Generation** item in the **Generation** menu
4. Bring up the batch generation dialog, check all the generation checkboxes on the right side of the dialog
5. When you have finished selecting, click the **Generate** button in the dialog box to perform batch generation
6. After successful compilation, go back to the project root directory and execute the `PackRelease.cmd` script in the Scripts folder.  
   After execution, the contents of the `RELEASE` folder in the root directory will be the complete `LiteLoader` environment and all dependencies.

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
[ElementZero](https://github.com/Element-0/ElementZero) GPLv3  
[ScriptX](https://github.com/Tencent/ScriptX) Apache License Version 2.0    
[ChakraCore](https://github.com/chakra-core/ChakraCore) MIT License  
[OpenSSL](https://github.com/openssl/openssl) Apache-2.0 License  
[SimpleIni](https://github.com/brofield/simpleini) MIT License  
[Nlohmann-Json](https://github.com/nlohmann/json) MIT License  
[nbt-cpp](https://github.com/handtruth/nbt-cpp) MIT License  
[Hash](https://github.com/Chocobo1/Hash) GPL v3    
[ThreadPool](https://github.com/jhasse/ThreadPool) Zlib License    
[LightWebSocketClient](https://github.com/cyanray/LightWebSocketClient) MIT License
[magic_enum](https://github.com/Neargye/magic_enum) MIT License

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


## 📞 Contact us

LiteLoader QQ Exchange Group: 656669024 [Click to join](https://jq.qq.com/?_wv=1027&k=lagwtrfh)  
LiteLoader QQ Exchange 2 Group：850517473 [Click to join](https://jq.qq.com/?_wv=1027&k=zeUbrETH)    
Discord Channel: #LiteLoaderBDS [Click to join](https://discord.gg/4tBQHc9u7p)  
Telegram channel: #LiteLoader [click to join](https://t.me/LiteLoader)