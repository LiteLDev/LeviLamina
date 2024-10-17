#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockBreakSensorComponent {
public:
    // prevent constructor by default
    BlockBreakSensorComponent& operator=(BlockBreakSensorComponent const&);
    BlockBreakSensorComponent(BlockBreakSensorComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BlockBreakSensorComponent();

    MCAPI BlockBreakSensorComponent(class BlockBreakSensorComponent&&);

    MCAPI void initialize(class Actor& actor);

    MCAPI class BlockBreakSensorComponent& operator=(class BlockBreakSensorComponent&&);

    MCAPI void updateSensorPos(class Vec3 const& newPos);

    MCAPI ~BlockBreakSensorComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class BlockBreakSensorComponent&&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
