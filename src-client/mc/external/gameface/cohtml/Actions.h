#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::EventAction {

enum class Actions : int {
    ContinueHandling  = 0,
    InterruptHandling = 1,
};

}
