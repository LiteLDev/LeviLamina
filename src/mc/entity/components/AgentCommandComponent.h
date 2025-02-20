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
    ::ll::UntypedStorage<8, 8> mUnkafd5e0;
    // NOLINTEND

public:
    // prevent constructor by default
    AgentCommandComponent& operator=(AgentCommandComponent const&);
    AgentCommandComponent(AgentCommandComponent const&);
    AgentCommandComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool addCommand(::std::unique_ptr<::AgentCommands::Command> commandObj);
    // NOLINTEND
};
