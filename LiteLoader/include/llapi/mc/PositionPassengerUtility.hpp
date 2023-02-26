/**
 * @file  PositionPassengerUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PositionPassengerUtility.
 *
 */
class PositionPassengerUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONPASSENGERUTILITY
public:
    class PositionPassengerUtility& operator=(class PositionPassengerUtility const &) = delete;
    PositionPassengerUtility(class PositionPassengerUtility const &) = delete;
    PositionPassengerUtility() = delete;
#endif

public:
    /**
     * @symbol  ?getNewPassengerPosition\@PositionPassengerUtility\@\@SA?AVVec3\@\@VSynchedActorDataReader\@\@AEBV2\@AEBVVec2\@\@\@Z
     */
    MCAPI static class Vec3 getNewPassengerPosition(class SynchedActorDataReader, class Vec3 const &, class Vec2 const &);

};