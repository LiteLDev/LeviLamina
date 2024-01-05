#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationController {
public:
    // prevent constructor by default
    ActorAnimationController& operator=(ActorAnimationController const&);
    ActorAnimationController(ActorAnimationController const&);
    ActorAnimationController();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ActorAnimationController@@QEAA@AEBVHashedString@@AEBVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ActorAnimationController(
        class HashedString const& name,
        class SemVersion const&   version,
        std::string const&        sourceFilePathWithExtension
    );

    // symbol:
    // ?addState@ActorAnimationController@@QEAAAEAV?$shared_ptr@VActorAnimationControllerState@@@std@@AEBVHashedString@@@Z
    MCAPI std::shared_ptr<class ActorAnimationControllerState>& addState(class HashedString const& name);

    // symbol:
    // ?findStateIndex@ActorAnimationController@@QEBA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N_K@Z
    MCAPI uint64 findStateIndex(std::string const& name, bool missingIsOkay, uint64 defaultState) const;

    // symbol: ?resolveTransitionStateIndices@ActorAnimationController@@QEAAXXZ
    MCAPI void resolveTransitionStateIndices();

    // NOLINTEND
};
