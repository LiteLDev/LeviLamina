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
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;

    virtual ~ItemsWithTagCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
