#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ParticleEventRequest;
// clang-format on

struct ParticleEventRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::ParticleEventRequest, ::std::deque<::ParticleEventRequest>>> mRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventRequestQueueComponent& operator=(ParticleEventRequestQueueComponent const&);
    ParticleEventRequestQueueComponent(ParticleEventRequestQueueComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ParticleEventRequestQueueComponent& operator=(::ParticleEventRequestQueueComponent&&);
    // NOLINTEND
};
