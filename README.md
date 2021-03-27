# LiteLoader
[简体中文](README_zhcn.md)   
[Donate us(afdian)](https://afdian.net/@liteldev)  
[Forum](https://l.sakuralo.top/)  
<a href="https://github.com/LiteLDev/LiteLoader/actions">![status](https://img.shields.io/github/workflow/status/LiteLDev/LiteLoader/Build%20LiteLoader?style=for-the-badge)</a>
<a href="https://t.me/liteloader">![Telegram](https://img.shields.io/badge/telegram-LiteLoader-%232CA5E0?style=for-the-badge&logo=Telegram)</a><br>
<a href="https://github.com/LiteLDev/LiteLoader/releases/latest">![Latest Tag](https://img.shields.io/github/v/tag/LiteLDev/LiteLoader?label=LATEST%20TAG&style=for-the-badge)![GitHub Releases (by Asset)](https://img.shields.io/github/downloads/LiteLDev/LiteLoader/latest/total?style=for-the-badge)</a><br>
A lightweight Bedorck Dedicated Server Plugin Loader  
Based on [BedrockX](https://github.com/Sysca11/BedrockX)  

## Install
1. Download LiteLoader from [Releases](https://github.com/LiteLDev/LiteLoader/releases) or [Actions](https://github.com/LiteLDev/LiteLoader/actions), unzip it to BDS directory
2. Run `RoDB.exe` to generate symbol files(`.symdb` and `.symdef`), before you run `RoDB.exe` you need to check if the `bedrock_server.pdb` exists

## Usage
Put .dll plugins(build for LiteLoader) into `plugins\` directory  
Put .dll plugins(need preload, for example: BDSNetRunner) into `plugin\preload\` directory  

## More
See [Wiki](https://github.com/LiteLDev/LiteLoader/wiki)

## LICENSE  
[LiteLoader](https://github.com/LiteLDev/LiteLoader) GPLv3 with extra restrictions&exceptions  
[BedrockX](https://github.com/Sysca11/BedrockX) GPLv3 with extra restrictions&exceptions  
[ElementZero](https://github.com/Element-0/ElementZero) GPL v3  
[ChakraCore](https://github.com/chakra-core/ChakraCore) MIT  
[OpenSSL](https://github.com/openssl/openssl) Apache-2.0 License

## Restrictions&Exceptions
! First of all,you must accept the Minecraft EULA.  
! It means **DO NOT MAKE COMMERICIAL USE OF ANYTHING which breaks the EULA.**  
! Accepting this LICENSE means you ACCEPTED [Minecraft EULA](https://account.mojang.com/terms) too.  
! If you violate the EULA,any legal liability is **IRRELEVANT** to the developers  
! **NO WARRANTY**

Second, If you provides a server hosting service,you can use this framework for free,but you **SHOULD NOT make PRIVATE** changes to this framework as a selling point. If you fixed or tweaked the code, please pull request, instead of making it private for commercial use.
Do not do evil.

Although we expected to build an open-source community, but forcing everything open-source will ruin this community.  
So you can write plugins based on LiteLoader with **ANY** open-source license or even dont publish your source code.  
but if you modified the framework, or write a new framework based on this framework, you NEED to open-source it.
