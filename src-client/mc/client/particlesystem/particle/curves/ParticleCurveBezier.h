#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveSimpleBase.h"
#include "mc/client/particlesystem/particle/curves/ParticleCurveType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
namespace SharedTypes::v1_20_80 { struct ParticleCurveBase; }
// clang-format on

namespace ParticleSystem {

class ParticleCurveBezier : public ::ParticleSystem::ParticleCurveSimpleBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase& data, ::HashedString const& curveName) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase& data) /*override*/;

    virtual uint64 _getMinCurveNodesAllowed() /*override*/;

    virtual uint64 _getMaxCurveNodesAllowed() /*override*/;

    virtual float _evaluateCurve(float t, ::RenderParams& renderParams) /*override*/;

    virtual ::ParticleSystem::ParticleCurveType getCurveType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase& data, ::HashedString const& curveName);

    MCNAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase& data);

    MCNAPI uint64 $_getMinCurveNodesAllowed();

    MCNAPI uint64 $_getMaxCurveNodesAllowed();

    MCNAPI float $_evaluateCurve(float t, ::RenderParams& renderParams);

    MCNAPI ::ParticleSystem::ParticleCurveType $getCurveType() const;
    // NOLINTEND
};

} // namespace ParticleSystem
