#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerSleepManager {
public:
    // prevent constructor by default
    PlayerSleepManager& operator=(PlayerSleepManager const&);
    PlayerSleepManager(PlayerSleepManager const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerSleepManager();

    // vIndex: 1
    virtual void updateSleepingPlayerList();

    MCAPI PlayerSleepManager();

    MCAPI struct PlayerSleepStatus const& getPlayerSleepStatus() const;

    MCAPI void setSleepStatus(struct PlayerSleepStatus const&);

    // NOLINTEND
};
