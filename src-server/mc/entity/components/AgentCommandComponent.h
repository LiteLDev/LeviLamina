#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    MCAPI bool addCommand(::std::unique_ptr<::AgentCommands::Command> commandObj);
    // NOLINTEND

};
