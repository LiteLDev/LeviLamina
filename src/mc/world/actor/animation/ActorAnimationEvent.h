#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/util/molang/MolangVersion.h"

class ActorAnimationEvent {
public:
    // prevent constructor by default
    ActorAnimationEvent& operator=(ActorAnimationEvent const&);
    ActorAnimationEvent(ActorAnimationEvent const&);
    ActorAnimationEvent();

public:
    // NOLINTBEGIN
    MCAPI ActorAnimationEvent(class ActorAnimationEvent&&);

    MCAPI ActorAnimationEvent(
        float               time,
        std::string const&  event,
        ::CurrentCmdVersion commandVersion,
        ::MolangVersion     molangVersion
    );

    MCAPI void fire(class RenderParams& renderParams, class Actor* actor) const;

    MCAPI ~ActorAnimationEvent();

    // NOLINTEND
};
