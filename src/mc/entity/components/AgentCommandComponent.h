#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace AgentCommands { class Command; }
// clang-format on

class AgentCommandComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AgentCommands::Command>> mCurrentCommand;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AgentCommandComponent();

    MCAPI bool addCommand(::std::unique_ptr<::AgentCommands::Command> commandObj);

    MCFOLD ::std::unique_ptr<::AgentCommands::Command> const& getCurrentCommand() const;

    MCAPI void initFromDefinition(::Actor& owner);

    MCFOLD void setCurrentCommand(::std::unique_ptr<::AgentCommands::Command> command);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
