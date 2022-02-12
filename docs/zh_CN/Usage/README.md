# LiteLoader ScriptEngine - LLSE安装与使用指南

## 🎨 项目简介

`LiteLoader ScriptEngine`（以下简称**LLSE**）是一个基岩版官方服务端 `Bedrock Dedicated Server`（以下简称**BDS**）的插件框架，提供强大的跨语言脚本插件支持能力和稳定的开发API支持。  

`LiteLoader ScriptEngine` 主要发布和更新于**MineBBS**。你可以在哪里下载到`LiteXLoader`以及绝大多数相关插件

## 🎯 加载插件

1. 下载你需要加载的脚本插件
2. 把插件直接放置到`plugins`目录中
3. 开服！

> 没错，，就这么简单~

## 📡 实时调试

成功安装 **LiteLoader** 之后，在 **BDS** 后台控制台执行

- `jsdebug`  
  进入Js实时调试模式
- `luadebug`  
  进入Lua实时调试模式

实时调试模式下，标准输入会被当做对应类型的脚本语言执行，并实时输出结果。  
如果发生错误，引擎将输出错误信息与堆栈跟踪信息。  
再次输入对应的`jsdebug`或`luadebug`将退出实时调试模式。

## 🔌 插件热管理

不用关闭服务端，就可以对LLSE装载的脚本插件进行热管理。引擎提供了下面这些后台控制台命令

- `ll list`  
  列出当前加载的所有插件列表
- `ll load ./plugins/xxxx.js`  
  热加载位于指定路径的插件。路径是相对于BDS根目录的相对路径。
- `ll unload xxxx.lua`  
  热卸载在插件列表中名为 xxxx.lua 的插件
- `ll reload xxxx.js`  
  重新加载在插件列表中名为 xxxx.js 的插件
- `ll reload`  
  重新加载插件列表中的所有插件
- `ll version`  
  输出当前安装的LL版本
- `ll update`  
  手动检查LiteLoader自动更新

【热管理使用警示】

- 热卸载插件后，此插件注册的命令不会被删除。玩家使用那些命令时，会提示命令不存在
- 如果你的插件有导出的函数被其他插件 Import，则当你卸载 / 重载此插件后，其他插件对应的 Import 会失效  
- 请勿在服务器尚未启动完毕，或者服务器中有大量玩家时卸载或者重载插件！否则服务器有可能发生崩溃
- 热加载 / 热重载一个插件之后，插件注册的`onServerStarted`事件会被立刻调用一次（因为此时服务器已经开启完毕了）

插件热管理机制仅供调试插件时使用。在生产环境中最好避免使用，以免出现一些奇奇怪怪的问题。