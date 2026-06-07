#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"

struct FeatureRegistryPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FeatureRegistry::FeatureBinaryJsonFormat>> mFeaturesData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FeatureRegistryPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
