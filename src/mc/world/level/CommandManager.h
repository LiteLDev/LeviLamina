#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/CommandOriginSystem.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
class FunctionManager;
class MinecraftCommands;
class ScriptStat;
class ScriptStatCollector;
// clang-format on

class CommandManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                     mCommands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FunctionManager>>     mFunctionManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptStatCollector>> mScriptStatCollector;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandManager& operator=(CommandManager const&);
    CommandManager(CommandManager const&);
    CommandManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::ScriptStat>
    _collectScriptStats(uint64 currentTick, uint64 lastCollectedTick, uint64 collectionFrequency);

    MCAPI void initialize(::std::unique_ptr<::FunctionManager> functionManager);

    MCAPI void runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem);
    // NOLINTEND
};
