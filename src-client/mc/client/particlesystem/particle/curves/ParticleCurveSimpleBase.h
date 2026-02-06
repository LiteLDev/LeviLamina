#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveBase.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct ConstDeserializeDataParams;
// clang-format on

namespace ParticleSystem {

class ParticleCurveSimpleBase : public ::ParticleSystem::ParticleCurveBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mCurveNodes;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                mInputExpr;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                mHorizontalRange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleCurveSimpleBase() /*override*/;

    virtual void parseJson(
        ::ConstDeserializeDataParams const& deserializeDataParams,
        ::HashedString const&               molangVariableName
    ) /*override*/;

    virtual void evaluateCurve(::RenderParams& renderParams) /*override*/;

    virtual uint64 _getMinCurveNodesAllowed() = 0;

    virtual uint64 _getMaxCurveNodesAllowed() = 0;

    virtual float _evaluateCurve(float, ::RenderParams&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $parseJson(::ConstDeserializeDataParams const& deserializeDataParams, ::HashedString const& molangVariableName);

    MCAPI void $evaluateCurve(::RenderParams& renderParams);
    // NOLINTEND
};

} // namespace ParticleSystem
