#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PaintingFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAINTINGFLAG
public:
    PaintingFlag& operator=(PaintingFlag const&) = delete;
    PaintingFlag(PaintingFlag const&)            = delete;
    PaintingFlag()                               = delete;
#endif

public:
};
