#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/CommandOriginSystem.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
// clang-format on

class CommandManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk66ac1d;
    ::ll::UntypedStorage<8, 8> mUnk549ea2;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandManager& operator=(CommandManager const&);
    CommandManager(CommandManager const&);
    CommandManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem);

    MCNAPI void tick();
    // NOLINTEND
};
