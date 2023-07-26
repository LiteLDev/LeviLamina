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
        BreakingItemData& operator=(BreakingItemData const&) = delete;
        BreakingItemData(BreakingItemData const&)            = delete;
        BreakingItemData()                                   = delete;

    public:
        /**
         * @symbol ??1BreakingItemData\@ParticleEventRequest\@\@QEAA\@XZ
         */
        MCAPI ~BreakingItemData(); // NOLINT
    };

public:
    // prevent constructor by default
    ParticleEventRequest& operator=(ParticleEventRequest const&) = delete;
    ParticleEventRequest(ParticleEventRequest const&)            = delete;
    ParticleEventRequest()                                       = delete;
};
