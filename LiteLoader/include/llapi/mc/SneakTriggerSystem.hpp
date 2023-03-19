/**
 * @file  SneakTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SneakTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNEAKTRIGGERSYSTEM
public:
    class SneakTriggerSystem& operator=(class SneakTriggerSystem const &) = delete;
    SneakTriggerSystem(class SneakTriggerSystem const &) = delete;
    SneakTriggerSystem() = delete;
#endif

public:
    /**
     * @symbol ?createTriggerSideBySideSystem\@SneakTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTriggerSideBySideSystem();
    /**
     * @symbol ?createTriggerSystem\@SneakTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createTriggerSystem();
    /**
     * @symbol ?updatePlayerState\@SneakTriggerSystem\@\@SA?AV?$optional\@_N\@std\@\@AEBVGetCollisionShapeInterface\@\@AEBVAABB\@\@AEBVVec2\@\@_N33MPEAUPlayerActionComponent\@\@AEBVIConstBlockSource\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI static class std::optional<bool> updatePlayerState(class GetCollisionShapeInterface const &, class AABB const &, class Vec2 const &, bool, bool, bool, float, struct PlayerActionComponent *, class IConstBlockSource const &, std::vector<class AABB> &);

};
