#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundEventRequestQueueComponent {

public:
    // prevent constructor by default
    SoundEventRequestQueueComponent& operator=(SoundEventRequestQueueComponent const&) = delete;
    SoundEventRequestQueueComponent(SoundEventRequestQueueComponent const&)            = delete;
    SoundEventRequestQueueComponent()                                                  = delete;

public:
    /**
     * @symbol ??0SoundEventRequestQueueComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SoundEventRequestQueueComponent(struct SoundEventRequestQueueComponent&&); // NOLINT
};
