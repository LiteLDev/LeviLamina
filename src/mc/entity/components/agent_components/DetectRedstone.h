#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace AgentComponents {

class DetectRedstone {
public:
    // DetectRedstone inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // DetectRedstone inner types define
    class Definition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk774fe7;
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
    ::ll::UntypedStorage<1, 1> mUnk8d529b;
    // NOLINTEND

public:
    // prevent constructor by default
    DetectRedstone& operator=(DetectRedstone const&);
    DetectRedstone(DetectRedstone const&);
    DetectRedstone();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    setup(::AgentComponents::DetectRedstone& detect, ::EntityContext& entity, ::AgentComponents::Direction dir);
    // NOLINTEND
};

} // namespace AgentComponents
