#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/serialization/BiomeScatterParamData.h"

struct BiomeConsolidatedFeatureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::BiomeScatterParamData> mScatter;
    ::ll::TypedStorage<2, 2, ushort>                   mFeature;
    ::ll::TypedStorage<2, 2, ushort>                   mIdentifier;
    ::ll::TypedStorage<2, 2, ushort>                   mPass;
    ::ll::TypedStorage<1, 1, bool>                     mCanUseInternalFeature;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeConsolidatedFeatureData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
