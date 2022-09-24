/**
 * @file  GetAttachPosSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GetAttachPosSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETATTACHPOSSYSTEM
public:
    class GetAttachPosSystem& operator=(class GetAttachPosSystem const &) = delete;
    GetAttachPosSystem(class GetAttachPosSystem const &) = delete;
    GetAttachPosSystem() = delete;
#endif

public:
    /**
     * @symbol ?getAttachPos@GetAttachPosSystem@@SA?AV?$optional@VVec3@@@std@@AEBVStrictEntityContext@@W4ActorLocation@@AEBVVec3@@AEBUAABBShapeComponent@@AEBUActorHeadRotationComponent@@AEBUActorRotationComponent@@AEBUOffsetsComponent@@AEBUStateVectorComponent@@AEBUSynchedActorDataComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@@Z
     */
    MCAPI static class std::optional<class Vec3> getAttachPos(class StrictEntityContext const &, enum ActorLocation, class Vec3 const &, struct AABBShapeComponent const &, struct ActorHeadRotationComponent const &, struct ActorRotationComponent const &, struct OffsetsComponent const &, struct StateVectorComponent const &, struct SynchedActorDataComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>>);
    /**
     * @symbol ?getBaseAttachPoint@GetAttachPosSystem@@SA?AV?$optional@VVec3@@@std@@AEBUAABBShapeComponent@@AEBUActorHeadRotationComponent@@AEBUActorRotationComponent@@AEBUOffsetsComponent@@AEBUStateVectorComponent@@AEAUGetAttachPosRequestData@@@Z
     */
    MCAPI static class std::optional<class Vec3> getBaseAttachPoint(struct AABBShapeComponent const &, struct ActorHeadRotationComponent const &, struct ActorRotationComponent const &, struct OffsetsComponent const &, struct StateVectorComponent const &, struct GetAttachPosRequestData &);

};