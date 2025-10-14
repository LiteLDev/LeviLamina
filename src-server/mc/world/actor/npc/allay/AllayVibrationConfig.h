#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class AllayVibrationConfig : public ::VibrationListenerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    AllayVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void onSignalReceive(
        ::BlockSource&     region,
        ::BlockPos const&  vibrationSourcePos,
        ::GameEvent const& gameEvent,
        ::Actor*,
        float,
        uint,
        ::Actor*
    ) /*override*/;

    // vIndex: 2
    virtual bool isValidVibration(::GameEvent const& gameEvent) /*override*/;

    // vIndex: 3
    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&) /*override*/;

    // vIndex: 0
    virtual ~AllayVibrationConfig() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AllayVibrationConfig(::Actor& actor, ushort signalThrottlingTicks);
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
        ::GameEvent const& gameEvent,
        ::Actor*,
        float,
        uint,
        ::Actor*
    );

    MCAPI bool $isValidVibration(::GameEvent const& gameEvent);

    MCFOLD bool $shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
