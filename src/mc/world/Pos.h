#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Pos {

public:
    // prevent constructor by default
    Pos& operator=(Pos const&) = delete;
    Pos(Pos const&)            = delete;
    Pos()                      = delete;
};
