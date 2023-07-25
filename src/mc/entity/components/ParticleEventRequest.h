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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLEEVENTREQUEST_BREAKINGITEMDATA
    public:
        BreakingItemData& operator=(BreakingItemData const&) = delete;
        BreakingItemData(BreakingItemData const&)            = delete;
        BreakingItemData()                                   = delete;
#endif

    public:
        /**
         * @symbol ??1BreakingItemData\@ParticleEventRequest\@\@QEAA\@XZ
         */
        MCAPI ~BreakingItemData();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLEEVENTREQUEST
public:
    ParticleEventRequest& operator=(ParticleEventRequest const&) = delete;
    ParticleEventRequest(ParticleEventRequest const&)            = delete;
    ParticleEventRequest()                                       = delete;
#endif

public:
};
