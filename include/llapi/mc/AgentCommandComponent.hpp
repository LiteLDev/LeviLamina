/**
 * @file  AgentCommandComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AgentCommandComponent.
 *
 */
class AgentCommandComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDCOMPONENT
public:
    class AgentCommandComponent& operator=(class AgentCommandComponent const &) = delete;
    AgentCommandComponent(class AgentCommandComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0AgentCommandComponent\@\@QEAA\@XZ
     */
    MCAPI AgentCommandComponent();
    /**
     * @symbol  ?addCommand\@AgentCommandComponent\@\@QEAA_NV?$unique_ptr\@VCommand\@AgentCommands\@\@U?$default_delete\@VCommand\@AgentCommands\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool addCommand(std::unique_ptr<class AgentCommands::Command>);
    /**
     * @symbol  ?getCurrentCommand\@AgentCommandComponent\@\@QEBAAEBV?$unique_ptr\@VCommand\@AgentCommands\@\@U?$default_delete\@VCommand\@AgentCommands\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class AgentCommands::Command> const & getCurrentCommand() const;
    /**
     * @symbol  ?initFromDefinition\@AgentCommandComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol  ?setCurrentCommand\@AgentCommandComponent\@\@QEAAXV?$unique_ptr\@VCommand\@AgentCommands\@\@U?$default_delete\@VCommand\@AgentCommands\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setCurrentCommand(std::unique_ptr<class AgentCommands::Command>);

};