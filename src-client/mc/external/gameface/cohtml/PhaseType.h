#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::InputEventPhase {

enum class PhaseType : int {
    None           = 0,
    CapturingPhase = 1,
    AtTarget       = 2,
    BubblingPhase  = 3,
};

}
