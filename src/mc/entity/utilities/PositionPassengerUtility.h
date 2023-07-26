#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PositionPassengerUtility {

public:
    // prevent constructor by default
    PositionPassengerUtility& operator=(PositionPassengerUtility const&) = delete;
    PositionPassengerUtility(PositionPassengerUtility const&)            = delete;
    PositionPassengerUtility()                                           = delete;

public:
    /**
     * @symbol
     * ?getNewPassengerPosition\@PositionPassengerUtility\@\@SA?AVVec3\@\@VSynchedActorDataReader\@\@AEBV2\@AEBVVec2\@\@\@Z
     */
    MCAPI static class Vec3
    getNewPassengerPosition(class SynchedActorDataReader, class Vec3 const&, class Vec2 const&); // NOLINT
};
