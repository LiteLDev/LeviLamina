#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogCommandSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfc971f;
    ::ll::UntypedStorage<8, 32> mUnk8ee9a7;
    // NOLINTEND

public:
    // prevent constructor by default
    FogCommandSettings& operator=(FogCommandSettings const&);
    FogCommandSettings(FogCommandSettings const&);
    FogCommandSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FogCommandSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
