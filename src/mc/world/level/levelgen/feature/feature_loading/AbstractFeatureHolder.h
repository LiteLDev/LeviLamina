#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureLoading {

struct AbstractFeatureHolder {
public:
    // prevent constructor by default
    AbstractFeatureHolder& operator=(AbstractFeatureHolder const&);
    AbstractFeatureHolder(AbstractFeatureHolder const&);
    AbstractFeatureHolder();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AbstractFeatureHolder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace FeatureLoading
