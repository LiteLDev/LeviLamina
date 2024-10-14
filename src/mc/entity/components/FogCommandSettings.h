#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogCommandSettings {
public:
    // prevent constructor by default
    FogCommandSettings& operator=(FogCommandSettings const&);
    FogCommandSettings(FogCommandSettings const&);
    FogCommandSettings();

public:
    // NOLINTBEGIN
    MCAPI ~FogCommandSettings();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
