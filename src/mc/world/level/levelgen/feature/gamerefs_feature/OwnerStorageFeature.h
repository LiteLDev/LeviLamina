#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"

class OwnerStorageFeature {
public:
    std::optional<std::reference_wrapper<FeatureRegistry>> mRegistry; // this+0x0
    uint64                                                 mIndex;    // this+0x10

public:
    // prevent constructor by default
    OwnerStorageFeature& operator=(OwnerStorageFeature const&);
    OwnerStorageFeature(OwnerStorageFeature const&);
    OwnerStorageFeature();

    // protected:
    // NOLINTBEGIN
    // symbol: ??1OwnerStorageFeature@@IEAA@XZ
    MCAPI ~OwnerStorageFeature();

    // NOLINTEND
};
