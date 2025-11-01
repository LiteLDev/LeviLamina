#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_80 {

struct ParticleCurveBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleCurveBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
