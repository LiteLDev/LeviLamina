#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct FogVolumetricCoefficientSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mScattering;
    ::ll::TypedStorage<4, 16, ::mce::Color> mAbsorption;
    // NOLINTEND

public:
    // prevent constructor by default
    FogVolumetricCoefficientSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FogVolumetricCoefficientSetting(::mce::Color const& scattering, ::mce::Color const& absorption);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricCoefficientSetting
    lerp(::FogVolumetricCoefficientSetting const& src, ::FogVolumetricCoefficientSetting const& dst, float alpha);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricCoefficientSetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::Color const& scattering, ::mce::Color const& absorption);
    // NOLINTEND
};
