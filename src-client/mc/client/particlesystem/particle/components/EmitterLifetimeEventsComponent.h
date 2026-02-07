#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterLifetimeComponentBase.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct DistanceEvents; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class EmitterLifetimeEventsComponent : public ::ParticleSystem::EmitterLifetimeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mCreationEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mExpirationEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::chrono::nanoseconds, ::std::vector<::HashedString>>>>
                                                                                                mTimelineEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::std::vector<::HashedString>>>> mTravelDistanceEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::DistanceEvents>> mLoopingTravelDistanceEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void handleCreation(::ParticleSystem::ComponentAccessParticleEmitter& emitter) /*override*/;

    virtual void handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter& emitter) /*override*/;

    virtual void handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    ) /*override*/;

    virtual void handleTravelDistanceEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        float                                             lastDistance,
        float                                             distance
    ) /*override*/;

    virtual ~EmitterLifetimeEventsComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _parseEvent(::ConstDeserializeDataParams const& deserializeDataParams, ::std::vector<::HashedString>& eventList);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void $handleCreation(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    MCAPI void $handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    MCAPI void $handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    );

    MCAPI void $handleTravelDistanceEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        float                                             lastDistance,
        float                                             distance
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem
