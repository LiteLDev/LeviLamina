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
    MCAPI ActionQueue(class AgentComponents::ActionQueue&&);

    MCAPI static void schedule(class EntityContext& entity, struct AgentComponents::Actions::QueueItem item);

    MCAPI static void tryStartNext(class EntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct AgentComponents::Actions::QueueItem pop();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class AgentComponents::ActionQueue&&);

    // NOLINTEND
};

}; // namespace AgentComponents
