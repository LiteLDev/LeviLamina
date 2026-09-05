#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/DeferredCommandBase.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
class MinecraftCommands;
// clang-format on

class DeferredCompiledCommand : public ::DeferredCommandBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Command*>>        mCompiledCommand;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>> mOrigin;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredCompiledCommand() /*override*/ = default;

    virtual void execute(::MinecraftCommands&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::MinecraftCommands&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
