# Creating Your First Plugin
This tutorial will teach you how to write a plugin that outputs `Hello World!` when BDS (Bedrock Dedicated Server) starts.

## Installing Necessary Development Tools
- [xmake](https://xmake.io/#/en/guide/installation)
- [visual studio code](https://code.visualstudio.com/)
- [git](https://git-scm.com/downloads)

## Creating Your Plugin Repository
Create your plugin repository using a template from GitHub.

Plugin template repository: [levilamina-plugin-template](https://github.com/LiteLDev/levilamina-plugin-template)
![Alt text](img/levilamina-plugin-template.png)
After creating, you can clone your repository to your local machine.

## Modifying Plugin Information
Open `xmake.lua`, and change the `target("levilamina-plugin-template")` name to your plugin name.
Here, we change it to `target("my-first-plugin")`.

## Writing Your Plugin
Open `src/DllMain.cpp`,
Using the knowledge we learned in the [Hook Guide](../../guides/hook_guide), we can write a simple plugin.

We know that BDS calls the `DedicatedServer::DedicatedServer` function at startup. Therefore, to implement our feature, we can hook this function.

At the end of `src/DllMain.cpp`, add the following code:
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

## Compiling the Plugin
In the plugin directory, execute the `xmake` command to compile the plugin.

## Running the Plugin
Copy the `my-first-plugin` folder from the project directory `/bin` to the BDS `plugins` directory, then run bedrock_server_mod.exe.

If your plugin loads successfully, you will see the following output in the console:
```powershell  
22:21:59 INFO [my-first-plugin] Plugin loaded
22:21:59 INFO [LeviLamina] Plugin <my-first-plugin> loaded!
```

Then, you will see the following output in the console:
```powershell
22:21:59 INFO [my-first-plugin] Hello World!
```

This indicates that our feature has been successfully implemented!

## Conclusion
Congratulations, you have successfully written your first plugin.
Next, you just need to use your learned C++ knowledge and reverse engineering skills to write the plugins you want.
