#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents::Actions { struct QueueItem; }
// clang-format on

namespace AgentComponents {

class ActionQueue {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_ACTIONQUEUE
public:
    ActionQueue& operator=(ActionQueue const&) = delete;
    ActionQueue(ActionQueue const&)            = delete;
    ActionQueue()                              = delete;
#endif

public:
    /**
     * @symbol ??0ActionQueue\@AgentComponents\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ActionQueue(class AgentComponents::ActionQueue&&);
    /**
     * @symbol ?schedule\@ActionQueue\@AgentComponents\@\@SAXAEAVEntityContext\@\@UQueueItem\@Actions\@2\@\@Z
     */
    MCAPI static void schedule(class EntityContext&, struct AgentComponents::Actions::QueueItem);
    /**
     * @symbol ?tryStartNext\@ActionQueue\@AgentComponents\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void tryStartNext(class EntityContext&);

    // private:
    /**
     * @symbol ?pop\@ActionQueue\@AgentComponents\@\@AEAA?AUQueueItem\@Actions\@2\@XZ
     */
    MCAPI struct AgentComponents::Actions::QueueItem pop();

private:
};

}; // namespace AgentComponents
