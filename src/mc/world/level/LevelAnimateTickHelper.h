#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelAnimateTickHelper {
public:
    // prevent constructor by default
    LevelAnimateTickHelper& operator=(LevelAnimateTickHelper const&);
    LevelAnimateTickHelper(LevelAnimateTickHelper const&);
    LevelAnimateTickHelper();

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const& MIN_TIME_LIMITED_JAVA_PARITY_VERSION();

    // NOLINTEND
};
