#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrialManager {
public:
    // prevent constructor by default
    TrialManager& operator=(TrialManager const&);
    TrialManager(TrialManager const&);
    TrialManager();
};
