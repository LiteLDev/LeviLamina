#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Keyframes.h"

struct FogVolumetricHenyeyGreensteinGSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, float>> mHenyeyGreensteinG;
    // NOLINTEND

public:
    // prevent constructor by default
    FogVolumetricHenyeyGreensteinGSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FogVolumetricHenyeyGreensteinGSetting(::Core::Keyframes<float, float> henyeyGreensteinG);

    MCAPI ~FogVolumetricHenyeyGreensteinGSetting();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
