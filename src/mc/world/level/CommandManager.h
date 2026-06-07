#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/world/level/CommandOriginSystem.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
class FunctionManager;
class HashedString;
class MinecraftCommands;
class ResourcePackManager;
// clang-format on

class CommandManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                 mCommands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FunctionManager>> mFunctionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandManager& operator=(CommandManager const&);
    CommandManager(CommandManager const&);
    CommandManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandManager(::MinecraftCommands& commands);

    MCFOLD ::MinecraftCommands const& getCommands() const;

    MCFOLD ::MinecraftCommands& getCommands();

    MCFOLD ::FunctionManager& getFunctionManager();

    MCFOLD void initialize(::std::unique_ptr<::FunctionManager> functionManager);

    MCAPI void loadFunctionManager(::ResourcePackManager& resourcePackManager);

    MCAPI void runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem);

    MCAPI void runCommand(
        ::HashedString const& commandStr,
        ::CommandOrigin&      origin,
        ::CommandOriginSystem originSystem,
        ::CurrentCmdVersion   commandVersion
    );

    MCAPI void tick();

    MCAPI ~CommandManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::MinecraftCommands& commands);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
