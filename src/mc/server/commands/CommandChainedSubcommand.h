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
    virtual ~CommandChainedSubcommand() = default;

    virtual ::std::string getCommandName() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Command const* getCommand() const;

    MCFOLD void setCommand(::std::unique_ptr<::Command> command);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
