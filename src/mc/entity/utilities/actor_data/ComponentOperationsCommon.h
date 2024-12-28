#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorData {

struct ComponentOperationsCommon {
public:
    // prevent constructor by default
    ComponentOperationsCommon& operator=(ComponentOperationsCommon const&);
    ComponentOperationsCommon(ComponentOperationsCommon const&);
    ComponentOperationsCommon();
};

} // namespace ActorData
