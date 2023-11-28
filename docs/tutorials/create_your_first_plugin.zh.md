# 创建你的第一个插件

这个教程将教会你如何编写一个在BDS启动时输出`Hello World!`的插件。

## 安装必要的开发工具

- [xmake](https://xmake.io/#/zh-cn/guide/installation)
- [visual studio](https://visualstudio.microsoft.com/zh-hans/vs/) 需要包含 C++ 开发工具
- [visual studio code](https://code.visualstudio.com/)
- [git](https://git-scm.com/downloads)

## 创建你的插件仓库

从 GitHub 使用 template 来创建你的插件仓库。

插件模板仓库：[levilamina-plugin-template](https://github.com/LiteLDev/levilamina-plugin-template)
![Alt text](img/levilamina-plugin-template.png)
创建以后，你可以 clone 你的仓库到本地。

## 修改插件的信息

打开 `xmake.lua`，修改`target("levilamina-plugin-template")` 名称为你的插件名称。
我们这边修改为 `target("my-first-plugin")`。

## 编写插件

打开 `src/DllMain.cpp`，
利用我们在 [Hook指南](../guides/hook_guide.md) 中学到的知识，我们可以编写一个简单的插件。

我们知道，BDS在启动时会调用`DedicatedServer::DedicatedServer`函数，因此，为了实现我们的功能，我们可以Hook这个函数。

在 `src/DllMain.cpp` 末尾，添加如下代码：

```cpp
#include "ll/api/memory/Hook.h"
#include "ll/api/Logger.h"
#include "mc/server/common/DedicatedServer.h"

auto logger = ll::Logger("my-first-plugin");

LL_AUTO_TYPED_INSTANCE_HOOK(
    DedicatedServerHook,
    ll::memory::HookPriority::Normal,
    DedicatedServer,
    "??0DedicatedServer@@QEAA@XZ",
    void
) {
    origin();
    logger.info("Hello World!");
}
```

## 编译插件

在插件目录下，执行 `xmake` 命令，即可编译插件。

## 运行插件

复制项目目录`/bin`下的`my-first-plugin`文件夹到 BDS 的`plugins`目录下，然后运行 bedrock_server_mod.exe。

如果你的插件加载成功，你将会在控制台看到如下输出：

```powershell  
22:21:59 INFO [my-first-plugin] Plugin loaded
22:21:59 INFO [LeviLamina] Plugin <my-first-plugin> loaded!
```

然后，你将会在控制台看到如下输出：

```powershell
22:21:59 INFO [my-first-plugin] Hello World!
```

这说明我们的功能成功实现！

## 总结

恭喜你，你已经成功的编写了你的第一个插件。
接下来你只需要利用你学习到的C++知识和逆向知识，就可以编写出你想要的插件了。
