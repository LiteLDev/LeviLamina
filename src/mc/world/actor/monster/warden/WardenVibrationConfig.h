#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/events/gameevents/VibrationListenerConfig.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class WardenVibrationConfig : public ::VibrationListenerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>         mActor;
    ::ll::TypedStorage<2, 2, ushort>                   mSignalThrottlingTicks;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mLastSignalReceivedTick;
    ::ll::TypedStorage<8, 8, ::Tick>                   mLastProjectileTick;
    ::ll::TypedStorage<4, 4, int>                      mProjectileSuspiciousIntervalTicks;
    ::ll::TypedStorage<4, 4, float>                    mTargetProjectileOwnerRange;
    // NOLINTEND

public:
    // prevent constructor by default
    WardenVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onSignalReceive(
        ::BlockSource&     region,
        ::BlockPos const&  vibrationSourcePos,
        ::GameEvent const& vibrationSource,
        ::Actor*           projectileOwner,
        float,
        uint,
        ::Actor*
    ) /*override*/;

    virtual bool isValidVibration(::GameEvent const& gameEvent) /*override*/;

    virtual bool
    shouldListen(::BlockSource& region, ::GameEvent const& gameEventContext, ::GameEventContext const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WardenVibrationConfig(::Actor& actor, ushort signalThrottlingTicks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor& actor, ushort signalThrottlingTicks);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onSignalReceive(
        ::BlockSource&     region,
        ::BlockPos const&  vibrationSourcePos,
        ::GameEvent const& vibrationSource,
        ::Actor*           projectileOwner,
        float,
        uint,
        ::Actor*
    );

    MCAPI bool $isValidVibration(::GameEvent const& gameEvent);

    MCAPI bool $shouldListen(::BlockSource& region, ::GameEvent const& gameEventContext, ::GameEventContext const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
