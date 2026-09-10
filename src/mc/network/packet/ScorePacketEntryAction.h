#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ScorePacketEntryAction : uchar {
    Remove           = 0,
    ChangePlayer     = 1,
    ChangeEntity     = 2,
    ChangeFakePlayer = 3,
};
