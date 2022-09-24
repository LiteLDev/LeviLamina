/**
 * @file  ActorAnimationController.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationController.
 *
 */
class ActorAnimationController {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLER
public:
    class ActorAnimationController& operator=(class ActorAnimationController const &) = delete;
    ActorAnimationController(class ActorAnimationController const &) = delete;
    ActorAnimationController() = delete;
#endif

public:
    /**
     * @hash   988666820
     * @symbol ??0ActorAnimationController@@QEAA@AEBVHashedString@@AEBVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI ActorAnimationController(class HashedString const &, class SemVersion const &, std::string const &);
    /**
     * @hash   -1027369410
     * @symbol ?addState@ActorAnimationController@@QEAAAEAV?$shared_ptr@VActorAnimationControllerState@@@std@@AEBVHashedString@@@Z
     */
    MCAPI class std::shared_ptr<class ActorAnimationControllerState> & addState(class HashedString const &);
    /**
     * @hash   785921957
     * @symbol ?findStateIndex@ActorAnimationController@@QEBA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N_K@Z
     */
    MCAPI unsigned __int64 findStateIndex(std::string const &, bool, unsigned __int64) const;
    /**
     * @hash   717033827
     * @symbol ?resolveTransitionStateIndices@ActorAnimationController@@QEAAXXZ
     */
    MCAPI void resolveTransitionStateIndices();

};