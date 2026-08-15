#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Keyframes.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes { struct ColorNormRGB; }
// clang-format on

struct FogVolumetricCoefficientSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, ::SharedTypes::ColorNormRGB>> mScattering;
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, ::SharedTypes::ColorNormRGB>> mAbsorption;
    // NOLINTEND

public:
    // prevent constructor by default
    FogVolumetricCoefficientSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FogVolumetricCoefficientSetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricCoefficientSetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
