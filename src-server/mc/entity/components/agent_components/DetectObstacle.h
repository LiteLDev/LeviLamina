#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace AgentComponents {

class DetectObstacle {
public:
    // DetectObstacle inner types declare
    // clang-format off
    class Definition;
    // clang-format on
    
    // DetectObstacle inner types define
    class Definition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkf551f8;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkccae47;
    // NOLINTEND

public:
    // prevent constructor by default
    DetectObstacle& operator=(DetectObstacle const&);
    DetectObstacle(DetectObstacle const&);
    DetectObstacle();

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static void setup(::AgentComponents::DetectObstacle& detect, ::EntityContext& entity, ::AgentComponents::Direction dir);
    // NOLINTEND

};

}
