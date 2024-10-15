#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/StackResultStorageFeature.h"
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"

class WeakStorageFeature {
public:
    std::optional<std::reference_wrapper<FeatureRegistry>> mRegistry; // this+0x0
    uint64                                                 mIndex;    // this+0x10

    template <class T = IFeature>
    [[nodiscard]] optional_ref<T> tryUnwrap() const {
        return StackResultStorageFeature{*this}.tryUnwrap<T>();
    }

public:
    // prevent constructor by default
    WeakStorageFeature& operator=(WeakStorageFeature const&);
    WeakStorageFeature(WeakStorageFeature const&);

    // protected:
    // NOLINTBEGIN
    MCAPI WeakStorageFeature();

    MCAPI WeakStorageFeature(class WeakStorageFeature&& other);

    MCAPI class WeakStorageFeature& operator=(class WeakStorageFeature&& other);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class WeakStorageFeature&& other);

    MCAPI void* ctor$();

    // NOLINTEND
};
