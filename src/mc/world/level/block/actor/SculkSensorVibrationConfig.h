#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class SculkSensorVibrationConfig : public ::VibrationListenerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkSensorVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onSignalReceive(
        ::BlockSource&     region,
        ::BlockPos const&  gameEvent,
        ::GameEvent const& source,
        ::Actor*           distance,
        float              listenerRange,
        uint,
        ::Actor*
    ) /*override*/;

    virtual bool shouldListen(
        ::BlockSource&            region,
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext
    ) /*override*/;

    virtual void onSerializableDataChanged(::BlockSource& region) /*override*/;

    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SculkSensorVibrationConfig(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onSignalReceive(
        ::BlockSource&     region,
        ::BlockPos const&  gameEvent,
        ::GameEvent const& source,
        ::Actor*           distance,
        float              listenerRange,
        uint,
        ::Actor*
    );

    MCAPI bool
    $shouldListen(::BlockSource& region, ::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext);

    MCFOLD void $onSerializableDataChanged(::BlockSource& region);

    MCFOLD bool $canReceiveOnlyIfAdjacentChunksAreTicking() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
