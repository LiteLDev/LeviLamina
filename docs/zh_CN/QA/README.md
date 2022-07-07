## 如何更新LiteLoaderBDS的版本？
下载LiteLoader.zip，并将其完全解压到BDS所在路径

## 如何更新BDS版本？
从Minecraft官网上下载最新的BDS，并将除了`server.properties`、`allowlist.json`、`permission.json`之外的所有文件解压到旧版本BDS所在路径并覆盖  
然后运行`LLPeEditor.exe`来生成新的`bedrock_server_mod.exe`

## 如何在Linux发行版上运行LiteLoaderBDS？
由于我们没有开发针对Linux版Bedrock Dedicated Server的版本，所以你需要借助[Wine](https://www.winehq.org/)来运行Windows版BDS来加载LiteLoaderBDS，你也可以选择我们提供的[Docker镜像](https://github.com/LiteLDev/LiteLoaderBDS#for-linux)

## 在Wine上运行Windows版BDS存在内存泄漏问题
这是Wine自身的问题，我们无法提供解决方案，如果你在使用我们提供的Docker镜像，你可以通过限制容器内存来防止内存泄漏危害到你服务器上运行的其它服务，我们推荐安装[portainer](https://docs.portainer.io/)来高效地管理容器

## LiteLoaderBDS多版本支持范围
BDS小版本更新可以完美兼容  
例如：2.1.2是基于BDS 1.18.11.01开发的，其协议版本为486，只要后续版本的BDS（例如：1.18.12.01）的协议版本还是486，LL就能完美支持。我们通常将协议版本没有变更的版本更新称为小版本更新（例如：1.18.11.01到1.18.12.01），若协议版本更新了（如1.18.2到1.18.11.01）则为大版本更新  
LL会在开服时输出服务器版本及协议版本，你也可以通过`/version`指令查询

## 动态链接库（dll）插件多版本支持范围
与[LiteLoaderBDS多版本支持范围](#LiteLoaderBDS多版本支持范围)相同，但部分功能较为简单的插件可以几个BDS大版本不更新（mojang没有更改这些插件所用到的函数/类）

## 脚本语言（ScriptEngine）插件多版本支持范围
如果LLScriptEngine的API没有变更，脚本语言插件（例如：JavaScript、Lua）可以永远不需要为BDS版本做适配，脚本插件通常可以适用于多个BDS大版本

## 插件加载常见错误码
- `126`  
依赖库缺失，请检查插件安装是否完整

- `127`  
插件与当前版本的LiteLoaderBDS不适配

## 在Wine上无法启动服务器
尝试删除`plugins/LiteLoader/LLAutoUpdate.dll`  
如果你的服务器的可用内存少于1.2GB，请尝试释放内存，因为在低内存环境中LiteLoaderBDS可能无法正常启动

## 如果崩溃日志存在错误怎么办？
从[Release](https://github.com/LiteLDev/LiteLoaderBDS/releases)下载对应版本的`PDB.zip`，将其解压至以下任一文件夹内:
- `./`
- `./plugins/`
- `./plugins/lib`