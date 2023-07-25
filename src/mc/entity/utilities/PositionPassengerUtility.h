#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PositionPassengerUtility {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONPASSENGERUTILITY
public:
    PositionPassengerUtility& operator=(PositionPassengerUtility const&) = delete;
    PositionPassengerUtility(PositionPassengerUtility const&)            = delete;
    PositionPassengerUtility()                                           = delete;
#endif

public:
    /**
     * @symbol
     * ?getNewPassengerPosition\@PositionPassengerUtility\@\@SA?AVVec3\@\@VSynchedActorDataReader\@\@AEBV2\@AEBVVec2\@\@\@Z
     */
    MCAPI static class Vec3 getNewPassengerPosition(class SynchedActorDataReader, class Vec3 const&, class Vec2 const&);
};
