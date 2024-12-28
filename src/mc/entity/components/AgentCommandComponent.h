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
    ::ll::UntypedStorage<8, 8> mUnkafd5e0;
    // NOLINTEND

public:
    // prevent constructor by default
    AgentCommandComponent& operator=(AgentCommandComponent const&);
    AgentCommandComponent(AgentCommandComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AgentCommandComponent();

    MCAPI bool addCommand(::std::unique_ptr<::AgentCommands::Command> commandObj);

    MCAPI ::std::unique_ptr<::AgentCommands::Command> const& getCurrentCommand() const;

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI void setCurrentCommand(::std::unique_ptr<::AgentCommands::Command> command);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
