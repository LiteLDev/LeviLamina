#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PandaFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PANDAFLAG
public:
    PandaFlag& operator=(PandaFlag const&) = delete;
    PandaFlag(PandaFlag const&)            = delete;
    PandaFlag()                            = delete;
#endif

public:
};
