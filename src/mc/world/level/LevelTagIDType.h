#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelTagIDType {

public:
    // prevent constructor by default
    LevelTagIDType& operator=(LevelTagIDType const&) = delete;
    LevelTagIDType(LevelTagIDType const&)            = delete;
    LevelTagIDType()                                 = delete;
};
