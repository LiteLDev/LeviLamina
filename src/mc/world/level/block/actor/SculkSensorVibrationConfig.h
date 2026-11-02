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
    // virtual functions
    // NOLINTBEGIN
    virtual void onSignalReceive(
        ::BlockSource& region,
        ::BlockPos const&,
        ::GameEvent const& gameEvent,
        ::Actor*           source,
        float              distance,
        uint               listenerRange,
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onSignalReceive(
        ::BlockSource& region,
        ::BlockPos const&,
        ::GameEvent const& gameEvent,
        ::Actor*           source,
        float              distance,
        uint               listenerRange,
        ::Actor*
    );

    MCNAPI bool
    $shouldListen(::BlockSource& region, ::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext);

    MCNAPI void $onSerializableDataChanged(::BlockSource& region);

    MCNAPI bool $canReceiveOnlyIfAdjacentChunksAreTicking() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
