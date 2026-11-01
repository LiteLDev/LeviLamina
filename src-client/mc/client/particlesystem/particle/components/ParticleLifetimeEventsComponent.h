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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _parseEvent(::Json::Value const& event, ::std::vector<::HashedString>& eventList);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCNAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCNAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCNAPI void $handleCreation(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle
    );

    MCNAPI void $handleExpiration(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle
    );

    MCNAPI void $handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    );
    // NOLINTEND
};

} // namespace ParticleSystem
