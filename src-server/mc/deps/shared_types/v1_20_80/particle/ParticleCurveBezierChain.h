#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleCurveBezierChain : public ::SharedTypes::v1_20_80::ParticleCurveBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7cd049;
    ::ll::UntypedStorage<8, 24> mUnk307daf;
    ::ll::UntypedStorage<8, 48> mUnkd7d9ea;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleCurveBezierChain(ParticleCurveBezierChain const&);
    ParticleCurveBezierChain();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleCurveBezierChain() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleCurveBezierChain(::SharedTypes::v1_20_80::ParticleCurveBezierChain&&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleCurveBezierChain& operator=(::SharedTypes::v1_20_80::ParticleCurveBezierChain const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleCurveBezierChain& operator=(::SharedTypes::v1_20_80::ParticleCurveBezierChain&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurveBezierChain&&);
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
