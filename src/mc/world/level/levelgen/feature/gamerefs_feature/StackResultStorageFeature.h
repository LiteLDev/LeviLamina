#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"

class StackResultStorageFeature {
public:
    std::optional<std::reference_wrapper<FeatureRegistry>> mRegistry; // this+0x0
    uint64                                                 mIndex;    // this+0x10

    template <class T = IFeature>
    [[nodiscard]] optional_ref<T> tryUnwrap() const {
        if (*this) {
            return reinterpret_cast<T*>(mRegistry->get().mFeatureRegistry[mIndex].get());
        }
        return nullptr;
    }

    [[nodiscard]] inline operator bool() const { return mRegistry.has_value(); }

public:
    // prevent constructor by default
    StackResultStorageFeature& operator=(StackResultStorageFeature const&);
    StackResultStorageFeature(StackResultStorageFeature const&);
    StackResultStorageFeature();

    // protected:
    // NOLINTBEGIN
    MCAPI explicit StackResultStorageFeature(class WeakStorageFeature const& weakStorage);

    MCAPI class IFeature& _getStackRef() const;

    MCAPI bool _hasValue() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class WeakStorageFeature const& weakStorage);

    // NOLINTEND
};
