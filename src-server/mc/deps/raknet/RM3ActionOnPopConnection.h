#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RM3ActionOnPopConnection : int {
    DoNothing = 0,
    DeleteReplica = 1,
    DeleteReplicaAndBroadcastDestruction = 2,
    Max = 3,
};

}
