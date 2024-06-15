#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeakStorageFeature {
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

    // symbol: ??4WeakStorageFeature@@IEAAAEAV0@$$QEAV0@@Z
    MCAPI class WeakStorageFeature& operator=(class WeakStorageFeature&& other);

    // NOLINTEND
};
