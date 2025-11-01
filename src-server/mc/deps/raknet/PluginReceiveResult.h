#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class PluginReceiveResult : int {
    StopProcessingAndDeallocate = 0,
    ContinueProcessing = 1,
    StopProcessing = 2,
};

}
