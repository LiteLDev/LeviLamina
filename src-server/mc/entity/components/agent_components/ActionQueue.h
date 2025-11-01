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
    // ActionQueue inner types declare
    // clang-format off
    class Definition;
    // clang-format on
    
    // ActionQueue inner types define
    class Definition {
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke8cbf2;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionQueue& operator=(ActionQueue const&);
    ActionQueue(ActionQueue const&);
    ActionQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AgentComponents::Actions::QueueItem pop();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void schedule(::EntityContext& entity, ::AgentComponents::Actions::QueueItem item);
    // NOLINTEND

};

}
