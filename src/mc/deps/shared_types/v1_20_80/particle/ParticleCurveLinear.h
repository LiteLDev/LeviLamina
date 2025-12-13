#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveSimpleBase.h"

namespace SharedTypes::v1_20_80 {

struct ParticleCurveLinear : public ::SharedTypes::v1_20_80::ParticleCurveSimpleBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual uint64 _getMinCurveNodesAllowed() /*override*/;

    // vIndex: 2
    virtual uint64 _getMaxCurveNodesAllowed() /*override*/;

    // vIndex: 0
    virtual ~ParticleCurveLinear() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $_getMinCurveNodesAllowed();

    MCNAPI uint64 $_getMaxCurveNodesAllowed();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
