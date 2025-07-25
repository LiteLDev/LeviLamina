# Create your first mod

## Introduction

This tutorial is designed to help you get started with mod development in LeviLamina. It is by no means a complete tutorial of all the possibilities in LeviLamina, but rather an overview of the basics. First, make sure you understand C++, set up your workspace in the IDE, and then introduce the basics of most LeviLamina mods.

In this tutorial, we will create a simple mod that implements the following features:

- Players can enter the `/suicide` command to suicide
- Players are given a clock when they first log in to the server
- When players use the clock, a confirmation window pops up asking if they want to suicide, and if they confirm, they suicide

This tutorial covers the following topics:

- Logging output
- Subscribing and unsubscribing events
- Registering commands
- Reading configuration files
- Database access
- Using forms
- Constructing Minecraft objects
- Calling Minecraft functions

!!! info
    All the source code for this tutorial can be found at [futrime/better-suicide](https://github.com/futrime/better-suicide). We recommend that you look at the source code while reading the tutorial.

## Learn C++

These tutorials require basic knowledge of the C++ programming language. If you are just starting out with C++ or need a refresher, here is a non-exhaustive list.

- [C++ Developer Roadmap](https://roadmap.sh/cpp)
- [cppreference.com](https://en.cppreference.com/w/)
- [C++ Tutorial](https://www.w3schools.com/cpp/)
- [C++ Language Tutorial](https://cplusplus.com/doc/tutorial/)
- [hacking C++](https://hackingcpp.com/)
- [C++ Core Guidelines](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

## Set up your workspace

Before developing mods (or learning C++), you need to set up a development environment. This includes but is not limited to the following:

- [xmake](https://xmake.io)
- [Visual Studio Code](https://code.visualstudio.com)
- [Git](https://git-scm.com)
- [Visual Studio 2022](https://visualstudio.microsoft.com/) (When installing Visual Studio 2022, make sure to check the C++ desktop application development option)

!!! warning
    If you are not using the latest version of Visual Studio 2022, MSVC, and Windows SDK, you may encounter problems in building, loading, and running mods later. If you encounter problems like `xxx is not a member of std`, please consider this possibility. The environment for testing the build of this tutorial is Visual Studio Community 2022 17.8.1, MSVC v143 - VS 2022 C++ x64/x86 build tools (v14.38-17.8), Windows 11 SDK (10.0.22000.0)

!!! tip
    Because the LeviLamina project is huge, if you use Visual Studio Code, its built-in Intellisense system may be overwhelmed. We recommend that you install [the clangd extension](https://marketplace.visualstudio.com/items?itemName=llvm-vs-code-extensions.vscode-clangd) and use clangd for code checking and so on. After installing clangd and the corresponding extension, you need to run the following command to generate `compile_commands.json`, and then restart VSCode to make clangd effective.

    ```shell
    xmake project -k compile_commands
    ```

Then, you need to install LeviLamina somewhere. This tutorial is for LeviLamina 0.9.2, and some modifications may be required for other versions.

## Create a mod repository

Visit [levilamina-mod-template](https://github.com/LiteLDev/levilamina-mod-template) and click `Use this template` to use this template to initialize your mod repository.

![Create from template](levilamina-mod-template.png)

Clone the mod repository to your local machine using Git, and then open it with VSCode. You need to modify some of the files to fill in your mod information.

First, you need to modify the mod name information in `xmake.lua`. Modify the mod name to specify the name of your mod, which will be displayed in LeviLamina. The name allows uppercase and lowercase English letters, numbers, and hyphens, and does not allow spaces and other special characters. It is recommended to use `example-mod` or `ExampleMod` these two forms. Here, our mod is named `better-suicide`.

```lua
target("better-suicide") -- Change this to your mod name.
```

Next, modify the contents of `tooth.json`. `tooth.json` provides relevant information for lip to install mod packages. After proper configuration, your mod will be included in the [Bedrinth](https://bedrinth.com) and can be downloaded and installed by users around the world. Change the value of the `tooth` field to the GitHub repository address of this mod, fill in the information fields in `info`, and then fill in the `asset_url` field according to the release address of the repository, modify the dependent LeviLamina version, and modify the `place` of `src` and `dest` according to the mod name filled in `xmake.lua`. For the mod in this article, the following is a feasible reference:

```json
{
  "format_version": 3,
  "format_uuid": "289f771f-2c9a-4d73-9f3f-8492495a924d",
  "tooth": "github.com/futrime/better-suicide",
  "version": "0.6.0",
  "info": {
    "name": "better-suicide",
    "description": "Allow players to suicide in Minecraft.",
    "tags": [
      "platform:levilamina",
      "type:mod"
    ],
    "avatar_url": ""
  },
  "variants": [
    {
      "platform": "win-x64",
      "dependencies": {
        "github.com/LiteLDev/LeviLamina": "1.3.*"
      },
      "assets": [
        {
          "type": "zip",
          "urls": [
            "https://github.com/futrime/better-suicide/releases/download/v0.6.0/better-suicide-windows-x64.zip"
          ],
          "placements": [
            {
              "type": "dir",
              "src": "better-suicide/",
              "dest": "plugins/better-suicide/"
            }
          ]
        }
      ]
    }
  ]
}
```

Then, you need to modify the copyright information in the `LICENSE` file. You can choose an open source license that suits your mod [here](https://choosealicense.com/licenses/). Rest assured, your mod does not need to be open source, because the mod template uses the CC0 license, you can freely modify or delete the `LICENSE` file. However, we recommend that you use an open source license, because this way you can make it easier for others to use your mod and help you improve your mod.

Next, you need to modify the contents of the `README.md` file. This file will be displayed on the main page of your mod repository, where you can introduce the features, usage, configuration files, commands, etc. of your mod.

Finally, you need to change the namespace name. Change the namespace `my_mod` in `MyMod.cpp` and `MyMod.h` to the name you want. Following common C++ conventions, namespace names should use lowercase letters and underscores, and should be consistent. Here, we uniformly change it to `better_suicide`. Similarly, you can change `MyMod.cpp` and `MyMod.h` to the names you want, but at the same time remember to change `#include MyMod.h` in the source file to the new header file name.

## Build your mod

Before we start, let's try to build an empty mod.

First, update the repository:

```shell
xmake repo -u
```

Configure the build:

```shell
xmake f -m debug
```

!!! tip
    If you want to build in other modes, you can also use `-m release` or `-m releasedbg`. These two modes will enable the `fastest` optimization level. Among them, `-m release` will turn off debugging information, while `-m releasedbg` will turn on debugging information, just like `-m debug`. For their specific differences, please refer to [Custom Rules - xmake](https://xmake.io/#/en/manual/custom_rule).

!!! failure
    If you encounter a download failure during the repository update or build configuration process, you may need to [configure GitHub mirror proxy](https://xmake.io/#/en/package/remote_package?id=mirror-proxy):

    ```shell
    xmake g --proxy_pac=github_mirror.lua
    ```

    Or [configure HTTP proxy](https://xmake.io/#/en/package/remote_package?id=set-proxy):


Then build:

```shell
xmake
```

!!! tip
    You can also install the [XMake extension](https://marketplace.visualstudio.com/items?itemName=tboox.xmake-vscode) to
    make building and generating `compile_commands.json` more convenient. By the way, before using the XMake extension to
    generate `compile_commands.json`, you need to set **Compile Commands Directory** in the extension settings to `"."` so
    that `clangd` can detect it.

!!! failure
    Build failed? Try upgrading Visual Studio 2022, MSVC, and Windows SDK. Remember, be sure to upgrade to the latest version.

## Add `#include`

Add `#include` in `MyMod.cpp`, the final effect looks like this:

```cpp
#include "MyMod.h"

#include "Config.h"

#include <ll/api/Config.h>
#include <ll/api/command/CommandHandle.h>
#include <ll/api/command/CommandRegistrar.h>
#include <ll/api/data/KeyValueDB.h>
#include <ll/api/event/EventBus.h>
#include <ll/api/event/player/PlayerJoinEvent.h>
#include <ll/api/event/player/PlayerUseItemEvent.h>
#include <ll/api/service/Bedrock.h>
#include <mc/server/commands/CommandOrigin.h>
#include <mc/server/commands/CommandOutput.h>
#include <mc/world/actor/player/Player.h>
```

## Register command `/suicide`

In BDS, commands are not registered from the beginning, but need to be registered after a specific program is executed. Therefore, you cannot register mods when they are loaded, but only when they are enabled. Generally speaking, you should also unregister commands when the mod is disabled to prevent undefined behavior.

!!! warning
    The mod will call its constructor when it is loaded. But please do not put event subscription, command registration, and any other game-related operations in the constructor, because these operations need to be performed after the game is loaded. If you do these operations in the constructor, your mod will most likely crash when loading.

!!! tip
    Generally speaking, the mod's constructor only needs to perform some game-independent initialization operations, such as initializing the logging system, initializing the configuration file, initializing the database, etc.

```cpp
bool MyMod::enable() {

    // ...

    // Register commands.
    auto commandRegistry = ll::service::getCommandRegistry();
    if (!commandRegistry) {
        throw std::runtime_error("failed to get command registry");
    }

    auto& command = ll::command::CommandRegistrar::getInstance()
                        .getOrCreateCommand("suicide", "Commits suicide.", CommandPermissionLevel::Any);
    command.overload().execute([this](CommandOrigin const& origin, CommandOutput& output) {
        auto* entity = origin.getEntity();
        if (entity == nullptr || !entity->isType(ActorType::Player)) {
            output.error("Only players can commit suicide");
            return;
        }

        auto* player = static_cast<Player*>(entity); // NOLINT(cppcoreguidelines-pro-type-static-cast-downcast)
        player->kill();

        getSelf().getLogger().info("{} killed themselves", player->getRealName());
    });

    // ...

    return true;
}
```

Let's break down these codes and see. The following statement gets the command registry. The command registry only takes effect after a specific time, so its type is `optional_ref<T>`. We need to determine whether the command registry obtained is valid.

```cpp
auto commandRegistry = ll::service::getCommandRegistry();
if (!commandRegistry) {
    throw std::runtime_error("failed to get command registry");
}
```

LeviLamina's command system supports using the `CommandRegistrar::getOrCreateCommand()` function to directly register or get commands.

```cpp
auto& command = ll::command::CommandRegistrar::getInstance()
                        .getOrCreateCommand("suicide", "Commits suicide.", CommandPermissionLevel::Any);
```

The first parameter is the command itself, which is the character entered in the console or chat bar. Although it has not been tested whether various special characters can work, we still recommend that only lowercase English letters be included. The second parameter is the command introduction. When entering part of the command in the chat bar, the candidate command and its introduction will be displayed in a semi-transparent gray form above. The third parameter is the command's permission level, which is defined as follows. Among them, if we want ordinary players in survival mode to be able to execute, we should choose `Any`. And `GameDirectors` corresponds to the permission of players who are at least in creative mode, `Admin` corresponds to the permission of at least OP, and `Host` corresponds to the console's permission.

```cpp
enum class CommandPermissionLevel : uchar {
    Any           = 0x0,
    GameDirectors = 0x1,
    Admin         = 0x2,
    Host          = 0x3,
    Owner         = 0x4,
    Internal      = 0x5,
};
```

Then, we need to add an overload to the command and set the corresponding callback.

```cpp
command.overload().execute([this](CommandOrigin const& origin, CommandOutput& output) {
    // ...
});
```

!!! note
    The command overload means a mode of the command, such as `ll <unload|reload|reactivate> <mod:string>` is an overload, and `ll list` is another overload. Here is an example, from LeviLamina's mod management command:

```cpp
enum LeviCommandOperation : int {
    unload,
    reload,
    reactivate,
};
struct LeviCommand {
    LeviCommandOperation operation;
    SoftEnum<mod::ModNames>   mod;
};

void registerModManageCommand() {
    // ...
    cmd.alias("ll");
    cmd.overload<LeviCommand3>().text("load").required("mod").execute(
        [](CommandOrigin const&, CommandOutput& output, LeviCommand3 const& param) {
            // ...
        }
    ); // ll load <mod:string>
    cmd.overload<LeviCommand>()
        .required("operation")
        .required("mod")
        .execute([](CommandOrigin const&, CommandOutput& output, LeviCommand const& param) {
            // ...
        }); // ll <unload|reload|reactivate> <mod:string>
    cmd.overload().text("list").execute([](CommandOrigin const&, CommandOutput& output) {
        // ...
    }); // ll list
}
```

In the callback function, we first try to get the source of the command execution. Here, we need to make a judgment, because the console, command block and even various entities can execute commands, but the suicide mod should only respond to the player's request. If the wrong source of execution executes the suicide command, an error message should be prompted.

```cpp
auto* entity = origin.getEntity();
if (entity == nullptr || !entity->isPlayer()) {
    output.error("Only players can commit suicide");
    return;
}
```

After we confirm that the source of execution is the player, we can convert the entity pointer to the player pointer and kill it.

```cpp
auto* player = static_cast<Player*>(entity);
player->kill();

getSelf().getLogger().info("{} killed themselves", player->getRealName());
```

!!! warning
    Because BDS lacks RTTI information, `dynamic_cast<T>()` cannot be used.

!!! tip
    You may have noticed another function `player->getName()`, but we did not use it. This is because the player's name can be modified by mods or other means, while the result of `player->getRealName()` is (generally speaking) fixed.

At this point, the command object has been configured, and the command object will be loaded into the game after the server starts.

At the end of the `enable()` function, return a `true` to indicate that the mod is successfully enabled. If `false` is returned in the `enable()` function, LeviLamina will think that the mod is enabled to fail and prompt an error message on the console.

## Read the configuration file

The second feature of our mod is to give a clock when the player first enters the server; the third feature is to pop up a confirmation of suicide when using the clock, and the player can suicide after confirmation. But there is a small problem with these two features: the server administrator may have installed other mods that implement similar functions, and do not want to use these functions in this suicide mod. We hope to provide some way to allow administrators to turn these two functions on and off.

We are very pleased to announce that LeviLamina has implemented the reflection of configuration files and configuration information structures in C++. This means that we can define a structure in C++, and then define an instance of this structure in the configuration file, and LeviLamina will automatically read the contents of the configuration file into the structure instance. In this way, we can directly use this structure instance in C++, without having to parse the configuration file ourselves.

First, we create another `Config.h` file, define a structure `Config`, and use it to store configuration information.

```cpp
struct Config {
    int  version          = 1;
    bool doGiveClockOnFirstJoin = true;
    bool enableClockMenu = true;
};
```

We add a member variable in the anonymous namespace to store the configuration information in the configuration file.

```cpp
namespace {

// ...

Config config;

}
```

Then, we read the configuration file and save the configuration information to the member variable.

```cpp
bool MyMod::load() {
    
    // ...

    // Load or initialize configurations.
    const auto& configFilePath = getSelf().getConfigDir() / "config.json";
    if (!ll::config::loadConfig(config, configFilePath)) {
        getSelf().getLogger().warn("Cannot load configurations from {}", configFilePath);
        getSelf().getLogger().info("Saving default configurations");

        if (!ll::config::saveConfig(config, configFilePath)) {
            getSelf().getLogger().error("Cannot save default configurations to {}", configFilePath);
        }
    }

    // ...

}
```

In this code, we first get the mod's configuration file path, and then call the `ll::config::loadConfig()` function to read the configuration information in the configuration file into the structure instance. If the read fails, we will output a warning message on the console and save the default configuration information to the configuration file.

!!! note
    Since the configuration file is read in the constructor, it can be guaranteed that the configuration file has been read successfully in subsequent operations.

## Persistently save player entry information in the database

The second feature of our mod is to give a clock when the player first enters the server. However, if we save the entry information in memory, the player's entry information will be lost when the server restarts. Therefore, we need to persistently save the player's entry information in the database. LeviLamina provides a KV database wrapper that allows us to use the database directly in C++.

First, we add a member variable in the anonymous namespace to store the database instance.

```cpp
std::unique_ptr<ll::data::KeyValueDB> playerDb;
```

!!! note
    Why is it `std::unique_ptr<ll::KeyValueDB>` instead of `ll::KeyValueDB`? This is because `ll::KeyValueDB` prohibits copying and can only be moved. Therefore, we need to use `std::unique_ptr` to store the `ll::KeyValueDB` instance.

!!! warning
    Please do not use ordinary pointers to store the `ll::KeyValueDB` instance, because this can easily make the life cycle management complicated, resulting in memory leaks and other problems. Remember: you are writing C++, not C.

Then, in the `load` function, we initialize the database instance.

```cpp
bool MyMod::load() {
        
    // ...

    // Initialize databases;
    const auto& playerDbPath = self.getDataDir() / "players";
    playerDb                 = std::make_unique<ll::data::KeyValueDB>(playerDbPath);

    // ...
}
```

In this code, we first get the mod's database path, and then call the `std::make_unique<ll::data::KeyValueDB>()` function to create a database instance. If the database path does not exist, the `std::make_unique<ll::data::KeyValueDB>()` function will automatically create the database path.

!!! note
    Since the database initialization is done in the constructor, it can be guaranteed that the database has been initialized successfully in subsequent operations.

# Give a clock when the player first enters the server

The second feature of our mod is to give a clock when the player first enters the server. We need to judge whether the player is entering the server for the first time when the player enters the server, and if so, give a clock.

In BDS, when the player enters the server, the event `PlayerJoinEvent` is triggered. In LeviLamina, we can subscribe to this event, and when this event is triggered, the mod can implement the logic when the player enters the server.

In the anonymous namespace, we add an event listener pointer:

```cpp
ll::event::ListenerPtr playerJoinEventListener;
```

In the `enable()` function, we register this event listener, and in the `disable()` function, we unregister it.

```cpp
bool MyMod::enable() {

    // ...

    auto& eventBus = ll::event::EventBus::getInstance();

    playerJoinEventListener = eventBus.emplaceListener<ll::event::player::PlayerJoinEvent>(
        [doGiveClockOnFirstJoin = config.doGiveClockOnFirstJoin,
         &playerDb = playerDb
         this](ll::event::player::PlayerJoinEvent& event) {
            if (doGiveClockOnFirstJoin) {
                auto& player = event.self();

                const auto& uuid = player.getUuid();

                // Check if the player has joined before.
                if (!playerDb->get(uuid.asString())) {

                    ItemStack itemStack("clock", 1);
                    player.add(itemStack);

                    // Must refresh inventory to see the clock.
                    player.refreshInventory();

                    // Mark the player as joined.
                    if (!playerDb->set(uuid.asString(), "true")) {
                        getSelf().getLogger().error("Cannot mark {} as joined in database", player.getRealName());
                    }

                    getSelf().getLogger().info("First join of {}! Giving them a clock", player.getRealName());
                }
            }
        }
    );

    // ...

}

bool MyMod::disable() {

    // ...

    auto& eventBus = ll::event::EventBus::getInstance();

    eventBus.removeListener(playerJoinEventListener);

    // ...

}
```

Let's break down these codes and see. In the callback lambda function, we capture the `doGiveClockOnFirstJoin` in the configuration, as well as the mod's this and database instance. Then, we judge whether the `doGiveClockOnFirstJoin` in the configuration is `true`, and if so, continue to execute the logic.

```cpp
[doGiveClockOnFirstJoin = config.doGiveClockOnFirstJoin,
 &playerDb = playerDb
 this](ll::event::player::PlayerJoinEvent& event) {
    if (doGiveClockOnFirstJoin) {
        // ...
    }
}
```

Next, we get the player instance and the player's UUID from the event instance.

```cpp
auto& player = event.self();
auto& uuid   = player.getUuid();
```

!!! note
    The type of UUID obtained here is `mce::UUID` instead of `std::string`. We recommend that you only convert UUID to `std::string` when needed, because `mce::UUID` is more efficient.

!!! danger
    Please do not use XUID as the player's unique identifier. Although in the LiteLoaderBDS era, many mods used XUID as the player's unique identifier, this is incorrect. XUID is the identifier of Xbox Live, not the player. If the server does not enable online mode, or there are fake players, the behavior of XUID will be unpredictable. Therefore, we strongly recommend using UUID as the player's unique identifier.

Then, we use the player's UUID as the key to get whether the player has entered the server before from the database. If the player has entered the server before, then we don't need to give the player a clock again.

```cpp
// Check if the player has joined before.
if (!playerDb->get(uuid.asString())) {
    // ...
}
```

Next, we create a clock item stack and add it to the player's backpack.

```cpp
ItemStack itemStack("minecraft:clock", 1);
player.add(itemStack);
```

!!! note
    Here we use the `ItemStack` class instead of the `Item` class. The `ItemStack` class is a wrapper of the `Item` class, which contains the quantity, enchantment, durability and other information of the item, while the `Item` class only represents the item category. Therefore, the `ItemStack` class should be used instead of the `Item` class.

Then, we need to refresh the player's inventory so that the player can see the clock.

```cpp
player.refreshInventory();
```

Finally, we use the player's UUID as the key to mark the player as having entered the server.

```cpp
// Mark the player as joined.
if (!playerDb->set(uuid.asString(), "true")) {
    getSelf().getLogger().error("Cannot mark {} as joined in database", player.getRealName());
}
```

In the `disable()` function, we need to remove the event listener from the event bus to unsubscribe from the event.

```cpp
eventBus.removeListener(playerJoinEventListener);
```

## Pop up a confirmation of suicide when using the clock

The third feature of our mod is to pop up a confirmation of suicide when using the clock, and the player can suicide after confirmation. We need to subscribe to the player's use of items event, and when the player uses the clock, pop up a confirmation of suicide.

In the anonymous namespace, we add an event listener pointer:

```cpp
ll::event::ListenerPtr playerUseItemEventListener;
```

In the `enable()` function, we register this event listener, and in the `disable()` function, we unregister it.

```cpp
bool MyMod::enable() {

    // ...

    playerUseItemEventListener =
        eventBus.emplaceListener<ll::event::PlayerUseItemEvent>([enableClockMenu = config.enableClockMenu,
                                                                 this](ll::event::PlayerUseItemEvent& event) {
            if (enableClockMenu) {
                auto& player    = event.self();
                auto& itemStack = event.item();

                if (itemStack.getTypeName() == "minecraft:clock") {
                    ll::form::ModalForm form(
                        "Warning",
                        "Are you sure you want to kill yourself?",
                        "Yes",
                        "No",
                        [this](Player& player, bool yes) {
                            if (yes) {
                                player.kill();

                                getSelf().getLogger().info("{} killed themselves", player.getRealName());
                            }
                        }
                    );

                    form.sendTo(player);
                }
            }
        });

    // ...

}

bool MyMod::disable() {

    // ...

    eventBus.removeListener(playerUseItemEventListener);

    // ...

}
```

Let's break down the code and see. In the callback lambda function, we capture the configuration item `enableClockMenu` and this, and then judge, only when the configuration item is enabled, execute the logic.

```cpp
playerUseItemEventListener = eventBus.emplaceListener<ll::event::PlayerUseItemEvent>(
    [enableClockMenu = config.enableClockMenu, this](ll::event::PlayerUseItemEvent& event) {
        if (enableClockMenu) {
           // ...
        }
    }
);
```

In the logic, we first get the two attributes of the event, the player who uses the item and the item being used. Then judge whether the item id is `clock`, and execute the pop-up form logic.

```cpp
auto& player    = event.self();
auto& itemStack = event.item();

if (itemStack.getTypeName() == "minecraft:clock") {
    // ...
}
```

!!! warning
    Do not use `itemStack.getName()`, because this function returns the name of the item displayed, such as `Clock` or `Iron Sword`.

Here we use the simplest modal form `ModalForm`, the first parameter of the constructor is the title of the form, the second parameter is the prompt content of the form, the third parameter is the content of the lower left button, and the fourth parameter is the content of the lower right button. The callback function receives two parameters, the first parameter is the player to whom the form is sent, and the second parameter is the player's choice, `true` means that the lower left button is selected.

```cpp
ll::form::ModalForm form(
    "Warning",
    "Are you sure you want to kill yourself?",
    "Yes",
    "No",
    [this](Player& player, bool yes) {
        if (yes) {
            player.kill();

            getSelf().getLogger().info("{} killed themselves", player.getRealName());
        }
    }
);
```

Next, send the form to the player.

```cpp
form.sendTo(player);
```

## Run your mod

If your mod is built normally, you should be able to see a directory named after your mod in the `bin/` directory. Copy this directory to the `plugins/` directory in the LeviLamina directory (create it if it does not exist), and get the following file structure:

```text
/path/to/levilamina/plugins/better-suicide
├── better-suicide.dll
└── manifest.json
```

Then run the LeviLamina server (`bedrock_server_mod.exe`) and you're done.

## Next steps?

You can [publicly release your mod](./publish_your_first_mod.md) and let more people use your mod.

## Further exercises

We can add some features to this mod based on this mod to practice more knowledge of LeviLamina mod development. Here are some possible exercises:

- Set the cooldown time for player suicide
- Keep all items from dropping when the player suicide
- Keep the experience when the player suicide
- Suicide at the original place when the player suicide
- Count the number of player suicides and display the leaderboard on the sidebar
- Use more advanced forms to let the player choose the way of suicide
- Show a custom death message when the player suicide
