# LiteLoader
简体中文 | [English](README.md)   
[捐赠(爱发电)](https://afdian.net/@liteldev)  
[官方论坛](https://forum.litebds.com/)  
<a href="https://github.com/LiteLDev/LiteLoader/actions">![status](https://img.shields.io/github/workflow/status/LiteLDev/LiteLoader/Build%20LiteLoader?style=for-the-badge)</a>
<a href="https://discord.gg/27KTrxHc9t">![Discord](https://img.shields.io/discord/849252980430864384?style=for-the-badge)</a>
<a href="https://t.me/liteloader">![Telegram](https://img.shields.io/badge/telegram-LiteLoader-%232CA5E0?style=for-the-badge&logo=Telegram)</a><br>
<a href="https://github.com/LiteLDev/LiteLoader/releases/latest">![Latest Tag](https://img.shields.io/github/v/tag/LiteLDev/LiteLoader?label=LATEST%20TAG&style=for-the-badge)![GitHub Releases (by Asset)](https://img.shields.io/github/downloads/LiteLDev/LiteLoader/latest/total?style=for-the-badge)</a>
<a href="https://jq.qq.com/?_wv=1027&k=78uA5xfp">![QQ](https://img.shields.io/badge/QQ-LiteLoader-%2F05028?style=for-the-badge)</a><br>

轻量化的Bedrock Dedicated Server插件加载器  
基于[BedrockX](https://github.com/Sysca11/BedrockX)  

## 安装
### Windows
1. 从[Releases](https://github.com/LiteLDev/LiteLoader/releases)或者[Actions](https://github.com/LiteLDev/LiteLoader/actions)下载`LiteLoader.zip`，将压缩文件解压到BDS目录下  
2. 运行`SymDB2.exe`以生成符号文件(`.symdb2`) 还有修改了导出表的BDS(`bedrock_server_mod.exe`,未来的插件可能会要求该版本的bds)，运行`SymDB2.exe`之前你需要检查`bedrock_server.pdb`文件是否存在  

## 开发者提示
1. 运行 `SymDB2.exe -def`  
2. 把 `bedrock_server.dll` 加入 `[Properties（项目属性） -> Linker（连接器） -> Input（输入） -> Delay Load DLL（延迟加载dll）]`  
3. 运行以下llvm-dlltool来生成可链接lib (推荐使用 Tools/llvm-dlltool-msys2 文件夹那一份)

```bash
llvm-dlltool -m i386:x86-64 -d bedrock_server_api.def -l bedrock_server_api.lib
llvm-dlltool -m i386:x86-64 -d bedrock_server_var.def -l bedrock_server_var.lib
```

4. 使用 `#pragma comment(lib, "刚生成的俩lib路径")` 或者任何你喜欢的方法将lib加入项目
5. 将`SymDBHelper.lib`加入你的项目
1. 导入EZMC头文件，享受起飞般开发效率

### Docker(Linux)
```bash
docker pull shrbox/liteloaderbds
docker create --name liteloader -p 19132:19132/udp -i -t shrbox/liteloaderbds
```
启动服务器: `docker container start liteloader`  
强制停止服务器(不推荐): `docker container stop liteloader`  
进入控制台: `docker attach liteloader`  
退出控制台请按`Ctrl + P + Q`，如果直接按`Ctrl + C`会导致服务器进程退出  
如果你想要管理服务器文件，请输入`docker volume --help`获得更多细节

## 使用方法
把.dll插件放到`plugins\`目录然后运行`bedrock_server_mod.exe`  

## 更多
请参见[Docs](https://docs.litetitle.com/)

## 使用的开源项目及其许可证
[LiteLoader](https://github.com/LiteLDev/LiteLoader) GPL v3  
[BedrockX](https://github.com/Sysca11/BedrockX) GPL v3  
[ElementZero](https://github.com/Element-0/ElementZero) GPL v3  
[ChakraCore](https://github.com/chakra-core/ChakraCore) MIT  
[OpenSSL](https://github.com/openssl/openssl) Apache-2.0 License

## 限制与例外
请参见[README.md](README.md)