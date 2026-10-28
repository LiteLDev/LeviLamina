#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/DeferredCommandBase.h"

// auto generated forward declare list
// clang-format off
class CommandContext;
class MinecraftCommands;
struct MCRESULT;
// clang-format on

class DeferredCommand : public ::DeferredCommandBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandContext>> mContext;
    ::ll::TypedStorage<1, 1, bool>                                mSuppressOutput;
    ::ll::TypedStorage<1, 1, bool>                                mIsRequest;
    ::ll::TypedStorage<8, 64, ::std::function<void(::MCRESULT)>>  mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredCommand() /*override*/ = default;

    virtual void execute(::MinecraftCommands& commands) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeferredCommand(
        ::std::unique_ptr<::CommandContext> context,
        bool                                suppressOutput,
        bool                                isRequest,
        ::std::function<void(::MCRESULT)>   callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::CommandContext> context,
        bool                                suppressOutput,
        bool                                isRequest,
        ::std::function<void(::MCRESULT)>   callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::MinecraftCommands& commands);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
