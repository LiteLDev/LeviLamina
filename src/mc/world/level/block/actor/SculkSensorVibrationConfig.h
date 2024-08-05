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
    onSignalReceive(class BlockSource& region, class BlockPos const&, class GameEvent const&, class Actor* source, float distance, uint, class Actor*);

    // vIndex: 2
    virtual bool isValidVibration(class GameEvent const&);

    // vIndex: 3
    virtual bool shouldListen(class BlockSource& region, class GameEvent const&, struct GameEventContext const&);

    // vIndex: 4
    virtual void onSerializableDataChanged(class BlockSource&);

    // vIndex: 5
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;

    MCAPI explicit SculkSensorVibrationConfig(class BlockPos const& pos);

    // NOLINTEND
};
