#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundEventRequestQueueComponent {
public:
    // prevent constructor by default
    SoundEventRequestQueueComponent& operator=(SoundEventRequestQueueComponent const&);
    SoundEventRequestQueueComponent(SoundEventRequestQueueComponent const&);
    SoundEventRequestQueueComponent();

public:
    // NOLINTBEGIN
    MCAPI SoundEventRequestQueueComponent(struct SoundEventRequestQueueComponent&&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
