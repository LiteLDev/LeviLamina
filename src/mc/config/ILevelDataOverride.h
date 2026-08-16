#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class ILevelDataOverride {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelDataOverride();

    virtual void applyTo(::LevelData&) const = 0;
    // NOLINTEND
};
