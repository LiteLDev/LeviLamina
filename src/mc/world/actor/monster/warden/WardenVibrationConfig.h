#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

class WardenVibrationConfig : public ::VibrationListenerConfig {
public:
    // prevent constructor by default
    WardenVibrationConfig& operator=(WardenVibrationConfig const&);
    WardenVibrationConfig(WardenVibrationConfig const&);
    WardenVibrationConfig();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WardenVibrationConfig() = default;

    // vIndex: 1
    virtual void
    onSignalReceive(class BlockSource& region, class BlockPos const&, class GameEvent const&, class Actor*, float, uint, class Actor*);

    // vIndex: 2
    virtual bool isValidVibration(class GameEvent const&);

    // vIndex: 3
    virtual bool shouldListen(class BlockSource& region, class GameEvent const&, struct GameEventContext const&);

    // vIndex: 4
    virtual void onSerializableDataChanged(class BlockSource&);

    // vIndex: 5
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;

    MCAPI WardenVibrationConfig(class Actor& actor, ushort);

    // NOLINTEND
};
