#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FeatureRegistryPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9848e3;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureRegistryPacketPayload& operator=(FeatureRegistryPacketPayload const&);
    FeatureRegistryPacketPayload(FeatureRegistryPacketPayload const&);
    FeatureRegistryPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::FeatureRegistryPacketPayload& operator=(::FeatureRegistryPacketPayload&&);

    MCNAPI ~FeatureRegistryPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
