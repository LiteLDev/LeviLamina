#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Command;
// clang-format on

class CommandChainedSubcommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Command>> mCommand;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandChainedSubcommand();

    virtual ::std::string getCommandName() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
