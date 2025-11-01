#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleCurveSimpleBase : public ::SharedTypes::v1_20_80::ParticleCurveBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkedcbc2;
    ::ll::UntypedStorage<8, 24> mUnkc945f6;
    ::ll::UntypedStorage<8, 48> mUnkafc569;
    ::ll::UntypedStorage<8, 48> mUnk69f702;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleCurveSimpleBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual uint64 _getMinCurveNodesAllowed();

    // vIndex: 2
    virtual uint64 _getMaxCurveNodesAllowed();

    // vIndex: 0
    virtual ~ParticleCurveSimpleBase() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleCurveSimpleBase(::SharedTypes::v1_20_80::ParticleCurveSimpleBase&&);

    MCNAPI ParticleCurveSimpleBase(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleCurveSimpleBase& operator=(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleCurveSimpleBase& operator=(::SharedTypes::v1_20_80::ParticleCurveSimpleBase&&);

    MCNAPI void validateNodeListSize();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurveSimpleBase&&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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

}
