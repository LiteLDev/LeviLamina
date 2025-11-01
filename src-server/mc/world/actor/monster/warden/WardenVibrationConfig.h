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
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
    ::ll::TypedStorage<2, 2, ushort> mSignalThrottlingTicks;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mLastSignalReceivedTick;
    ::ll::TypedStorage<8, 8, ::Tick> mLastProjectileTick;
    ::ll::TypedStorage<4, 4, int> mProjectileSuspiciousIntervalTicks;
    ::ll::TypedStorage<4, 4, float> mTargetProjectileOwnerRange;
    // NOLINTEND

public:
    // prevent constructor by default
    WardenVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void onSignalReceive(::BlockSource& region, ::BlockPos const& vibrationSourcePos, ::GameEvent const&, ::Actor* vibrationSource, float, uint, ::Actor* projectileOwner) /*override*/;

    // vIndex: 2
    virtual bool isValidVibration(::GameEvent const& gameEvent) /*override*/;

    // vIndex: 3
    virtual bool shouldListen(::BlockSource& region, ::GameEvent const&, ::GameEventContext const& gameEventContext) /*override*/;

    // vIndex: 0
    virtual ~WardenVibrationConfig() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WardenVibrationConfig(::Actor& actor, ushort signalThrottlingTicks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor& actor, ushort signalThrottlingTicks);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onSignalReceive(::BlockSource& region, ::BlockPos const& vibrationSourcePos, ::GameEvent const&, ::Actor* vibrationSource, float, uint, ::Actor* projectileOwner);

    MCNAPI bool $isValidVibration(::GameEvent const& gameEvent);

    MCNAPI bool $shouldListen(::BlockSource& region, ::GameEvent const&, ::GameEventContext const& gameEventContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
