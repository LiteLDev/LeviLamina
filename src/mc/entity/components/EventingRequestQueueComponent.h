#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EventingRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkedf894;
    // NOLINTEND

public:
    // prevent constructor by default
    EventingRequestQueueComponent& operator=(EventingRequestQueueComponent const&);
    EventingRequestQueueComponent(EventingRequestQueueComponent const&);
    EventingRequestQueueComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::EventingRequestQueueComponent& operator=(::EventingRequestQueueComponent&&);
    // NOLINTEND
};
