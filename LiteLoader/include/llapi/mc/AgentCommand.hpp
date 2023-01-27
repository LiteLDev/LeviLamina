/**
 * @file  AgentCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Command.hpp"

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
     * @hash   2116592061
     * @vftbl  1
     * @symbol  ?execute\@AgentCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   281684284
     * @symbol  ?setup\@AgentCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -275180793
     * @symbol  ?collect\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void collect(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1387123219
     * @symbol  ?createAgent\@AgentCommand\@\@AEBAXAEAVPlayer\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void createAgent(class Player &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   990760338
     * @symbol  ?createAgentOutputSuccess\@AgentCommand\@\@AEBAXAEAVCommandOutput\@\@_N\@Z
     */
    MCAPI void createAgentOutputSuccess(class CommandOutput &, bool) const;
    /**
     * @hash   -294117543
     * @symbol  ?directionCommand\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void directionCommand(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1967698532
     * @symbol  ?getPosition\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void getPosition(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1993660011
     * @symbol  ?itemCommand\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void itemCommand(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1208466004
     * @symbol  ?place\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void place(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1440192512
     * @symbol  ?reportSuccess\@AgentCommand\@\@AEBAX_NAEAVCommandOutput\@\@\@Z
     */
    MCAPI void reportSuccess(bool, class CommandOutput &) const;
    /**
     * @hash   -1881134887
     * @symbol  ?setAgentOwner\@AgentCommand\@\@AEBAXAEAVAgent\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void setAgentOwner(class Agent &, class Player &) const;
    /**
     * @hash   238826546
     * @symbol  ?setItem\@AgentCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void setItem(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1137868781
     * @symbol  ?tpAgent\@AgentCommand\@\@AEBAXAEAVPlayer\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void tpAgent(class Player &, class CommandOrigin const &, class CommandOutput &) const;

private:

};