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
    ::ll::UntypedStorage<8, 8>  mUnke036cf;
    ::ll::UntypedStorage<1, 1>  mUnkfecf3f;
    ::ll::UntypedStorage<1, 1>  mUnk15a3f4;
    ::ll::UntypedStorage<8, 64> mUnked4707;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredCommand& operator=(DeferredCommand const&);
    DeferredCommand(DeferredCommand const&);
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
    MCNAPI DeferredCommand(
        ::std::unique_ptr<::CommandContext> context,
        bool                                suppressOutput,
        bool                                isRequest,
        ::std::function<void(::MCRESULT)>   callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::CommandContext> context,
        bool                                suppressOutput,
        bool                                isRequest,
        ::std::function<void(::MCRESULT)>   callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::MinecraftCommands& commands);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
