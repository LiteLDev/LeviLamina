#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/KeyFrameLerpStyle.h"

class KeyFrameLerpMode {
public:
    // prevent constructor by default
    KeyFrameLerpMode(KeyFrameLerpMode const&);
    KeyFrameLerpMode();

public:
    // NOLINTBEGIN
    MCAPI glm::mat4x4 const& getPrecomputedCubicCoeffs() const;

    MCAPI class KeyFrameLerpMode& operator=(class KeyFrameLerpMode const&);

    MCAPI void setLerpStyle(::KeyFrameLerpStyle lerpStyle);

    // NOLINTEND
};
