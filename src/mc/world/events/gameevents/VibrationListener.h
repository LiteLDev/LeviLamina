#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/GameEventListener.h"

// auto generated forward declare list
// clang-format off
namespace GameEvents { class PositionSource; }
// clang-format on

class VibrationListener : public ::GameEventListener {
public:
    // VibrationListener inner types define
    enum class OwnerType {};

public:
    // prevent constructor by default
    VibrationListener& operator=(VibrationListener const&);
    VibrationListener(VibrationListener const&);
    VibrationListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VibrationListener() = default;

    // vIndex: 1
    virtual void handleGameEvent(
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext,
        class BlockSource&             region
    );

    // vIndex: 2
    virtual class GameEvents::PositionSource const& getPositionSource() const;

    // vIndex: 3
    virtual uint getRange() const;

    // vIndex: 4
    virtual ::GameEventListener::DeliveryMode getDeliveryMode() const;

    MCAPI VibrationListener(
        std::unique_ptr<class VibrationListenerConfig>&& config,
        class GameEvents::PositionSource                 positionSource,
        uint                                             range,
        ::VibrationListener::OwnerType                   ownerType
    );

    MCAPI class GameEvent const& getLatestReceivedVibration() const;

    MCAPI void load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void save(class CompoundTag& tag) const;

    MCAPI void tick(class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _requestVibrationParticle(class BlockSource& region, class BlockPos const& origin, float timeToLive);

    MCAPI bool _tryAdvanceInFlightVibration(class BlockSource& region);

    MCAPI void _trySendSneakCloseToSculkSensorEventPacket(
        class BlockSource&             region,
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext,
        class Vec3 const&              sensorPos
    );

    MCAPI static bool
    _isVibrationOccluded(class BlockSource& region, class Vec3 const& origin, class Vec3 const& targetPos);

    MCAPI static bool _shouldIgnoreVibration(
        class BlockSource&             region,
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        std::unique_ptr<class VibrationListenerConfig>&& config,
        class GameEvents::PositionSource                 positionSource,
        uint                                             range,
        ::VibrationListener::OwnerType                   ownerType
    );

    MCAPI ::GameEventListener::DeliveryMode getDeliveryMode$() const;

    MCAPI class GameEvents::PositionSource const& getPositionSource$() const;

    MCAPI uint getRange$() const;

    MCAPI void handleGameEvent$(
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext,
        class BlockSource&             region
    );

    // NOLINTEND
};
