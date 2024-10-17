#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/world/level/CommandOriginSystem.h"

class CommandManager {
public:
    // prevent constructor by default
    CommandManager& operator=(CommandManager const&);
    CommandManager(CommandManager const&);
    CommandManager();

public:
    // NOLINTBEGIN
    MCAPI explicit CommandManager(class MinecraftCommands& commands);

    MCAPI class MinecraftCommands& getCommands();

    MCAPI class FunctionManager& getFunctionManager();

    MCAPI void initialize(std::unique_ptr<class FunctionManager> functionManager);

    MCAPI void loadFunctionManager(class ResourcePackManager& resourcePackManager);

    MCAPI void runCommand(class Command& command, class CommandOrigin& origin, ::CommandOriginSystem originSystem);

    MCAPI void runCommand(
        class HashedString const& commandStr,
        class CommandOrigin&      origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion       commandVersion
    );

    MCAPI void tick();

    MCAPI ~CommandManager();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class MinecraftCommands& commands);

    MCAPI void dtor$();

    // NOLINTEND
};
