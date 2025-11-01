#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WitherBossPreAIStepResult : uchar {
    StopAiStepExecution    = 0,
    RunAiStep              = 1,
    RunPostAiStepAndAiStep = 2,
};
