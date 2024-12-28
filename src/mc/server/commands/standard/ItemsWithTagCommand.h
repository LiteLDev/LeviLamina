#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class ItemsWithTagCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3c3774;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemsWithTagCommand& operator=(ItemsWithTagCommand const&);
    ItemsWithTagCommand(ItemsWithTagCommand const&);
    ItemsWithTagCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;

    // vIndex: 0
    virtual ~ItemsWithTagCommand() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
};
