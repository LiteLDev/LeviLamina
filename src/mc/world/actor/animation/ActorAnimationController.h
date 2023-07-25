#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationController {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLER
public:
    ActorAnimationController& operator=(ActorAnimationController const&) = delete;
    ActorAnimationController(ActorAnimationController const&)            = delete;
    ActorAnimationController()                                           = delete;
#endif

public:
    /**
     * @symbol
     * ?addState\@ActorAnimationController\@\@QEAAAEAV?$shared_ptr\@VActorAnimationControllerState\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ActorAnimationControllerState>& addState(class HashedString const&);
    /**
     * @symbol
     * ?findStateIndex\@ActorAnimationController\@\@QEBA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N_K\@Z
     */
    MCAPI unsigned __int64 findStateIndex(std::string const&, bool, unsigned __int64) const;
    /**
     * @symbol ?resolveTransitionStateIndices\@ActorAnimationController\@\@QEAAXXZ
     */
    MCAPI void resolveTransitionStateIndices();
};
