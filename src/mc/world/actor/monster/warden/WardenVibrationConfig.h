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

class WardenVibrationConfig : public ::VibrationListenerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc166f7;
    ::ll::UntypedStorage<2, 2>  mUnk95b4ad;
    ::ll::UntypedStorage<8, 16> mUnka9290d;
    ::ll::UntypedStorage<8, 8>  mUnkc03bd6;
    ::ll::UntypedStorage<4, 4>  mUnk4fdb5c;
    ::ll::UntypedStorage<4, 4>  mUnk98d6d3;
    // NOLINTEND

public:
    // prevent constructor by default
    WardenVibrationConfig& operator=(WardenVibrationConfig const&);
    WardenVibrationConfig(WardenVibrationConfig const&);
    WardenVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void onSignalReceive(
        ::BlockSource&    region,
        ::BlockPos const& vibrationSourcePos,
        ::GameEvent const&,
        ::Actor* vibrationSource,
        float,
        uint,
        ::Actor* projectileOwner
    ) /*override*/;

    // vIndex: 2
    virtual bool isValidVibration(::GameEvent const& gameEvent) /*override*/;

    // vIndex: 3
    virtual bool
    shouldListen(::BlockSource& region, ::GameEvent const&, ::GameEventContext const& gameEventContext) /*override*/;

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
    MCNAPI void $onSignalReceive(
        ::BlockSource&    region,
        ::BlockPos const& vibrationSourcePos,
        ::GameEvent const&,
        ::Actor* vibrationSource,
        float,
        uint,
        ::Actor* projectileOwner
    );

    MCNAPI bool $isValidVibration(::GameEvent const& gameEvent);

    MCNAPI bool $shouldListen(::BlockSource& region, ::GameEvent const&, ::GameEventContext const& gameEventContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
