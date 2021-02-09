# LiteLoader
[简体中文](README_zhcn.md)   
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
Put .dll plugins(with builtin HookLib) into `plugin_preload\` directory  

## More
See [Wiki](https://github.com/LiteLDev/LiteLoader/wiki)
  
## LICENSE  
[BedrockX](https://github.com/Sysca11/BedrockX) GPL v3  
[LiteLoader](https://github.com/LiteLDev/LiteLoader) GPL v3  
[ElementZero](https://github.com/Element-0/ElementZero) GPL v3  
[ChakraCore](https://github.com/chakra-core/ChakraCore) MIT  