#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/DeferredCommandBase.h"

// auto generated forward declare list
// clang-format off
class MinecraftCommands;
// clang-format on

class DeferredCompiledCommand : public ::DeferredCommandBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk61084f;
    ::ll::UntypedStorage<8, 8> mUnk84daa1;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredCompiledCommand& operator=(DeferredCompiledCommand const&);
    DeferredCompiledCommand(DeferredCompiledCommand const&);
    DeferredCompiledCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredCompiledCommand() /*override*/ = default;

    virtual void execute(::MinecraftCommands&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::MinecraftCommands&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
