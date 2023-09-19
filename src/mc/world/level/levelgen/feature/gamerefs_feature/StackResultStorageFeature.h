#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StackResultStorageFeature {
public:
    // prevent constructor by default
    StackResultStorageFeature& operator=(StackResultStorageFeature const&);
    StackResultStorageFeature(StackResultStorageFeature const&);
    StackResultStorageFeature();

    // protected:
    // NOLINTBEGIN
    // symbol: ??0StackResultStorageFeature@@IEAA@AEBVWeakStorageFeature@@@Z
    MCAPI explicit StackResultStorageFeature(class WeakStorageFeature const&);

    // symbol: ?_getStackRef@StackResultStorageFeature@@IEBAAEAVIFeature@@XZ
    MCAPI class IFeature& _getStackRef() const;

    // symbol: ?_hasValue@StackResultStorageFeature@@IEBA_NXZ
    MCAPI bool _hasValue() const;

    // NOLINTEND
};
