#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class CountBlockCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk123acc;
    ::ll::UntypedStorage<8, 8> mUnk8b71a6;
    ::ll::UntypedStorage<8, 24> mUnk98d9da;
    ::ll::UntypedStorage<4, 4> mUnk6e5bc8;
    // NOLINTEND

public:
    // prevent constructor by default
    CountBlockCommand& operator=(CountBlockCommand const&);
    CountBlockCommand(CountBlockCommand const&);
    CountBlockCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;

    // vIndex: 0
    virtual ~CountBlockCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
