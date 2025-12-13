#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 24> mUnk24b204;
    // NOLINTEND

public:
    // prevent constructor by default
    AllayVibrationConfig& operator=(AllayVibrationConfig const&);
    AllayVibrationConfig(AllayVibrationConfig const&);
    AllayVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onSignalReceive(
        ::BlockSource&     region,
        ::BlockPos const&  vibrationSourcePos,
        ::GameEvent const& gameEvent,
        ::Actor*,
        float,
        uint,
        ::Actor*
    ) /*override*/;

    virtual bool isValidVibration(::GameEvent const& gameEvent) /*override*/;

    virtual bool shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&) /*override*/;

    virtual ~AllayVibrationConfig() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllayVibrationConfig(::Actor& actor, ushort signalThrottlingTicks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor& actor, ushort signalThrottlingTicks);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onSignalReceive(
        ::BlockSource&     region,
        ::BlockPos const&  vibrationSourcePos,
        ::GameEvent const& gameEvent,
        ::Actor*,
        float,
        uint,
        ::Actor*
    );

    MCNAPI bool $isValidVibration(::GameEvent const& gameEvent);

    MCNAPI bool $shouldListen(::BlockSource&, ::GameEvent const&, ::GameEventContext const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
