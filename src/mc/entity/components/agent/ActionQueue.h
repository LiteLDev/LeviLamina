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
    ActionQueue& operator=(ActionQueue const&);
    ActionQueue(ActionQueue const&);
    ActionQueue();

public:
    // NOLINTBEGIN
    // symbol: ??0ActionQueue@AgentComponents@@QEAA@$$QEAV01@@Z
    MCAPI ActionQueue(class AgentComponents::ActionQueue&&);

    // symbol: ?schedule@ActionQueue@AgentComponents@@SAXAEAVEntityContext@@UQueueItem@Actions@2@@Z
    MCAPI static void schedule(class EntityContext& entity, struct AgentComponents::Actions::QueueItem item);

    // symbol: ?tryStartNext@ActionQueue@AgentComponents@@SAXAEAVEntityContext@@@Z
    MCAPI static void tryStartNext(class EntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?pop@ActionQueue@AgentComponents@@AEAA?AUQueueItem@Actions@2@XZ
    MCAPI struct AgentComponents::Actions::QueueItem pop();

    // NOLINTEND
};

}; // namespace AgentComponents
