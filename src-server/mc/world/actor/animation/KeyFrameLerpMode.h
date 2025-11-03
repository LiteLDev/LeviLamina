#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/KeyFrameLerpStyle.h"

class KeyFrameLerpMode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::glm::mat4x4>> mPrecomputedCubicCoeffs;
    ::ll::TypedStorage<4, 4, ::KeyFrameLerpStyle>              mLerpStyle;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyFrameLerpMode(KeyFrameLerpMode const&);
    KeyFrameLerpMode();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::glm::mat4x4 const& getPrecomputedCubicCoeffs() const;

    MCAPI ::KeyFrameLerpMode& operator=(::KeyFrameLerpMode const& rhs);
    // NOLINTEND
};
