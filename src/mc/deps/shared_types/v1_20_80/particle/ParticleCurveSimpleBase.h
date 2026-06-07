#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
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
    ::ll::TypedStorage<8, 48, ::HashedString>                                       mCurveType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ExpressionNode>> mCurveNodes;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                mInputExpr;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                mHorizontalRange;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleCurveSimpleBase& operator=(ParticleCurveSimpleBase const&);
    ParticleCurveSimpleBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint64 _getMinCurveNodesAllowed();

    virtual uint64 _getMaxCurveNodesAllowed();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleCurveSimpleBase(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurveSimpleBase const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD uint64 $_getMinCurveNodesAllowed();

    MCFOLD uint64 $_getMaxCurveNodesAllowed();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
