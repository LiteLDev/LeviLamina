#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/KeyFrameLerpStyle.h"
#include "mc/external/glm/mat.h"

class KeyFrameLerpMode {
public:
    // prevent constructor by default
    KeyFrameLerpMode(KeyFrameLerpMode const&);
    KeyFrameLerpMode();

public:
    // NOLINTBEGIN
    MCAPI struct glm::mat<4, 4, float, 0> const& getPrecomputedCubicCoeffs() const;

    MCAPI class KeyFrameLerpMode& operator=(class KeyFrameLerpMode const&);

    MCAPI void setLerpStyle(::KeyFrameLerpStyle lerpStyle);

    // NOLINTEND
};
