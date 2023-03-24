/**
 * @file  GetAttachPositionUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GetAttachPositionUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETATTACHPOSITIONUTILITY
public:
    class GetAttachPositionUtility& operator=(class GetAttachPositionUtility const &) = delete;
    GetAttachPositionUtility(class GetAttachPositionUtility const &) = delete;
    GetAttachPositionUtility() = delete;
#endif

public:
    /**
     * @symbol ?getAttachPos\@GetAttachPositionUtility\@\@SA?AVVec3\@\@AEBVStrictEntityContext\@\@AEBUGetAttachPositionViews\@\@W4ActorLocation\@\@\@Z
     */
    MCAPI static class Vec3 getAttachPos(class StrictEntityContext const &, struct GetAttachPositionViews const &, enum class ActorLocation);
    /**
     * @symbol ?getAttachPos\@GetAttachPositionUtility\@\@SA?AV?$optional\@VVec3\@\@\@std\@\@AEBVStrictEntityContext\@\@AEBUGetAttachPositionViews\@\@W4ActorLocation\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static class std::optional<class Vec3> getAttachPos(class StrictEntityContext const &, struct GetAttachPositionViews const &, enum class ActorLocation, class Vec3 const &);

};
