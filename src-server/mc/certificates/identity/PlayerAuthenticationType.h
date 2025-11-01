#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayerAuthenticationType : int {
    Invalid = -1,
    Full = 0,
    Guest = 1,
    SelfSigned = 2,
};
