#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/DirectionSettings.h"
#include "mc/client/particlesystem/particle/components/ParticleAppearanceComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
class Vec3;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
// clang-format on

namespace ParticleSystem {

class ParticleAppearanceBillboardBaseComponent : public ::ParticleSystem::ParticleAppearanceComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ParticleSystem::DirectionSettings> mDirection;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setInitialState(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams,
        ::Vec3 const&                                     spawnDirection
    ) /*override*/;

    virtual ~ParticleAppearanceBillboardBaseComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _parseDirection(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void _updateDirection(::ParticleSystem::CommonParticle& particle, ::RenderParams& renderParams);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setInitialState(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams,
        ::Vec3 const&                                     spawnDirection
    );
    // NOLINTEND
};

} // namespace ParticleSystem
