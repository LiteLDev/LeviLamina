#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogCommandSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk97d3d7;
    ::ll::UntypedStorage<8, 32> mUnk690a7f;
    // NOLINTEND

public:
    // prevent constructor by default
    FogCommandSettings& operator=(FogCommandSettings const&);
    FogCommandSettings(FogCommandSettings const&);
    FogCommandSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FogCommandSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
