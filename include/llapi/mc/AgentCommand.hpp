/**
 * @file  AgentCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AgentCommand.
 *
 */
class AgentCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMAND
public:
    class AgentCommand& operator=(class AgentCommand const &) = delete;
    AgentCommand(class AgentCommand const &) = delete;
    AgentCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AgentCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@AgentCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@AgentCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol  ?collect\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void collect(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?createAgent\@AgentCommand\@\@AEBAXAEAVPlayer\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void createAgent(class Player &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?createAgentOutputSuccess\@AgentCommand\@\@AEBAXAEAVCommandOutput\@\@_N\@Z
     */
    MCAPI void createAgentOutputSuccess(class CommandOutput &, bool) const;
    /**
     * @symbol  ?directionCommand\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void directionCommand(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?getPosition\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void getPosition(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?itemCommand\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void itemCommand(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?place\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void place(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?reportSuccess\@AgentCommand\@\@AEBAX_NAEAVCommandOutput\@\@\@Z
     */
    MCAPI void reportSuccess(bool, class CommandOutput &) const;
    /**
     * @symbol  ?setAgentOwner\@AgentCommand\@\@AEBAXAEAVAgent\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void setAgentOwner(class Agent &, class Player &) const;
    /**
     * @symbol  ?setItem\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void setItem(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?tpAgent\@AgentCommand\@\@AEBAXAEAVPlayer\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void tpAgent(class Player &, class CommandOrigin const &, class CommandOutput &) const;

private:

};