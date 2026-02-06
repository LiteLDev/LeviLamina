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

class ParticleCurveCatmullRom : public ::ParticleSystem::ParticleCurveSimpleBase {
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

    virtual ~ParticleCurveCatmullRom() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase& data, ::HashedString const& curveName);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase& data);

    MCFOLD uint64 $_getMinCurveNodesAllowed();

    MCFOLD uint64 $_getMaxCurveNodesAllowed();

    MCAPI float $_evaluateCurve(float t, ::RenderParams& renderParams);

    MCFOLD ::ParticleSystem::ParticleCurveType $getCurveType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
