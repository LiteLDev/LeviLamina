#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeakStorageFeature {
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
