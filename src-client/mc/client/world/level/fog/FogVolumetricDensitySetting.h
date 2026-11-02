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
    MCNAPI FogVolumetricDensitySetting(
        ::Core::Keyframes<float, float> const& maxDensity,
        ::Core::Keyframes<float, float> const& maxDensityHeight,
        ::Core::Keyframes<float, float> const& zeroDensityHeight
    );

    MCNAPI ~FogVolumetricDensitySetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FogVolumetricDensitySetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::Keyframes<float, float> const& maxDensity,
        ::Core::Keyframes<float, float> const& maxDensityHeight,
        ::Core::Keyframes<float, float> const& zeroDensityHeight
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
