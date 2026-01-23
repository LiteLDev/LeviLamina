#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/BezierChainNodeMap.h"
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
    ::ll::TypedStorage<8, 32, ::std::string>                               mCurveType;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_80::BezierChainNodeMap> mNodeMap;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>       mInputExpr;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleCurveBezierChain(ParticleCurveBezierChain const&);
    ParticleCurveBezierChain();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleCurveBezierChain() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleCurveBezierChain(::SharedTypes::v1_20_80::ParticleCurveBezierChain&&);

    MCAPI ::SharedTypes::v1_20_80::ParticleCurveBezierChain&
    operator=(::SharedTypes::v1_20_80::ParticleCurveBezierChain&&);

    MCAPI ::SharedTypes::v1_20_80::ParticleCurveBezierChain&
    operator=(::SharedTypes::v1_20_80::ParticleCurveBezierChain const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurveBezierChain&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
