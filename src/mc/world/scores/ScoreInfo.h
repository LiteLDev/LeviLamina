#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScoreInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREINFO
public:
    ScoreInfo& operator=(ScoreInfo const&) = delete;
    ScoreInfo(ScoreInfo const&)            = delete;
    ScoreInfo()                            = delete;
#endif

public:
};
