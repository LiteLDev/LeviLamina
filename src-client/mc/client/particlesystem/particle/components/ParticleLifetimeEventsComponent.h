#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/ParticleLifetimeComponentBase.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace Json { class Value; }
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class ParticleLifetimeEventsComponent : public ::ParticleSystem::ParticleLifetimeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mCreationEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mExpirationEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::chrono::nanoseconds, ::std::vector<::HashedString>>>>
        mTimelineEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void handleCreation(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle
    ) /*override*/;

    virtual void handleExpiration(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle
    ) /*override*/;

    virtual void handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    ) /*override*/;

    virtual ~ParticleLifetimeEventsComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _parseEvent(::Json::Value const& event, ::std::vector<::HashedString>& eventList);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void $handleCreation(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle
    );

    MCAPI void $handleExpiration(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle
    );

    MCAPI void $handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
