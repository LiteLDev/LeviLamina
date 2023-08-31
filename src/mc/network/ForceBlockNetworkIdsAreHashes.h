#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ForceBlockNetworkIdsAreHashes : int8_t {
    UseDefault = 0x0,
    ForceOff   = 0x1,
    ForceOn    = 0x2,
};
