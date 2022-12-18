# LiteLoaderBDS - Epoch-making & Cross-language Bedrock Dedicated Servers Plugin Loader

[![status](https://img.shields.io/github/workflow/status/LiteLDev/LiteLoader/Build%20LiteLoader?style=for-the-badge)](https://github.com/LiteLDev/LiteLoader/actions)
[![Discord](https://img.shields.io/discord/849252980430864384?color=blue&label=Discord&style=for-the-badge)](https://discord.gg/27KTrxHc9t)
[![Telegram](https://img.shields.io/badge/telegram-LiteLoader-%232CA5E0?style=for-the-badge&logo=Telegram)](https://t.me/liteloader)
[
![Latest Tag](https://img.shields.io/github/v/tag/LiteLDev/LiteLoader?label=LATEST%20TAG&style=for-the-badge)
![GitHub Releases (by Asset)](https://img.shields.io/github/downloads/LiteLDev/LiteLoader/latest/total?style=for-the-badge)
](https://github.com/LiteLDev/LiteLoader/releases/latest)  
QQ Group: [656669024](https://jq.qq.com/?_wv=1027&k=lagwtrfh) QQ Group
2: [850517473](https://jq.qq.com/?_wv=1027&k=zeUbrETH)

##### English | [简体中文](README_zh-cn.md)

![LiteLoaderBDS](https://socialify.git.ci/LiteLDev/LiteLoaderBDS/image?description=1&font=KoHo&forks=1&issues=1&logo=https%3A%2F%2Fgithub.com%2FLiteLDev%2Fdocs%2Fraw%2Fmain%2Fassets%2FLogo.png&name=1&owner=1&pattern=Circuit%20Board&pulls=1&stargazers=1&theme=Light)

`LiteLoaderBDS` is an unofficial plugin loader that provides basic API support for `Bedrock Dedicated Server`, with a
massive API, lots of packed utility interfaces, a rich event system and powerful basic interface support.

`LiteLoader` provides a massive API, a powerful event system and a large number of encapsulated development
infrastructure interfaces, providing a solid foundation for extending the Bedrock Edition **BDS** with more gameplay and
functionality. With plugins, it is easy to extend the functionality of BDS, the associated development is easy to learn,
and the development approach is flexible.

Writing plugins in **C++, JavaScript, Lua, C#**  and other languages, which allows developers to easily extend and
customize **BDS** functionality,
making it easy to learn and extremely flexible.

<br/>

## 🎁 First impression

> - “Why should I choose LiteLoader?”
>
> - They have interface that is easy to use and intuitive!!

#### C++ language sample plugin

```c++
// Template project: https://github.com/LiteLDev/PluginTemplate
// More examples: https://github.com/LiteLDev/LiteLoaderPlugins
#include <llapi/EventAPI.h>
#include <llapi/LoggerAPI.h>
#include <llapi/LLAPI.h>
#include <llapi/mc/Actor.hpp>
#include <llapi/mc/Player.hpp>

Logger logger("AttackLog");

void PluginInit() {
    logger.info("Plugin xxx has been loaded.");
    // Subscribe Player-Attack Event
    Event::PlayerAttackEvent::subscribe([](const Event::PlayerAttackEvent& ev) {
        Player* player = ev.mPlayer;
        Actor* actor = ev.mTarget;
        logger.info("Player:{} attacks {} | at {} in Dimension {}",
            player->getRealName(), actor->getTypeName(), 
            actor->getPos().toString(), std::to_string(actor->getDimensionId())
        );
        return true;
    });
}
```

#### Script language sample plugin (Use Js as an example)

```javascript
// Register for shutdown command
mc.listen("onServerStarted", () => {
    const cmd = mc.newCommand("stopsvr", "close server");
    cmd.overload();
    cmd.setCallback((_cmd, ori, out, _res) => {
        out.success("stop command executed successfully");
        mc.broadcast(
            `${ori.player.realName} executed the stop command. The server will be shutdown after 5 seconds`
        );

        // Execute stop command
        setTimeout(() => mc.runcmd("stop"), 5000);
    });
    cmd.setup();
});
```

<br/>

## 💎 Advantage

- 💻 Support for developing plugins in many different languages, Keeping the API uniform

| Supported languages              | `C++`, `JavaScript(NodeJs)`, `Lua`, `.NET` |
| -------------------------------- |--------------------------------------------|
| **Upcoming supported languages** | `Python`, `Ruby`, `TypeScript`, `Go`        |

- 📕 Smooth development experience with great compatibility
    - Auto-generated C++ headers, access to all `BDS` classes and functions, full toolchain support and evolving
      features
    - For scripting language plugins, a multi-language code completion library, a powerful VSCode plugin, a hot-loading
      system...... Many tools to help you write every line of code more efficiently
    - When a version is updated, the API is guaranteed to be largely **backward compatible** and the plugin requires
      little or no code changes with the version update. With the `LiteLoader` series' unique symbol lookup technology,
      cross-version **auto-adaptation** is no longer a dream

- 📋 Well documented and explained in detail
    - Welcome to 👉[LiteLoader documentation](https://docs.litebds.com/)👈 to see more

- 🎈 Numerous well-packaged interfaces
    - Numerous game APIs support: players, entities, cubes, items, containers, NBTs, server systems......
    - Up to **50+** game events to listen to, no matter what happens, the first to respond

- 🛡 Secure, stable and versatile
    - Fixes a number of vulnerabilities in BDS to ensure the stability and security of your server
    - Extensive use of the seh exception protection framework to minimise the risk of server crashes
    - Supports running on Linux, MacOS platforms via **Wine**, bringing a free plugin experience to other platforms as
      well: write once, **share on multiple platforms**.

- 🏆 Sound app ecosystem
    - A large number of existing plugins, mature publishing platform, instantly
      👉[Go to official forum](https://www.litebds.com/)👈 to find and download your favorite LL plugins

- 🏃 Open Source & Community Building
    - The project is licensed under the `LGPL-3.0` open source license and will **never** be charged for or released as
      a commercial version.
    - The design philosophy is **decentralised** and you can be assured of a **free** plugin loading framework!

------

## 💻 Install

### For Windows

1. Download the latest <code>LiteLoader-<i>version</i>.zip</code>
   from [Releases](https://github.com/LiteLDev/LiteLoader/releases)
   or [Actions](https://github.com/LiteLDev/LiteLoader/actions),
2. Unzip everything into the directory of `bedrock_server.exe`. If you are prompted with conflicting files during the
   decompression process, just select `Overwrite`.
3. Ensure that the `bedrock_server.pdb` file exists.
   Run `LLPeEditor.exe` to generate the BDS with the exported symbols (`bedrock_server_mod.exe`)
4. When the console output `Press any key to continue . . .` , press any key to close the window
5. Execute `bedrock_server_mod.exe` and enjoy it!

### For Linux

We do not recommend you to use Wine due to BDS 1.19.20+ on Wine has a performance problem

#### Installation script(Ubuntu)

```
wget https://github.com/LiteLDev/LiteLoaderBDS/raw/develop/scripts/install.sh
chmod +x install.sh
./install.sh
```

#### Docker

Enter the following lines in your terminal:

```
docker pull shrbox/liteloaderbds
mkdir <install directory>
docker create --name llbds -v <install directory>:/root/bedrock-server -p 19132:19132/udp -i -t shrbox/liteloaderbds
```

`<install directory>` is directory to store data, for example: `/home/shrbox/bedrock-server`  
The first boot takes a little while to download the Bedrock Dedicated Server and LiteLoaderBDS  
Start server: `docker container start llbds -a`  
Force stop server(not recommended): `docker container stop llbds`  
Enter console: `docker attach llbds`  
Exit console: Press `Ctrl + P + Q`. If you press `Ctrl + C`, the server process will exit.

Everything's done! Next, you can install **LiteLoader** plugins!

## 🎯 Find & Install plugins

### Plugin downloads

`LiteLoader` main plugin distribution channels.

- [Official Forum](https://www.litebds.com/)
- [MineBBS](https://www.minebbs.com/resources/?prefix_id=59)

### Plugin installation

1. If you downloaded a zip file, unzip it
2. Place all the obtained contents directly into the `plugins` directory
3. Run `bedrock_server_mod.exe` to start the service

For more **installation and usage guides**, come to 👉[LiteLoader documentation](https://docs.litebds.com/#/en_US/Usage/)
👈 to view

------

## 📕 LiteLoader plugin development

### Developing plugins with C++

1. Go to the [LiteLoader plugin template repository](https://github.com/LiteLDev/PluginTemplate) to download project
   templates, or create your own project repository based on the templates and download the code locally
2. Open the Template.sln project file
3. Start writing the plugin code in Plugin.cpp
4. Compile, and select the appropriate PDB file as prompted to generate the dependency libs
5. Copy the plugin to the plugins directory for testing

For plugins development examples and guidance, please come to
👉[LiteLoader documentation](https://docs.litebds.com/#/en_US/Usage/)👈  
If you have a revision request or need to add an API, please contact the author or post an Issue

### Developing plugins using scripting Languages

1. Create the file
2. Write the code
3. Copy the plugin to the plugins directory for testing

Please come to 👉[LiteLoader documentation](https://docs.litebds.com/#/en_US/Development/)👈 for detailed **API
documentation** and **plugin development tutorial**.
If you have a revision request or need to add an API, please feel free to contact the author or post an Issue

### Example Plugins

[Click here](https://github.com/LiteLDev) for more open source LiteLoader plugins as sample plugins.
You can use them directly in production environments
You can also learn plugin development methods and tips here

### Development Aids - VSCode Development Aids & Complementary Libraries

Use the LiteLoader development helper plugin developed by Moxicat  
Helps you do better with **script plugins**!  
Code hint, auto-completion, auto-documentation, error alert, runtime debugging and so on

[Click here](https://www.minebbs.com/resources/llscripthelper.2672/)
View more description and introduction of this extension  
VSCode extension store search `LLScriptHelper`, install **LLScriptHelper** and experience it instantly!

### Development Aids - Blockly-LXL Graphical Development Kit

No programming foundation? Tired of complex language rules?  
Have you ever thought that BDS plug-in development could be as easy as a puzzle?  
Here it is! The Blockly-LXL graphical development kit from pa733 takes the plugin development experience to a new level!

[Click here](https://www.minebbs.com/resources/blockly-lxl.2671/)
View related installation and usage instructions

## 🔨 Build project

> Go to [`GitHub Actions`](https://github.com/LiteLDev/LiteLoaderBDS/actions) to get the latest build artifact
>
> Of course, if you prefer to build the project yourself, or contribute code to LiteLoader, you can build the project
> yourself by following these instructions

1. Install the latest version of **Microsoft Visual Studio** and the standard C++ desktop development suite (or you can
   just install the full **msbuild** compiler suite and configure the compilation environment)
2. Install the latest **Windows SDK**.
3. Use your familiar IDE (VS / VSCode / CLion, etc.) to open the project directory and compile the cmake project.
4. After successful compilation, go back to the project root directory and execute the `PackRelease.cmd` script in the
   Scripts folder.
5. After execution, the contents of the `RELEASE` folder in the root directory will be the complete `LiteLoader`
   environment and all dependencies.
6. If you need extra debugging symbols of LL, execute another `PackReleaseWithPDB.cmd` script, and the `RELEASE` folder
   will be filled with all necessary debugging symbols for easy debugging

<br/>

## 🎬 Participate in contribution

It's highly appreciated if you're interested in developing this project and follow the method to contribute to the
LiteLoaderBDS project

1. Contribute code, maintain projects and symbols, add new APIs and events and infrastructure
2. Help us modify and optimize the development documentation and usage documentation
3. Give feedback on GitHub issues or Suggest good ideas
4. Help us promote `LiteLoaderBDS` project to support our development

⭐⭐⭐We welcome your contributions to LiteLoader!⭐⭐⭐

If you are interested in contributing to LiteLoaderBDS, feel free to come to
👉[LiteLoader documentation](https://docs.litebds.com/#/en_US/Maintenance/)👈 to view **Project Maintenance and Support
Documentation**

------

<br/>

## 📍 LICENSE

- If you violate the **EULA**, any legal liability is **IRRELEVANT** to the developers.
- **NO WARRANTY**.

| Project                                                                 | License                                                          |
| ----------------------------------------------------------------------- | ---------------------------------------------------------------- |
| [LiteLoader](https://github.com/LiteLDev/LiteLoader)                    | LGPLv3                                                           |
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

### Extra Restrictions & Exceptions

If you provide a server hosting service,you can use this framework for free, but you SHOULD NOT make PRIVATE changes to
this framework or as a selling point. If you fixed or tweaked the code, please pull request, instead of making it
private
or using it for commercial propose.
> Do not do evil.

Although we expected to build an open-source community, but forcing everything open-source will ruin this community. So
you can write plugins based on `LiteLoader` with ANY open-source license or even do not publish your source code. but if
you modified the framework, or write a new framework based on this framework, you MUST open-source it.

If you want to reproduce and distribute this framework, you have to get our authorization!

<br/>

## 🏆 Acknowledgement

#### Important Contributors

| ![ShrBox](https://avatars.githubusercontent.com/u/53301243?s=96&v=4) | ![dreamguxiang](https://avatars.githubusercontent.com/u/62042544?s=96&v=4) | ![WangYneos](https://avatars.githubusercontent.com/u/42824603?s=96&v=4) | ![wzy](https://avatars.githubusercontent.com/u/59381521?s=96&v=4) | ![xiaoqch](https://avatars.githubusercontent.com/u/37901097?s=96&v=4) | ![yqs112358](https://avatars.githubusercontent.com/u/37969157?s=96&v=4) | ![Sysca11](https://avatars.githubusercontent.com/u/46832985?s=96&v=4) | ![RimuruChan](https://avatars.githubusercontent.com/u/42002296?s=96&v=4) |
| :------------------------------------------------------------------: | :------------------------------------------------------------------------: | :---------------------------------------------------------------------: | :---------------------------------------------------------------: | :-------------------------------------------------------------------: | :---------------------------------------------------------------------: | :-------------------------------------------------------------------: | :----------------------------------------------------------------------: |
|                 [@ShrBox](https://github.com/ShrBox)                 |              [@dreamguxiang](https://github.com/dreamguxiang)              |               [@WangYneos](https://github.com/WangYneos)                |               [@wzy](https://github.com/wzyyyyyyy)                |                [@xiaoqch](https://github.com/xiaoqch)                 |               [@yqs112358](https://github.com/yqs112358)                |                [@Sysca11](https://github.com/Sysca11)                 |               [@RimuruChan](https://github.com/RimuruChan)               |

**Thanks to [JetBrains](https://www.jetbrains.com/) for allocating free open-source licences for IDEs such
as [CLion](https://www.jetbrains.com/clion/)**.  
[<img src="https://upload.cc/i1/2021/12/29/XNohu5.png" width="200"/>](https://www.jetbrains.com/)

## ⭐Star History

[![Star History Chart](https://api.star-history.com/svg?repos=LiteLDev/liteloaderbds&type=Date)](https://star-history.com/#LiteLDev/liteloaderbds&Date)
