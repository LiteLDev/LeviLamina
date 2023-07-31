#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationController {

public:
    // prevent constructor by default
    ActorAnimationController& operator=(ActorAnimationController const&) = delete;
    ActorAnimationController(ActorAnimationController const&)            = delete;
    ActorAnimationController()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?addState\@ActorAnimationController\@\@QEAAAEAV?$shared_ptr\@VActorAnimationControllerState\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI std::shared_ptr<class ActorAnimationControllerState>& addState(class HashedString const&);
    /**
     * @symbol
     * ?findStateIndex\@ActorAnimationController\@\@QEBA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N_K\@Z
     */
    MCAPI uint64_t findStateIndex(std::string const&, bool, uint64_t) const;
    /**
     * @symbol ?resolveTransitionStateIndices\@ActorAnimationController\@\@QEAAXXZ
     */
    MCAPI void resolveTransitionStateIndices();
    // NOLINTEND
};
