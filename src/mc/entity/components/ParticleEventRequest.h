#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParticleEventRequest {
public:
    // ParticleEventRequest inner types declare
    // clang-format off
    struct BreakingItemData;
    // clang-format on

    // ParticleEventRequest inner types define
    struct BreakingItemData {
    public:
        // prevent constructor by default
        BreakingItemData& operator=(BreakingItemData const&);
        BreakingItemData(BreakingItemData const&);
        BreakingItemData();

    public:
        // NOLINTBEGIN
        MCAPI ~BreakingItemData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ParticleEventRequest& operator=(ParticleEventRequest const&);
    ParticleEventRequest(ParticleEventRequest const&);
    ParticleEventRequest();
};
