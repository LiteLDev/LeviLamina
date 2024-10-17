#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class SculkSensorVibrationConfig : public ::VibrationListenerConfig {
public:
    // prevent constructor by default
    SculkSensorVibrationConfig& operator=(SculkSensorVibrationConfig const&);
    SculkSensorVibrationConfig(SculkSensorVibrationConfig const&);
    SculkSensorVibrationConfig();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkSensorVibrationConfig() = default;

    // vIndex: 1
    virtual void
    onSignalReceive(class BlockSource& region, class BlockPos const&, class GameEvent const& gameEvent, class Actor* source, float distance, uint listenerRange, class Actor*);

    // vIndex: 2
    virtual bool isValidVibration(class GameEvent const& gameEvent);

    // vIndex: 3
    virtual bool shouldListen(
        class BlockSource&             region,
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext
    );

    // vIndex: 4
    virtual void onSerializableDataChanged(class BlockSource& region);

    // vIndex: 5
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;

    MCAPI explicit SculkSensorVibrationConfig(class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class BlockPos const& pos);

    MCAPI bool canReceiveOnlyIfAdjacentChunksAreTicking$() const;

    MCAPI bool isValidVibration$(class GameEvent const& gameEvent);

    MCAPI void onSerializableDataChanged$(class BlockSource& region);

    MCAPI void
    onSignalReceive$(class BlockSource& region, class BlockPos const&, class GameEvent const& gameEvent, class Actor* source, float distance, uint listenerRange, class Actor*);

    MCAPI bool shouldListen$(
        class BlockSource&             region,
        class GameEvent const&         gameEvent,
        struct GameEventContext const& gameEventContext
    );

    // NOLINTEND
};
