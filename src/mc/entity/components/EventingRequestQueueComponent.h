#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EventingRequestQueueComponent {
public:
    // prevent constructor by default
    EventingRequestQueueComponent& operator=(EventingRequestQueueComponent const&);
    EventingRequestQueueComponent(EventingRequestQueueComponent const&);
    EventingRequestQueueComponent();

public:
    // NOLINTBEGIN
    MCAPI EventingRequestQueueComponent(struct EventingRequestQueueComponent&&);

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
