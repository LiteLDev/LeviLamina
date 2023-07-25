#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentCommands { class Command; }
// clang-format on

class AgentCommandComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDCOMPONENT
public:
    AgentCommandComponent& operator=(AgentCommandComponent const&) = delete;
    AgentCommandComponent(AgentCommandComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0AgentCommandComponent\@\@QEAA\@XZ
     */
    MCAPI AgentCommandComponent();
    /**
     * @symbol
     * ?addCommand\@AgentCommandComponent\@\@QEAA_NV?$unique_ptr\@VCommand\@AgentCommands\@\@U?$default_delete\@VCommand\@AgentCommands\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool addCommand(std::unique_ptr<class AgentCommands::Command>);
    /**
     * @symbol
     * ?getCurrentCommand\@AgentCommandComponent\@\@QEBAAEBV?$unique_ptr\@VCommand\@AgentCommands\@\@U?$default_delete\@VCommand\@AgentCommands\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class AgentCommands::Command> const& getCurrentCommand() const;
    /**
     * @symbol ?initFromDefinition\@AgentCommandComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol
     * ?setCurrentCommand\@AgentCommandComponent\@\@QEAAXV?$unique_ptr\@VCommand\@AgentCommands\@\@U?$default_delete\@VCommand\@AgentCommands\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setCurrentCommand(std::unique_ptr<class AgentCommands::Command>);
};
