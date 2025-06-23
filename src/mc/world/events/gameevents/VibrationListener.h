#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/GameEventListener.h"
#include "mc/world/events/gameevents/PositionSource.h"
#include "mc/world/events/gameevents/VibrationInfo.h"
#include "mc/world/events/gameevents/VibrationSelector.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class GameEvent;
class Vec3;
class VibrationListenerConfig;
struct GameEventContext;
// clang-format on

class VibrationListener : public ::GameEventListener {
public:
    // VibrationListener inner types define
    enum class OwnerType : int {
        SculkSensor   = 0,
        SculkShrieker = 1,
        Warden        = 2,
        Allay         = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::VibrationSelector>                         mVibrationSelector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VibrationListenerConfig>> mConfig;
    ::ll::TypedStorage<8, 24, ::GameEvents::PositionSource>                mPositionSource;
    ::ll::TypedStorage<4, 4, ::VibrationListener::OwnerType>               mOwnerType;
    ::ll::TypedStorage<4, 4, uint>                                         mRange;
    ::ll::TypedStorage<8, 64, ::std::optional<::VibrationInfo>>            mInFlightVibrationInfo;
    ::ll::TypedStorage<4, 4, int>                                          mInFlightVibrationTicks;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::GameEvent const>>  mLatestReceivedVibration;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void handleGameEvent(
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext,
        ::BlockSource&            region
    ) /*override*/;

    // vIndex: 3
    virtual uint getRange() const /*override*/;

    // vIndex: 2
    virtual ::GameEvents::PositionSource const& getPositionSource() const /*override*/;

    // vIndex: 0
    virtual ~VibrationListener() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _areAdjacentChunksTicking(::BlockSource& region) const;

    MCAPI void _requestVibrationParticle(::BlockSource& region, ::BlockPos const& originPos, float timeToLive);

    MCAPI void _tickInternal(::BlockSource& region);

    MCAPI void _trySendSneakCloseToSculkSensorEventPacket(
        ::BlockSource&            region,
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext,
        ::Vec3 const&             sensorPos
    );

    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void save(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _shouldIgnoreVibration(
        ::BlockSource&            region,
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $handleGameEvent(::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext, ::BlockSource& region);

    MCFOLD uint $getRange() const;

    MCFOLD ::GameEvents::PositionSource const& $getPositionSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
