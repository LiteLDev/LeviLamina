#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace AgentComponents::Actions { struct QueueItem; }
// clang-format on

namespace AgentComponents {

class ActionQueue {

public:
    // prevent constructor by default
    ActionQueue& operator=(ActionQueue const&) = delete;
    ActionQueue(ActionQueue const&)            = delete;
    ActionQueue()                              = delete;

public:
    /**
     * @symbol ??0ActionQueue\@AgentComponents\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ActionQueue(class AgentComponents::ActionQueue&&); // NOLINT
    /**
     * @symbol ?schedule\@ActionQueue\@AgentComponents\@\@SAXAEAVEntityContext\@\@UQueueItem\@Actions\@2\@\@Z
     */
    MCAPI static void schedule(class EntityContext&, struct AgentComponents::Actions::QueueItem); // NOLINT
    /**
     * @symbol ?tryStartNext\@ActionQueue\@AgentComponents\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void tryStartNext(class EntityContext&); // NOLINT

    // private:
    /**
     * @symbol ?pop\@ActionQueue\@AgentComponents\@\@AEAA?AUQueueItem\@Actions\@2\@XZ
     */
    MCAPI struct AgentComponents::Actions::QueueItem pop(); // NOLINT

private:
};

}; // namespace AgentComponents
