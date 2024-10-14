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
    MCAPI ActorAnimationController(
        class HashedString const& name,
        class SemVersion const&   version,
        std::string const&        sourceFilePathWithExtension
    );

    MCAPI std::shared_ptr<class ActorAnimationControllerState>& addState(class HashedString const& name);

    MCAPI uint64 findStateIndex(std::string const& name, bool missingIsOkay, uint64 defaultState) const;

    MCAPI void resolveTransitionStateIndices();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
