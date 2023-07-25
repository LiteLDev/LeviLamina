#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Pos {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POS
public:
    Pos& operator=(Pos const&) = delete;
    Pos(Pos const&)            = delete;
    Pos()                      = delete;
#endif

public:
};
