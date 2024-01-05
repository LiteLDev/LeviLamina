# Create Your First Plugin

## Introduction

This tutorial aims to help you get started with plugin development in LeviLamina. It is by no means a comprehensive guide to all possibilities in LeviLamina, but rather an overall overview of foundational knowledge. First, make sure you understand C++, set up your workspace in the IDE, and then delve into the basic knowledge of most LeviLamina plugins.

In this tutorial, we will create a simple plugin to implement the following features:

- Players can use the `/suicide` command to commit suicide.
- Players receive a clock when they first log in to the server.
- When players use the clock, a confirmation window pops up asking if they want to commit suicide. If confirmed, they commit suicide.

This tutorial covers the following key points:

- Logging output
- Subscribing and unsubscribing events
- Registering commands
- Reading configuration files
- Database access
- Using forms
- Constructing Minecraft objects
- Invoking Minecraft functions

!!! info
    All source code for this tutorial can be found at [futrime/better-suicide](https://github.com/futrime/better-suicide). We recommend that you review the source code while following the tutorial. If you have already installed [lip](https://docs.lippkg.com), you can also directly run the following code to install the plugins implemented in this tutorial in the LeviLamina instance environment.

    ```shell
    lip install github.com/tooth-hub/better-suicide
    ```

## Learn C++

These tutorials assume a basic knowledge of the C++ programming language. If you are just starting with C++ or need a review, here is a non-exhaustive list:

- [C++ Developer Roadmap](https://roadmap.sh/cpp)
- [cppreference.com](https://en.cppreference.com/w/)
- [C++ Tutorial](https://www.w3schools.com/cpp/)
- [C++ Language Tutorial](https://cplusplus.com/doc/tutorial/)

## Set Up Your Workspace

Before developing plugins (or learning C++), you need to set up a development environment. This includes but is not limited to the following:

- [xmake](https://xmake.io)
- [Visual Studio Code](https://code.visualstudio.com)
- [Git](https://git-scm.com)
- [Visual Studio 2022](https://visualstudio.microsoft.com/) (When installing Visual Studio 2022, make sure to select C++ Desktop Development)

!!! warning
    If you are not using the latest versions of Visual Studio 2022, MSVC, and Windows SDK, you may encounter issues in the subsequent build, load, and run plugin steps. If you encounter problems like `xxx is not a member of std`, please consider this possibility. The tutorial was tested in an environment with Visual Studio Community 2022 version 17.8.1, MSVC v143 - VS 2022 C++ x64/x86 build tools (v14.38-17.8), and Windows 11 SDK (10.0.22000.0).

!!! tip
    Due to the size of the LeviLamina project, if you are using Visual Studio Code, its built-in Intellisense system may struggle. We recommend installing the clangd plugin and using clangd for code checking, etc. After installing clangd and the corresponding plugin, you need to run the following command to generate `compile_commands.json` and then restart VSCode to make clangd effective.

    ```shell
    xmake project -k compile_commands
    ```

Next, you need to install LeviLamina somewhere. This tutorial is targeted at LeviLamina 0.3.0, and for other versions, some modifications may be required.

## Create a Plugin Repository

Visit [levilamina-plugin-template](https://github.com/LiteLDev/levilamina-plugin-template), click on `Use this template` to initialize your plugin repository with this template.

![Create from template](img/levilamina-plugin-template.png)

Clone the plugin repository to your local machine using Git, then open it with VSCode. You need to modify some files to fill in your plugin information.

First, you need to modify the LeviLamina version number and plugin name information in `xmake.lua`. Modifying the LeviLamina version number is to specify the LeviLamina version your plugin is compatible with, and you can find LeviLamina version numbers [here](https://github.com/LiteLDev/LeviLamina/releases). Modifying the plugin name is to specify the name of your plugin, which will be displayed in LeviLamina. The name allows English uppercase and lowercase letters, numbers, and hyphens, and should not include spaces or other special characters. We recommend using either `example-plugin` or `ExamplePlugin`.

```lua
-- ...

add_requires("levilamina") -- or add_requires("levilamina x.x.x") to specify target LeviLamina version

target("plugin") -- Change this to your plugin name.

-- ...
```

Next, you need to modify the copyright information in the `LICENSE` file. You can choose an open-source license suitable for your plugin [here](https://choosealicense.com/licenses/). Rest assured, your plugin does not need to be open source, as the plugin template uses the CC0 license, and you are free to modify or remove the `LICENSE` file. However, we recommend using an open-source license, as it makes it easier for others to use and contribute to your plugin.

Then, you need to modify the content in the `README.md` file. This file will be displayed on your plugin repository's homepage, and you can introduce your plugin's features, usage, configuration files, commands, and more.

## Build Your Plugin

Before we begin, let's try building an empty plugin.

First, update the repository:

```shell
xmake repo -u
```

Configure the build:

```shell
xmake f -m debug
```

!!! tip
    If you want to build in other modes, you can also use `-m release` or `-m releasedbg`. These two modes will enable the `fastest` optimization level. Among them, `-m release` will disable debugging information, while `-m releasedbg` will enable debugging information, just like `-m debug`. For their specific differences, please refer to [Custom Rules - xmake](https://xmake.io/#/en/manual/custom_rule).

Then build:

```shell
xmake
```

!!! failure
    Build failed? Try upgrading Visual Studio 2022, MSVC, and Windows SDK. Remember to upgrade to the latest versions.

## Understand the Plugin Structure

Open the `src/` directory, and you will see the following file structure:

```text
src/
├── DllMain.cpp
├── Plugin.cpp
└── Plugin.h
```

`DllMain.cpp` is the entry file of the plugin. Here, the plugin implements the C-style interface exports and the most basic code related to the loading, enabling, and disabling processes of the plugin. This part of the code does not need modification.

`Plugin.h` and `Plugin.cpp` are the main code of the plugin. Here, you can implement the functionality of the plugin. In this tutorial, we will implement the functionality of the suicide plugin here.

## Register the `/suicide` Command

In BDS, commands cannot be registered right from the beginning; instead, they need to be registered after specific program execution. Therefore, you cannot register commands when the plugin is loaded, but only when the plugin is enabled. Generally, it is advisable to unregister commands when the plugin is disabled to prevent undefined behavior.

!!! warning
    Plugins call their constructor when loaded. However, please do not place any game-related operations such as event subscription, command registration, etc., in the constructor, as these operations need to be performed after the game is fully loaded. If you perform these operations in the constructor, your plugin is likely to crash during loading.

!!! tip
    In general, the constructor of a plugin should only perform non-game-related initialization operations, such as initializing the logging system, configuration files, databases, etc.

```cpp
// ...

#include <utility>

#include <ll/api/command/DynamicCommand.h>
#include <ll/api/service/Bedrock.h>
#include <mc/entity/utilities/ActorType.h>
#include <mc/server/commands/CommandOrigin.h>
#include <mc/server/commands/CommandOutput.h>
#include <mc/server/commands/CommandPermissionLevel.h>
#include <mc/world/actor/player/Player.h>

bool Plugin::enable() {
    auto& logger = mSelf.getLogger();

    // ...

    // Register commands.
    auto commandRegistry = ll::service::getCommandRegistry();
    if (!commandRegistry) {
        throw std::runtime_error("failed to get command registry");
    }

    auto command =
        DynamicCommand::createCommand(commandRegistry, "suicide", "Commits suicide.", CommandPermissionLevel::Any);
    command->addOverload();
    command->setCallback(
        [&logger](DynamicCommand const&, CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, DynamicCommand::Result>&) {
            auto* entity = origin.getEntity();
            if (entity == nullptr || !entity->isType(ActorType::Player)) {
                output.error("Only players can commit suicide");
                return;
            }

            auto* player = static_cast<Player*>(entity);
            player->kill();

            logger.info("{} killed themselves", player->getRealName());
        }
    );
    DynamicCommand::setup(commandRegistry, std::move(command));

    // ...

    return true;
}

bool Plugin::disable() {

    // ...

    // Unregister commands.
    auto commandRegistry = ll::service::getCommandRegistry();
    if (!commandRegistry) {
        throw std::runtime_error("failed to get command registry");
    }

    commandRegistry->unregisterCommand("suicide");

    // ...

    return true;
}
```

Let's break down this code. The following statement retrieves a logger from the LeviLamina plugin instance stored in the `Plugin` class.

```cpp
auto& logger = mSelf.getLogger();
```

Next, we obtain the command registry. The command registry only takes effect after a specific event, so its type is `optional_ref<T>`. We need to determine whether the obtained command registry is valid.

```cpp
auto commandRegistry = ll::service::getCommandRegistry();
if (!commandRegistry) {
    throw std::runtime_error("failed to get command registry");
}
```

The dynamic command system supports registering commands directly using the `DynamicCommand::createCommand()` function.

```cpp
auto command = DynamicCommand::createCommand(
    event.registry(),
    "suicide",
    "Commits suicide.",
    CommandPermissionLevel::Any);
```

Here, the second parameter is the command itself, i.e., the characters entered in the console or chat. Although various special characters have not been tested for their effectiveness, we still recommend using only lowercase English letters. The third parameter is the command description, which is displayed above the chat when part of the command is entered, showing candidate commands and their descriptions in semi-transparent gray. The fourth parameter is the permission level of the command, defined as follows. If we want ordinary players in survival mode to be able to execute it, we should choose `Any`. `GameDirectors` corresponds to players with at least creative mode, `Admin` corresponds to players with at least OP permissions, and `Host` corresponds to console permissions.

```cpp
enum class CommandPermissionLevel : schar {
    Any           = 0x0,
    GameDirectors = 0x1,
    Admin         = 0x2,
    Host          = 0x3,
    Owner         = 0x4,
    Internal      = 0x5,
};
```

Then, we need to add an overload for the command and set the corresponding callback.

```cpp
command->addOverload();
command->setCallback([&logger](DynamicCommand const&,
                        CommandOrigin const& origin,
                        CommandOutput&       output,
                        std::unordered_map<std::string, DynamicCommand::Result>&) {
    // ...
});
```

!!! note
    Command overloads mean different patterns for a command, for example, `dyncmd <add|remove> <testString:string>` is one overload, and `dyncmd list` is another overload. Here is an example from LeviLamina's test case:

    ```cpp
        auto command =
            DynamicCommand::createCommand(registry, "testcmd", "dynamic command", CommandPermissionLevel::GameDirectors);

        auto& optionsAdd  = command->setEnum("TestOperation1", {"add", "remove"});
        auto& optionsList = command->setEnum("TestOperation2", {"list"});

        command->mandatory("testEnum", ParamType::Enum, optionsAdd, CommandParameterOption::EnumAutocompleteExpansion);
        command->mandatory("testEnum", ParamType::Enum, optionsList, CommandParameterOption::EnumAutocompleteExpansion);
        command->mandatory("testString", ParamType::String);

        command->addOverload({optionsAdd, "testString"}); // dyncmd <add|remove> <testString:string>
        command->addOverload({"TestOperation2"});         // dyncmd <list>
    ```

In the callback function, we first attempt to get the command's execution source. Here, we need to make a decision because the console, command blocks, and various entities can execute commands, but the suicide plugin should only respond to player requests. If the command is executed by an incorrect source, an error message should be displayed.

```cpp
auto* entity

 = origin.getEntity();
if (entity == nullptr || !entity->isType(ActorType::Player)) {
    output.error("Only players can commit suicide");
    return;
}
```

Once we confirm that the source of execution is a player, we can convert the entity pointer to a player pointer and kill them.

```cpp
auto* player = static_cast<Player*>(entity);
player->kill();

logger.info("{} killed themselves", player->getRealName());
```

!!! warning
    Since BDS lacks RTTI information, `dynamic_cast<T>()` cannot be used.

!!! tip
    You may notice another function `player->getName()`, but we did not use it. This is because the player's name can be modified through plugins or other means, while the result of `player->getRealName()` is (generally) fixed.

At this point, the command object is configured, and we call `DynamicCommand::setup()` to load the command object into the game. Note that `std::move()` is needed here because it takes a right-value reference.

```cpp
DynamicCommand::setup(event.registry(), std::move(command));
```

At the end of the `enable()` function, return `true`, indicating that the plugin was enabled successfully. If `false` is returned in the `enable()` function, LeviLamina will consider the plugin to have failed to enable and display an error message on the console.

In the `disable()` function, we need to unregister the command.

```cpp
// Unregister commands.
auto commandRegistry = ll::service::getCommandRegistry();
if (!commandRegistry) {
    throw std::runtime_error("failed to get command registry");
}

commandRegistry->unregisterCommand("suicide");
```

## Reading Configuration File

The second functionality of our plugin is to give players a clock when they first enter the server. The third functionality is to display a confirmation prompt for suicide when using the clock, allowing players to confirm before proceeding. However, there is a small issue with these two functionalities: server administrators may have installed other plugins that implement similar features and may not want to use these specific features of the suicide plugin. We want to provide a way for administrators to toggle these two functionalities.

We are pleased to announce that LeviLamina has implemented reflection for configuration files and configuration information structures in C++. This means that we can define a structure in C++ and then define an instance of this structure in the configuration file. LeviLamina will automatically read the contents of the configuration file into the structure instance. This way, we can directly use the structure instance in C++ without the need to manually parse the configuration file.

First, let's create a separate `Config.h` file to define a structure named `Config` for storing configuration information.

```cpp
struct Config {
    int  version          = 1;
    bool doGiveClockOnFirstJoin = true;
    bool enableClockMenu = true;
};
```

In the `Plugin` class, let's add a member variable to store the configuration information.

```cpp
// ...

#include "Config.h"

class Plugin {

// ...

private:
    Config mConfig;
};
```

Next, in the constructor of the `Plugin` class, let's read the configuration file and save the configuration information to the member variable.

```cpp
#include <ll/api/Config.h>

// ...

Plugin::Plugin(ll::plugin::Plugin& self) : mSelf(self) {
    auto& logger = mSelf.getLogger();

    // Load or initialize configurations.
    const auto& configFilePath = self.getConfigDir() / "config.json";
    if (!ll::config::loadConfig(mConfig, configFilePath)) {
        logger.warn("Cannot load configurations from {}", configFilePath);
        logger.info("Saving default configurations");

        if (!ll::config::saveConfig(mConfig, configFilePath)) {
            logger.error("Cannot save default configurations to {}", configFilePath);
        }
    }
}
```

In this code, we first obtain the path to the plugin's configuration file and then call the `ll::config::loadConfig()` function to read the configuration information from the file into the structure instance. If the reading fails, we output a warning message to the console and save the default configuration information to the file.

!!! note
    Since configuration file reading occurs in the constructor, we can ensure that the configuration file has been successfully read in subsequent operations.

## Persistently Storing Player Join Information in the Database

The second functionality of our plugin is to give players a clock when they first enter the server. However, if we store player join information in memory, it will be lost when the server restarts. Therefore, we need to persistently store player join information in the database. LeviLamina provides an encapsulation for key-value databases, allowing us to use databases directly in C++.

Firstly, let's add a member variable to the `Plugin` class to store the database instance.

```cpp
// ...

#include <ll/api/base/KeyValueDB.h>

class Plugin {

// ...

private:
    std::unique_ptr<ll::KeyValueDB> mPlayerDb;
};
```

!!! note
    Why use `std::unique_ptr<ll::KeyValueDB>` instead of `ll::KeyValueDB` directly? This is because `ll::KeyValueDB` prohibits copying and only allows moving. Therefore, we need to use `std::unique_ptr` to manage the lifetime of the `ll::KeyValueDB` instance.

!!! warning
    Do not use regular pointers to store an instance of `ll::KeyValueDB`, as it can complicate lifecycle management, leading to memory leaks and other issues. Remember: you're writing C++, not C.

Next, in the constructor of the `Plugin` class, let's initialize the database instance.

```cpp
// ...

#include <memory>

#include <ll/api/base/KeyValueDB.h>

// ...

Plugin::Plugin(ll::plugin::Plugin& self) : mSelf(self) {
    auto& logger = mSelf.getLogger();

    // ...

    // Initialize database.
    const auto& playerDbPath = self.getDataDir() / "players";
    mPlayerDb                = std::make_unique<ll::KeyValueDB>(playerDbPath);
}
```

In this code, we first obtain the path to the plugin's database, and then we call `std::make_unique<ll::KeyValueDB>()` to create a database instance. If the database path does not exist, the `std::make_unique<ll::KeyValueDB>()` function will automatically create the necessary directories.

!!! note
    Since database initialization occurs in the constructor, we can ensure that the database has been successfully initialized in subsequent operations.

## Giving a Clock to Players on Their First Join

The second functionality of our plugin is to give players a clock when they first enter the server. We need to check if the player is joining for the first time and, if so, give them a clock.

In BDS, when a player joins, the `PlayerJoinEvent` is triggered. In LeviLamina, we can subscribe to this event, and when it is triggered, the plugin can implement the logic for when a player joins.

In the `Plugin.h` file, let's add an event listener pointer:

```cpp
// ...

class Plugin {

// ...

private:
    // ...

    ll::event::ListenerPtr mPlayerJoinEventListener;
};
```

In the `Plugin.cpp` file, let's register this event listener in the `enable()` function and unregister it in the `disable()` function.

```cpp
bool Plugin::enable() {
    // ...

    mPlayerJoinEventListener = eventBus.emplaceListener<ll::event::player::PlayerJoinEvent>(
        [doGiveClockOnFirstJoin = mConfig.doGiveClockOnFirstJoin,
         &logger,
         &playerDb = mPlayerDb](ll::event::player::PlayerJoinEvent& event) {
            if (doGiveClockOnFirstJoin) {
                auto& player = event.self();
                auto& uuid   = player.getUuid();

                // Check if the player has joined before.
                if (!playerDb->get(uuid.asString())) {

                    ItemStack itemStack("clock", 1);
                    player.add(itemStack);

                    // Must refresh inventory to see the clock.
                    player.refreshInventory();

                    // Mark the player as joined.
                    if (!playerDb->set(uuid.asString(), "true")) {
                        logger.error("Cannot mark {} as joined in database", player.getRealName());
                    }

                    logger.info("First join of {}! Giving them a clock", player.getRealName());
                }
            }
        }
    );

    // ...
}

bool Plugin::disable() {
    // ...

    eventBus.removeListener(mPlayerJoinEventListener);

    // ...
}
```

Let's break down this code. In the callback lambda function, we capture the configuration `doGiveClockOnFirstJoin`, as well as the logger and database instance. We then check if `doGiveClockOnFirstJoin` is `true`, and if it is, we proceed with the logic.

```cpp
[doGiveClockOnFirstJoin = mConfig.doGiveClockOnFirstJoin,
 &logger,
 &playerDb = mPlayerDb](ll::event::

player::PlayerJoinEvent& event) {
    if (doGiveClockOnFirstJoin) {
        // ...
    }
}
```

Next, we obtain the player instance and the player's UUID from the event.

```cpp
auto& player = event.self();
auto& uuid   = player.getUuid();
```

!!! note
    The type of UUID obtained here is `mce::UUID` rather than `std::string`. We recommend converting UUID to `std::string` only when necessary, as the implementation of `mce::UUID` is more efficient.

!!! danger
    Please do not use XUID as the unique identifier for players. While in the LiteLoaderBDS era, many plugins used XUID as the unique identifier for players, this is incorrect. XUID is the identifier for Xbox Live, not for players. If the server is not in online mode or has NPCs (Non-Player Characters), the behavior of XUID will be unpredictable. Therefore, we strongly recommend using UUID as the unique identifier for players.

Then, we use the player's UUID as the key to check if the player has joined before in the database.

```cpp
// Check if the player has joined before.
if (!playerDb->get(uuid.asString())) {
    // ...
}
```

Next, we create a stack of clock items and add this item stack to the player's inventory.

```cpp
ItemStack itemStack("clock", 1);
player.add(itemStack);
```

!!! note
    Here, we use the `ItemStack` class instead of the `Item` class. The `ItemStack` class is a wrapper for the `Item` class, and it includes information such as the quantity, enchantments, durability, etc, while `Item` class just represents the item kind. Therefore, you should the `ItemStack` class instead of the `Item` class.

Then, we need to refresh the player's inventory so that the player can see the clock.

```cpp
player.refreshInventory();
```

Finally, we use the player's UUID as the key to mark the player as joined in the database.

```cpp
// Mark the player as joined.
if (!playerDb->set(uuid.asString(), "true")) {
    logger.error("Cannot mark {} as joined in database", player.getRealName());
}
```

In the `disable()` function, we need to remove the event listener from the event bus to unsubscribe from the event.

```cpp
eventBus.removeListener(mPlayerJoinEventListener);
```

## Displaying a Confirmation Prompt for Suicide when Using the Clock

The third functionality of our plugin is to display a confirmation prompt for suicide when using the clock. After the player confirms, they can proceed with suicide. We need to subscribe to the event of a player using an item, and when a clock is used, display a confirmation prompt.

In the `Plugin.h` file, let's add an event listener pointer:

```cpp
// ...

class Plugin {

// ...

private:
    // ...

    ll::event::ListenerPtr mPlayerUseItemEventListener;
};
```

In the `Plugin.cpp` file, let's register this event listener in the `enable()` function and unregister it in the `disable()` function.

```cpp
bool Plugin::enable() {
    mPlayerUseItemEventListener = eventBus.emplaceListener<ll::event::PlayerUseItemEvent>(
        [enableClockMenu = mConfig.enableClockMenu, &logger](ll::event::PlayerUseItemEvent& event) {
            if (enableClockMenu) {
                auto& player    = event.self();
                auto& itemStack = event.item();

                logger.info("{} used {}", player.getRealName(), itemStack.getRawNameId());

                if (itemStack.getRawNameId() == "clock") {
                    ll::form::ModalForm form(
                        "Warning",
                        "Are you sure you want to kill yourself?",
                        "Yes",
                        "No",
                        [&logger](Player& player, bool yes) {
                            if (yes) {
                                player.kill();

                                logger.info("{} killed themselves", player.getRealName());
                            }
                        }
                    );

                    form.sendTo(player);

                    logger.info("{} opened better-suicide menu", player.getRealName());
                }
            }
        }
    );
}

bool Plugin::disable() {
    // ...

    eventBus.removeListener(mPlayerUseItemEventListener);

    // ...
}
```

Let's break down this code. In the callback lambda function, we capture the configuration `enableClockMenu` and logger. We then check if `enableClockMenu` is `true`, and if it is, we proceed with the logic.

```cpp
mPlayerUseItemEventListener = eventBus.emplaceListener<ll::event::PlayerUseItemEvent>(
    [enableClockMenu = mConfig.enableClockMenu, &logger](ll::event::PlayerUseItemEvent& event) {
        if (enableClockMenu) {
           // ...
        }
    }
);
```

In the logic, we first obtain the player instance and the item stack being used from the event.

```cpp
auto& player    = event.self();
auto& itemStack = event.item();
```

Then, we log the player's name and the item being used.

```cpp
logger.info("{} used {}", player.getRealName(), itemStack.getRawNameId());
```

Next, we check if the item being used is a clock and, if it is, display a confirmation prompt using a modal form.

```cpp
if (itemStack.getRawNameId() == "clock") {
    ll::form::ModalForm form(
        "Warning",
        "Are you sure you want to kill yourself?",
        "No",
        "Yes",
        [&logger](Player& player, bool isCanceled) {
            if (!isCanceled) {
                player.kill();

                logger.info("{} killed themselves", player.getRealName());
            }
        }
    );

    form.sendTo(player);

    logger.info("{} opened better-suicide menu", player.getRealName());
}
```

In this form, the first parameter is the title of the form, the second parameter is the prompt content, the third parameter is the content of the button in the bottom-left corner, and the fourth parameter is the content of the button in the bottom-right corner. The callback function receives two parameters: the player to whom the form is sent and a boolean indicating whether the form was canceled. The callback function is called when the player interacts with the form.

Finally, we send the form to the player.

```cpp
form.sendTo(player);
```

## Run Your Plugin

If your plugin is built successfully, you should see a directory in the `bin/` folder named after your plugin. Copy this directory to the `plugins/` directory inside the LeviLamina directory (create one if it doesn't exist), resulting in the following file structure:

```text
/path/to/levilamina/plugins/your-plugin-name
├── your-plugin-name.dll
└── manifest.json
```

Then run the LeviLamina server (`bedrock_server_mod.exe`).

## What's Next?

You can [publicly release your plugin](./publish_your_first_plugin.md) for more people to use.

## Further Exercises

We can add more features to this plugin to practice additional knowledge of LeviLamina plugin development. Here are some possible exercises:

- Set a cooldown time for player suicides.
- Allow players to keep all items when committing suicide.
- Preserve experience when a player commits suicide.
- Enable players to respawn in the same location after suicide.
- Keep track of player suicide counts and display a leaderboard in the sidebar.
- Use advanced forms to let players choose the method of suicide.
- Display a custom death message when a player commits suicide.

Here are some reference materials you might need:

- [Event Guide](../guides/event_guide.md)
- [Export Interface Guide](../guides/export_interface_guide.md)
- [Form Guide](../guides/form_guide.md)
- [Hook Guide](../guides/hook_guide.md)
- [Find Function Guide](../guides/find_function_guide.md)
