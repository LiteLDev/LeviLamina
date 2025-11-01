#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActiveDirectoryExperience : uchar {
    None = 1,
    NewTrial = 2,
    TrialWarning = 3,
    TrialEnded = 4,
    Generic = 5,
    MUTSDriven = 6,
    OneTrialWarning = 7,
    FinalTrialWarning = 8,
};
