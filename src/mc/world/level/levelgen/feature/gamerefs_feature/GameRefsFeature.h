#pragma once

#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

#include "mc/world/level/levelgen/feature/gamerefs_feature/OwnerStorageFeature.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/StackResultStorageFeature.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/WeakStorageFeature.h"

class IFeature;

template <>
struct GameRefs<IFeature> {
    using OwnerStorage       = OwnerStorageFeature;
    using StackResultStorage = StackResultStorageFeature;
    using WeakStorage        = WeakStorageFeature;
    using StackRef           = IFeature;
};
