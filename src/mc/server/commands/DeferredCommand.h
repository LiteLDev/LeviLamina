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
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredCommand() /*override*/ = default;

    virtual void execute(::MinecraftCommands&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
