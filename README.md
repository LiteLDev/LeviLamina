# LiteLoader 2.0

[简体中文](README_zh-cn.md) | English  
[Donate us(afdian)](https://afdian.net/@liteldev)  
[Official Forum](https://forum.litebds.com/)  
<a href="https://github.com/LiteLDev/LiteLoader/actions">![status](https://img.shields.io/github/workflow/status/LiteLDev/LiteLoader/Build%20LiteLoader?style=for-the-badge)</a>
<a href="https://discord.gg/27KTrxHc9t">![Discord](https://img.shields.io/discord/849252980430864384?style=for-the-badge)</a>
<a href="https://t.me/liteloader">![Telegram](https://img.shields.io/badge/telegram-LiteLoader-%232CA5E0?style=for-the-badge&logo=Telegram)</a><br>
<a href="https://github.com/LiteLDev/LiteLoader/releases/latest">![Latest Tag](https://img.shields.io/github/v/tag/LiteLDev/LiteLoader?label=LATEST%20TAG&style=for-the-badge)![GitHub
Releases (by
Asset)](https://img.shields.io/github/downloads/LiteLDev/LiteLoader/latest/total?style=for-the-badge)</a><br>
A lightweight Bedrock Dedicated Server Plugin Loader  
Based on [BedrockX](https://github.com/Sysca11/BedrockX)

## Install

### Windows

1. Download `LiteLoader.zip` from [Releases](https://github.com/LiteLDev/LiteLoader/releases)
   or [Actions](https://github.com/LiteLDev/LiteLoader/actions), unzip it to BDS directory
2. Run `SymDB2.exe` to generate symbol files(`bedrock_server.symdb2`) and BDS with export
   symbols `bedrock_server_mod.exe`(plugins in future may require this version of bds), before you run `SymDB2.exe` you
   need to check if the `bedrock_server.pdb` exists

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
6. include EZMC headers and here we go

### Docker(Linux)

```bash
docker pull shrbox/liteloaderbds
docker create --name liteloader -p 19132:19132/udp -i -t shrbox/liteloaderbds
```

Start server: `docker container start liteloader`  
Stop server(unrecommended): `docker container stop liteloader`  
Show console: `docker attach liteloader`  
Exit console: press `Ctrl + P + Q`, if you press `Ctrl + C` server process will exit  
If you want to manage server file, use `docker volume --help` for more details

## Usage

Put .dll plugins into `plugins\` directory and run `bedrock_server_mod.exe`

## More

See [Docs](https://docs.litetitle.com/)

## LICENSE

[LiteLoader](https://github.com/LiteLDev/LiteLoader) GPLv3 with extra restrictions & exceptions  
[BedrockX](https://github.com/Sysca11/BedrockX) GPLv3 with extra restrictions & exceptions  
[ElementZero](https://github.com/Element-0/ElementZero) GPL v3  
[ChakraCore](https://github.com/chakra-core/ChakraCore) MIT  
[OpenSSL](https://github.com/openssl/openssl) Apache-2.0 License

## Restrictions & Exceptions

- First, you must accept the Minecraft EULA.
- It means **DO NOT MAKE COMMERCIAL USE OF ANYTHING which breaks the EULA.**
- Accepting this LICENSE means you ACCEPTED [Minecraft EULA](https://account.mojang.com/terms) too.
- If you violate the EULA, any legal liability is **IRRELEVANT** to the developers
- **NO WARRANTY**

Second, if you provide a server hosting service, you can use this framework for free, but you **SHOULD NOT make
PRIVATE** changes to this framework as a selling point. If you fixed or tweaked the code, please pull request, instead
of making it private for commercial use. Do not do evil.

Although we expected to build an open-source community but forcing everything open-source will ruin this community.  
So, you can write plugins based on LiteLoader with **ANY** open-source license or even don't publish your source code.
Exception, if you modified the framework, or write a new framework based on this framework, you HAVE TO open-source it.

 
