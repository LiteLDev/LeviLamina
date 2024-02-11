#pragma once

#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"

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
