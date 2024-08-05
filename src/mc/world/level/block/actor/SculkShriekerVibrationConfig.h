#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class SculkShriekerVibrationConfig : public ::VibrationListenerConfig {
public:
    // prevent constructor by default
    SculkShriekerVibrationConfig& operator=(SculkShriekerVibrationConfig const&);
    SculkShriekerVibrationConfig(SculkShriekerVibrationConfig const&);
    SculkShriekerVibrationConfig();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkShriekerVibrationConfig() = default;

    // vIndex: 1
    virtual void
    onSignalReceive(class BlockSource& region, class BlockPos const&, class GameEvent const&, class Actor* source, float, uint, class Actor*);

    // vIndex: 2
    virtual bool isValidVibration(class GameEvent const&);

    // vIndex: 3
    virtual bool shouldListen(class BlockSource& region, class GameEvent const&, struct GameEventContext const&);

    // vIndex: 4
    virtual void onSerializableDataChanged(class BlockSource&);

    // vIndex: 5
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;

    // NOLINTEND
};
