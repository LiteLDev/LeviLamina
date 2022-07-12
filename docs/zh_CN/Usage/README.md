# LiteLoaderBDS - LL安装与使用指南

## 💻 安装

### 对于 Windows 用户

1. 您可以前往 [MineBBS](https://www.minebbs.com/liteloader/) 或 [GitHub Release](https://github.com/LiteLDev/LiteLoader/releases) 下载最新的 `LiteLoader-版本号.zip` 压缩包
2. 将压缩文件内的所有内容解压到 `bedrock_server.exe` 所在的目录。如果解压的过程中提示文件有冲突，选择覆盖即可。
3. 请保证 `bedrock_server.pdb` 文件存在。运行 `LLPeEditor.exe` 来生成
   - 有导出符号的BDS程序 `bedrock_server_mod.exe`
4. 当控制台输出 `请按任意键继续. . . ` 时，按任意键关闭窗口
5. 运行 `bedrock_server_mod.exe` 开服

### 对于 Linux 用户

#### 安装脚本(Ubuntu)

```
wget https://github.com/LiteLDev/LiteLoaderBDS/raw/beta/Scripts/install.sh
chmod +x install.sh
./install.sh
```

#### Docker

LiteLoaderBDS 采用 Wine 兼容层对 Linux 服务器提供BDS支持，同时拥有高性能的服务器运行体验以及Linux系统的多种优势。
为了简化普通用户的安装难度，我们提供了打包好的 `docker` 镜像，供您直接下载安装使用：

请保证您的系统已经成功安装docker，并能流畅连接到Docker Hub或您设置的镜像源。
在终端中输入：

```
docker pull shrbox/liteloaderbds
docker create --name liteloader -p 19132:19132/udp -i -t shrbox/liteloaderbds
```

安装完毕后，以下命令可以为您管理服务器提供帮助：

启动服务器：`docker container start liteloader`  
停止服务器：`docker container stop -t 30 liteloader`  
进入控制台：`docker attach liteloader`  
退出控制台：按下 `Ctrl + P + Q`  
如果按下 `Ctrl + C`，服务器进程将会终止。

如想管理服务端文件，使用命令 `docker volume --help` 了解详情。

## 🎯 下载 & 加载插件

### 插件的下载

`LiteLoaderBDS` 主要插件发布渠道：

- [官方论坛](https://forum.litebds.com/)
- [MineBBS](https://www.minebbs.com/resources/?prefix_id=59)

### 插件的安装

1. 如果您下载到的插件是一个压缩包文件，那么请解压它
2. 将所有获取到的内容直接放入`plugins`目录
3. 运行`bedrock_server_mod.exe` 来开服

> 没错，，就这么简单~

## 安装资源包/Addon
将`.mcpack`、`.mcaddon`或`.zip`格式的资源包/Addon复制到`plugins/AddonsHelper`文件夹内，重新启动服务器，LiteLoader会为您自动配置资源包/Addon。  
您可以通过`addons`指令对资源包和Addon进行管理

## 🔌 插件热管理

无需关闭服务端，您即可对LL装载的插件进行热管理。引擎提供了以下控制台命令：

- `ll list`  
  **列出** 当前加载的所有插件列表
- `ll load ./plugins/xxxx.js`  
  **热加载** 位于指定路径的插件。路径是相对于BDS根目录的相对路径。
- `ll unload xxxx.lua`  
  **热卸载** 在插件列表中名为 xxxx.lua 的插件
- `ll reload xxxx.dll`  
  **重新加载** 在插件列表中名为 xxxx.dll 的插件
- `ll reload`  
  **重新加载** 插件列表中的所有插件
- `ll version`  
  输出当前安装的LL版本
- `ll upgrade`  
  手动检查`LiteLoaderBDS`自动更新

#### 热管理功能 常见问题 & 解答

- 热卸载插件后，对应插件注册的命令不会被删除。当玩家尝试执行这些命令时，客户端将会提示命令不存在
- 如果插件导出的函数被其他插件 Import ，则当插件被卸载 / 重载后，其他插件对应的 Import 会失效
- 请勿在服务器尚未启动完毕、或者服务器中有大量玩家时卸载或者重载插件，否则服务器将可能发生崩溃
- 热加载 / 热重载一个插件之后，对应插件注册的`onServerStarted`事件将被立即调用一次，玩家进服事件`onPlayerJoin`将被逐个调用一次（因为此时服务器已经开启完毕了）

>[!WARNING]
>
>插件热管理机制仅供调试插件时使用。在生产环境中请 **避免使用** ，以免出现问题

## 📡 脚本引擎 - 实时调试模式

引擎提供了以下控制台命令用于脚本调试：

- `jsdebug`  
  进入Js实时调试模式
- `luadebug`  
  进入Lua实时调试模式

在实时调试模式下，标准输入会被当做脚本语言执行，并实时输出结果。  
当发生错误时，引擎会输出错误信息与堆栈跟踪信息。  
再次输入对应的`jsdebug`或`luadebug`将退出实时调试模式。