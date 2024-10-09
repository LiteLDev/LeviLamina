#pragma once

#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

#include "mc/world/level/levelgen/feature/gamerefs_feature/OwnerStorageFeature.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/StackResultStorageFeature.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/WeakStorageFeature.h"

class IFeature;

template <>
class OwnerPtr<IFeature> : public OwnerStorageFeature {
    using OwnerStorageFeature::OwnerStorageFeature;
};
template <>
class StackRefResult<IFeature> : public StackResultStorageFeature {
    using StackResultStorageFeature::StackResultStorageFeature;
};
template <>
class WeakRef<IFeature> : public WeakStorageFeature {
    using WeakStorageFeature::WeakStorageFeature;
};
