#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeakStorageFeature {
public:
    // WeakStorageFeature inner types define
    enum class EmptyInit {};

public:
    // prevent constructor by default
    WeakStorageFeature& operator=(WeakStorageFeature const&);
    WeakStorageFeature(WeakStorageFeature const&);
    WeakStorageFeature();

    // protected:
    // NOLINTBEGIN
    // symbol: ??0WeakStorageFeature@@IEAA@$$QEAV0@@Z
    MCAPI WeakStorageFeature(class WeakStorageFeature&&);

    // symbol: ??0WeakStorageFeature@@IEAA@AEBVOwnerStorageFeature@@@Z
    MCAPI explicit WeakStorageFeature(class OwnerStorageFeature const&);

    // symbol: ??0WeakStorageFeature@@IEAA@W4EmptyInit@0@@Z
    MCAPI explicit WeakStorageFeature(::WeakStorageFeature::EmptyInit);

    // symbol: ?_isSet@WeakStorageFeature@@IEBA_NXZ
    MCAPI bool _isSet() const;

    // symbol: ??4WeakStorageFeature@@IEAAAEAV0@$$QEAV0@@Z
    MCAPI class WeakStorageFeature& operator=(class WeakStorageFeature&&);

    // NOLINTEND
};
