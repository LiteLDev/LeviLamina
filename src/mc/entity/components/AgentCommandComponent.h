#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

class AgentCommandComponent {
public:
    // prevent constructor by default
    AgentCommandComponent& operator=(AgentCommandComponent const&);
    AgentCommandComponent(AgentCommandComponent const&);

public:
    // NOLINTBEGIN
    MCAPI AgentCommandComponent();

    MCAPI bool addCommand(std::unique_ptr<class AgentCommands::Command> commandObj);

    MCAPI std::unique_ptr<class AgentCommands::Command> const& getCurrentCommand() const;

    MCAPI void initFromDefinition(class Actor& owner);

    MCAPI void setCurrentCommand(std::unique_ptr<class AgentCommands::Command> command);

    // NOLINTEND
};
