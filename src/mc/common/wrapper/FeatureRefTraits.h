#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/OwnerStorageFeature.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/StackResultStorageFeature.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/WeakStorageFeature.h"

struct FeatureRefTraits {
public:
    using StackRef           = IFeature;
    using OwnerStackRef      = StackRef;
    using WeakStorage        = WeakStorageFeature;
    using OwnerStorage       = OwnerStorageFeature;
    using StackResultStorage = StackResultStorageFeature;
};
