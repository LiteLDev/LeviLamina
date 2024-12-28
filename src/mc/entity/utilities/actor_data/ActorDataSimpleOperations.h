#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorData {

template <typename T0, typename T1, typename T2>
struct ActorDataSimpleOperations {
public:
    // prevent constructor by default
    ActorDataSimpleOperations& operator=(ActorDataSimpleOperations const&);
    ActorDataSimpleOperations(ActorDataSimpleOperations const&);
    ActorDataSimpleOperations();
};

} // namespace ActorData
