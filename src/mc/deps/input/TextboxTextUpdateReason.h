#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TextboxTextUpdateReason : int {
    NoReason             = 0,
    AffirmativeDismissal = 1,
    CancelDismissal      = 2,
};
