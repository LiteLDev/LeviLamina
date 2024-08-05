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
    MCAPI explicit StackResultStorageFeature(class WeakStorageFeature const& weakStorage);

    MCAPI class IFeature& _getStackRef() const;

    MCAPI bool _hasValue() const;

    // NOLINTEND
};
