#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerUpdateInteractionEvent {

public:
    // prevent constructor by default
    PlayerUpdateInteractionEvent& operator=(PlayerUpdateInteractionEvent const&) = delete;
    PlayerUpdateInteractionEvent(PlayerUpdateInteractionEvent const&)            = delete;
    PlayerUpdateInteractionEvent()                                               = delete;

public:
    /**
     * @symbol ??1PlayerUpdateInteractionEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerUpdateInteractionEvent(); // NOLINT
};
