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
    // prevent constructor by default
    CommandChainedSubcommand& operator=(CommandChainedSubcommand const&);
    CommandChainedSubcommand(CommandChainedSubcommand const&);
    CommandChainedSubcommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandChainedSubcommand() = default;

    // vIndex: 1
    virtual ::std::string getCommandName() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Command const* getCommand() const;

    MCAPI void setCommand(::std::unique_ptr<::Command> command);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
