# LiteXLoader - LXL安装与使用指南

## 🎨 项目简介

`LiteXLoader`（以下简称**LXL**）是一个基岩版官方服务端 `Bedrock Dedicated Server`（以下简称**BDS**）的插件框架，提供强大的跨语言脚本插件支持能力和稳定的开发API支持。  

`LiteXLoader` 主要发布和更新于**MineBBS**。你可以在哪里下载到`LiteXLoader`以及绝大多数相关插件

## 💻 安装

在安装 `LiteXLoader` 之前，你需要先配置好其依赖的 `LiteLoader` 加载器环境。  
`LiteLoader`是知名的BDS C++插件加载器，提供了强大的底层API支持。LXL使用其提供的接口，并进行了很多拓展。

1. [点击此处 前往MineBBS](https://www.minebbs.com/resources/liteloader.2059/)下载对应版本的 `LiteLoader` ，按要求解压之后运行SymDB2.exe生成相关数据
2. 完成上述操作，并确认成功
3. [点击此处 前往MineBBS](https://www.minebbs.com/resources/litexloader-x-bds.2670/)下载对应版本的`LiteXLoader`，解压
4. 把全部内容复制到 **BDS** 的`plugins`目录中。如果复制时提示文件有冲突，选择覆盖即可。

安装完毕！接下来，你就可以安装你想要的 **LXL** 插件了

## 📥自动更新

从版本`0.3.2`开始，LXL加入了自动更新的功能。  
在同一个BDS版本内，加载器的更新将 **自动推送**，在下一次启动服务端时 **自动安装**。  
最新特性，第一时间获得！免去反复手动升级的麻烦  
做一回真正的甩手掌柜😆

## 🎯 加载插件

1. 下载你需要加载的脚本插件
2. 把插件直接放置到`plugins`目录中
3. 开服！

> 没错，，就这么简单~

## 🔨 配置文件

`LiteXLoader`的配置文件位于`BDS根目录/plugins/LiteXLoader/config.ini`  
正常情况下，这些设置并不需要改动。

```ini
[Main]
Language=zh_CN				# LXL语言环境，默认为zh_CN，即中文
LxlLogLevel=4				# LXL日志等级，默认为4，即显示除了debug信息以外的其他所有信息
PluginsDir=./plugins		# LXL插件目录，默认为plugins
DependsDir=./plugins/lib	# LXL依赖库目录，默认为plugins/lib
```



## 📡 实时调试

成功安装 **LXL** 之后，在 **BDS** 后台控制台执行

- `jsdebug`  
  进入Js实时调试模式
- `luadebug`  
  进入Lua实时调试模式

实时调试模式下，标准输入会被当做对应类型的脚本语言执行，并实时输出结果。  
如果发生错误，引擎将输出错误信息与堆栈跟踪信息。  
再次输入对应的`jsdebug`或`luadebug`将退出实时调试模式。

## 🔌 插件热管理

不用关闭服务端，就可以对LXL装载的脚本插件进行热管理。LXL提供了下面这些后台控制台命令

- `lxl list`  
  列出LXL当前加载的所有插件列表
- `lxl load ./plugins/xxxx.js`  
  热加载位于指定路径的插件。路径是相对于BDS根目录的相对路径。
- `lxl unload xxxx.lua`  
  热卸载在插件列表中名为 xxxx.lua 的插件
- `lxl reload xxxx.js`  
  重新加载在插件列表中名为 xxxx.js 的插件
- `lxl reload`  
  重新加载插件列表中的所有插件
- `lxl version`  
  输出当前安装的LXL版本
- `lxl update`  
  手动检查LiteXLoader自动更新

【热管理使用警示】

- 热卸载插件后，此插件注册的命令不会被删除。玩家使用那些命令时，会提示命令不存在
- 如果你的插件有导出的函数被其他插件 Import，则当你卸载 / 重载此插件后，其他插件对应的 Import 会失效  
- 请勿在服务器尚未启动完毕，或者服务器中有大量玩家时卸载或者重载插件！否则服务器有可能发生崩溃
- 热加载 / 热重载一个插件之后，插件注册的`onServerStarted`事件会被立刻调用一次（因为此时服务器已经开启完毕了）

插件热管理机制仅供调试插件时使用。在生产环境中最好避免使用，以免出现一些奇奇怪怪的问题。