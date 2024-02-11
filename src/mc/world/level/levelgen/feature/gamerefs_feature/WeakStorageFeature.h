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
    // symbol: ??0WeakStorageFeature@@IEAA@XZ
    MCAPI WeakStorageFeature();

    // symbol: ??0WeakStorageFeature@@IEAA@$$QEAV0@@Z
    MCAPI WeakStorageFeature(class WeakStorageFeature&& other);

    // symbol: ?_isSet@WeakStorageFeature@@IEBA_NXZ
    MCAPI bool _isSet() const;

    // symbol: ??4WeakStorageFeature@@IEAAAEAV0@$$QEAV0@@Z
    MCAPI class WeakStorageFeature& operator=(class WeakStorageFeature&& other);

    // NOLINTEND
};
