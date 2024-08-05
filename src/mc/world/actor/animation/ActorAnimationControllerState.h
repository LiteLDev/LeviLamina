#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/util/molang/MolangVersion.h"

class ActorAnimationControllerState {
public:
    // prevent constructor by default
    ActorAnimationControllerState& operator=(ActorAnimationControllerState const&);
    ActorAnimationControllerState(ActorAnimationControllerState const&);
    ActorAnimationControllerState();

public:
    // NOLINTBEGIN
    MCAPI void addAnimation(class HashedString const& name);

    MCAPI void addAnimation(class HashedString const& name, class ExpressionNode const& blendWeightExpression);

    MCAPI void addBlendTransitionKeyFrame(float time, float blendValue);

    MCAPI class ActorAnimationEvent& addEntryActorEvent(
        float               time,
        std::string const&  event,
        ::CurrentCmdVersion commandVersion,
        ::MolangVersion     molangVersion
    );

    MCAPI class ActorAnimationEvent& addExitActorEvent(
        float               time,
        std::string const&  event,
        ::CurrentCmdVersion commandVersion,
        ::MolangVersion     molangVersion
    );

    MCAPI class ActorParticleEffect& addParticleEffect();

    MCAPI class ActorSoundEffect& addSoundEffect();

    MCAPI void addTransition(
        std::string const& stateName,
        std::string const& expression,
        ::MolangVersion    molangVersion,
        bool               createEvenIfAlreadyExists
    );

    MCAPI class StateAnimationVariable& addVariable(std::string const& variableName);

    MCAPI void setBlendTransitionTime(float time);

    // NOLINTEND
};
