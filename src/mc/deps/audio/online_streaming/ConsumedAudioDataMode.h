#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

enum class ConsumedAudioDataMode : int {
    Publish = 0,
    Discard = 1,
};

}
