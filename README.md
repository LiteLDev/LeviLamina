# LiteLoaderBDS - New Era Bedrock Dedicated Servers Plugin Loader. 

<a href="https://github.com/LiteLDev/LiteLoader/actions">![status](https://img.shields.io/github/workflow/status/LiteLDev/LiteLoader/Build%20LiteLoader?style=for-the-badge)</a>
<a href="https://discord.gg/27KTrxHc9t">![Discord](https://img.shields.io/discord/849252980430864384?style=for-the-badge)</a>
<a href="https://t.me/liteloader">![Telegram](https://img.shields.io/badge/telegram-LiteLoader-%232CA5E0?style=for-the-badge&logo=Telegram)</a><br>
<a href="https://github.com/LiteLDev/LiteLoader/releases/latest">![Latest Tag](https://img.shields.io/github/v/tag/LiteLDev/LiteLoader?label=LATEST%20TAG&style=for-the-badge)![GitHub
Releases (by
Asset)](https://img.shields.io/github/downloads/LiteLDev/LiteLoader/latest/total?style=for-the-badge)</a><br>
[Donate us(afdian)](https://afdian.net/@liteldev)  
[Official Forum](https://forum.litebds.com/)  

##### English | [简体中文](https://github.com/LiteLDev/LiteLoader/blob/main/README_en.md)

![[object Object]](https://socialify.git.ci/LiteLDev/LiteLoader/image?description=1&descriptionEditable=%E6%96%B0%E6%97%B6%E4%BB%A3%20BDS%20%E6%8F%92%E4%BB%B6%E5%8A%A0%E8%BD%BD%E5%99%A8&font=KoHo&forks=1&logo=https%3A%2F%2Fgithub.com%2FLiteLDev%2Fdocs%2Fblob%2Fmaster%2Fimages%2Ficon.ico%3Fraw%3Dtrue&name=1&owner=1&pattern=Brick%20Wall&pulls=1&stargazers=1&theme=Light)

`LiteLoader` is an unofficial plugin loader that provides basic API support for `Bedrock Dedicated Server`, with a massive API, lots of packed utility interfaces, a rich event system and powerful basic interface support.

Writing plugins in C++, Golang and other languages allows developers to easily extend and customize BDS functionality, making it easy to learn and extremely flexible.

## 🎁 First impression
> “Why should I choose LiteLoader?”

 Easy to use, intuitive interface!

```c++

```


<br>

## 💎 Advantage

- 📕 Full access to all classes and functions
- 💻 Auto-generacted C++ headers
- 💡 Free and simple coding experience
- 🔌 APIs of high quality and large quantity
- 🛡 Fix some vulnerabilities in BDS to ensure the stability and security of your server
- 🏃 Open-source

------

## 💻 Install

### For Windows

1. Download `LiteLoader.zip` from [Releases](https://github.com/LiteLDev/LiteLoader/releases) or [Actions](https://github.com/LiteLDev/LiteLoader/actions), unzip it to BDS directory
2. Run `SymDB2.exe` to generate symbol files(`bedrock_server.symdb2`) and BDS with export symbols `bedrock_server_mod.exe`(plugins in future may require this version of bds), before you run `SymDB2.exe` you need to check if the `bedrock_server.pdb` exists

### For Linux

```
docker pull shrbox/liteloaderbds
docker create --name liteloader -p 19132:19132/udp -i -t shrbox/liteloaderbds
```

Start server: `docker container start liteloader`

Stop server(uncommended): `docker container stop liteloader`

Show console: `docker attach liteloader`

Exit console: press `Ctrl + P + Q`, if you press `Ctrl + C` server process will exit
If you want to manage server file, use `docker volume --help` for more details

Installed! Next, you can install what you want **LL** plugins!

## 📥AutoUpdate

From version `2.0.0`, LL has added an autoupdate function.  
If in the same BDS version, LiteLoader update will **automatically push**, and **automatically install** the next time the server is started.  
The latest features, get the first time! Eliminate the trouble of repeated manual upgrades!  

## 🎯 load plugins

LL plugins are mainly published in **MineBBS**, please [click here](https://www.minebbs.com/resources/?prefix_id=59) to find and download your LL plugins

1. If the download is a .zip, please unzip
2. Put all the obtained content directly into the `plugins` directory
3. run `bedrock_server_mod.exe`

<br>

------

## 📕 LL plugin development

## Develop

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
[点击这里](https://github.com/LiteLDev) Check out more open source LL plugins as example plugins.  
You can learn plugin development methods and techniques here

<br>

## 🔨 build project

> 前往`LiteLoader`项目的[`GitHub Actions`](https://github.com/LiteLDev/LiteLoaderBDS/actions)页面获取最新的自动构建结果

Of course, if you are willing to build the project yourself, or contribute code to LiteLoader, you can build by yourself according to the following instructions

1. Install newest **Microsoft Visual Studio** with standard C++ building suite
2. Install the newest version of **Windows SDK**
3. Open `LiteLoader.sln` project files,Click on **Build**

<br>

## 🎬 Participate in contribution

  You can use the following methods to contribute to the `LiteLoader` project

1. Contribute code, maintain symbols
2. Help us modify and optimize development documents
3. Write the new API that you want in the format and submit a PR, or make good suggestions
4. Help us promote LL ,support our development

⭐⭐⭐We welcome your contributions to LiteLoader!⭐⭐⭐  

如果你有意为LL贡献代码，欢迎👉[移步 LL 文档站]()👈查看 **项目维护与支持文档**  

有你们，LiteLoader将变得更好~

<br>

------

## 📍 LICENSE
You must accept the Minecraft EULA.
- It means **DO NOT MAKE COMMERCIAL USE OF ANYTHING which breaks the EULA.**
- Accepting this **LICENSE** means you **ACCEPTED** [Minecraft EULA](https://account.mojang.com/terms) too.
- If you violate the **EULA**, any legal liability is **IRRELEVANT** to the developers
- **NO WARRANTY**

[LiteLoader](https://github.com/LiteLDev/LiteLoader) GPLv3 with extra restrictions&exceptions  
[BedrockX](https://github.com/Sysca11/BedrockX) GPLv3 with extra restrictions&exceptions  
[ElementZero](https://github.com/Element-0/ElementZero) GPL v3  
[ChakraCore](https://github.com/chakra-core/ChakraCore) MIT License  
[OpenSSL](https://github.com/openssl/openssl) Apache-2.0 License  
[SimpleIni](https://github.com/brofield/simpleini) MIT License  
[Nlohmann-Json](https://github.com/nlohmann/json) MIT License  
[nbt-cpp](https://github.com/handtruth/nbt-cpp) MIT License  

### Extra Restrictions & Exceptions
If you provides a server hosting service,you can use this framework for free, but you SHOULD NOT make PRIVATE changes to this framework as a selling point. If you fixed or tweaked the code, please pull request, instead of making it private for commercial use. 
> Do not do evil.

Although we expected to build an open-source community, but forcing everything open-source will ruin this community.
So you can write plugins based on `LiteXLoader` with ANY open-source license or even dont publish your source code.
but if you modified the framework, or write a new framework based on this framework, you MUST open-source it.

## 🏆 Thanks
#### Important Contributors

| ![ShrBox](https://avatars.githubusercontent.com/u/53301243?s=96&v=4) | ![dreamguxiang](https://avatars.githubusercontent.com/u/62042544?s=96&v=4) | ![dreamguxiang](https://avatars.githubusercontent.com/u/42824603?s=96&v=4) | ![wzy](https://avatars.githubusercontent.com/u/59381521?s=96&v=4) | ![xiaoqch](https://avatars.githubusercontent.com/u/37901097?s=96&v=4) | ![yqs112358](https://avatars.githubusercontent.com/u/37969157?s=96&v=4) | ![Sysca11](https://avatars.githubusercontent.com/u/46832985?s=96&v=4) |
| ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | :----------------------------------------------------------: | :----------------------------------------------------------: |
| [@ShrBox](https://github.com/ShrBox)                         | [@dreamguxiang](https://github.com/dreamguxiang)             | [@WangYneos](https://github.com/WangYneos)                   | [@wzy](https://github.com/wzyyyyyyy)                         | [@xiaoqch](https://github.com/xiaoqch)                       |          [@yqs112358](https://github.com/yqs112358)          |            [@Sysca11](https://github.com/Sysca11)            |

## 📞 联系我们

LiteLoader QQ group：656669024 [Click to join](https://jq.qq.com/?_wv=1027&k=lagwtrfh)  
Discord ：#LiteLoaderBDS & LXL [Click to join](https://discord.gg/4tBQHc9u7p)  
Telegram ：#LiteLoader [Click to join](https://t.me/LiteLoader)

欢迎反馈崩溃和版本适配问题，以及参与相关技术讨论与交流。

## 💕赞助作者💕
项目已接入爱发电 [点击此处](https://afdian.net/@liteldev?tab=home)    

给我们不断继续下去的动力！  
