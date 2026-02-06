#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterInitialComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class EmitterLocalSpaceComponent : public ::ParticleSystem::EmitterInitialComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mUseActorPosition;
    ::ll::TypedStorage<1, 1, bool> mUseActorRotation;
    ::ll::TypedStorage<1, 1, bool> mUseEmitterVelocity;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void
    setupInitial(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams) /*override*/;

    virtual ~EmitterLocalSpaceComponent() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void $setupInitial(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
