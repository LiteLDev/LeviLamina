#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

struct synth_three_way {
public:
    // prevent constructor by default
    synth_three_way& operator=(synth_three_way const&);
    synth_three_way(synth_three_way const&);
    synth_three_way();
};

} // namespace brstd
