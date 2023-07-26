#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorCarriedItemChangedEvent {

public:
    // prevent constructor by default
    ActorCarriedItemChangedEvent& operator=(ActorCarriedItemChangedEvent const&) = delete;
    ActorCarriedItemChangedEvent()                                               = delete;

public:
    /**
     * @symbol ??0ActorCarriedItemChangedEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorCarriedItemChangedEvent(struct ActorCarriedItemChangedEvent const&); // NOLINT
    /**
     * @symbol ??1ActorCarriedItemChangedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorCarriedItemChangedEvent(); // NOLINT
};
