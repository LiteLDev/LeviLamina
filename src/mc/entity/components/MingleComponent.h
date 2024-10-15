#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MingleComponent {
public:
    // MingleComponent inner types define
    enum class MingleState {};

public:
    // prevent constructor by default
    MingleComponent& operator=(MingleComponent const&);
    MingleComponent(MingleComponent const&);

public:
    // NOLINTBEGIN
    MCAPI MingleComponent();

    MCAPI class MingleComponent& clearPreviousPartnerId();

    MCAPI class Actor* fetchCurrentPartner(class Actor const& actorInLevel) const;

    MCAPI void resetState();

    MCAPI class MingleComponent& setMingleState(::MingleComponent::MingleState val);

    MCAPI class MingleComponent& setPartnerId(struct ActorUniqueID val);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
