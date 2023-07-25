#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NibblePair {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NIBBLEPAIR
public:
    NibblePair& operator=(NibblePair const&) = delete;
    NibblePair(NibblePair const&)            = delete;
    NibblePair()                             = delete;
#endif

public:
};
