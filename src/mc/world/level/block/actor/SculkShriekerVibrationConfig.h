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

class SculkShriekerVibrationConfig : public ::VibrationListenerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk321d05;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkShriekerVibrationConfig& operator=(SculkShriekerVibrationConfig const&);
    SculkShriekerVibrationConfig(SculkShriekerVibrationConfig const&);
    SculkShriekerVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool
    shouldListen(::BlockSource& region, ::GameEvent const&, ::GameEventContext const& gameEventContext) /*override*/;

    // vIndex: 1
    virtual void onSignalReceive(
        ::BlockSource& region,
        ::BlockPos const&,
        ::GameEvent const&,
        ::Actor* source,
        float,
        uint,
        ::Actor* projectileOwner
    ) /*override*/;

    // vIndex: 4
    virtual void onSerializableDataChanged(::BlockSource& region) /*override*/;

    // vIndex: 5
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const /*override*/;

    // vIndex: 2
    virtual bool isValidVibration(::GameEvent const& gameEvent) /*override*/;

    // vIndex: 0
    virtual ~SculkShriekerVibrationConfig() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $shouldListen(::BlockSource& region, ::GameEvent const&, ::GameEventContext const& gameEventContext);

    MCAPI void $onSignalReceive(
        ::BlockSource& region,
        ::BlockPos const&,
        ::GameEvent const&,
        ::Actor* source,
        float,
        uint,
        ::Actor* projectileOwner
    );

    MCFOLD void $onSerializableDataChanged(::BlockSource& region);

    MCFOLD bool $canReceiveOnlyIfAdjacentChunksAreTicking() const;

    MCAPI bool $isValidVibration(::GameEvent const& gameEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
