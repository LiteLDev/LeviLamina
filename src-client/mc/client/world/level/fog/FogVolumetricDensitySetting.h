#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Keyframes.h"

struct FogVolumetricDensitySetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, float>> mMaxDensity;
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, float>> mMaxDensityHeight;
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, float>> mZeroDensityHeight;
    ::ll::TypedStorage<1, 1, bool>                             mUniform;
    // NOLINTEND

public:
    // prevent constructor by default
    FogVolumetricDensitySetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FogVolumetricDensitySetting(
        ::Core::Keyframes<float, float> maxDensity,
        ::Core::Keyframes<float, float> maxDensityHeight,
        ::Core::Keyframes<float, float> zeroDensityHeight
    );

    MCAPI ~FogVolumetricDensitySetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricDensitySetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
