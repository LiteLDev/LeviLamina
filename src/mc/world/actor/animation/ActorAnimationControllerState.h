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
    // symbol: ?addAnimation@ActorAnimationControllerState@@QEAAXAEBVHashedString@@@Z
    MCAPI void addAnimation(class HashedString const& name);

    // symbol: ?addAnimation@ActorAnimationControllerState@@QEAAXAEBVHashedString@@AEBVExpressionNode@@@Z
    MCAPI void addAnimation(class HashedString const& name, class ExpressionNode const& blendWeightExpression);

    // symbol: ?addBlendTransitionKeyFrame@ActorAnimationControllerState@@QEAAXMM@Z
    MCAPI void addBlendTransitionKeyFrame(float time, float blendValue);

    // symbol:
    // ?addEntryActorEvent@ActorAnimationControllerState@@QEAAAEAVActorAnimationEvent@@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
    MCAPI class ActorAnimationEvent& addEntryActorEvent(
        float               time,
        std::string const&  event,
        ::CurrentCmdVersion commandVersion,
        ::MolangVersion     molangVersion
    );

    // symbol:
    // ?addExitActorEvent@ActorAnimationControllerState@@QEAAAEAVActorAnimationEvent@@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
    MCAPI class ActorAnimationEvent& addExitActorEvent(
        float               time,
        std::string const&  event,
        ::CurrentCmdVersion commandVersion,
        ::MolangVersion     molangVersion
    );

    // symbol: ?addParticleEffect@ActorAnimationControllerState@@QEAAAEAVActorParticleEffect@@XZ
    MCAPI class ActorParticleEffect& addParticleEffect();

    // symbol: ?addSoundEffect@ActorAnimationControllerState@@QEAAAEAVActorSoundEffect@@XZ
    MCAPI class ActorSoundEffect& addSoundEffect();

    // symbol:
    // ?addTransition@ActorAnimationControllerState@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4MolangVersion@@_N@Z
    MCAPI void addTransition(
        std::string const& stateName,
        std::string const& expression,
        ::MolangVersion    molangVersion,
        bool               createEvenIfAlreadyExists
    );

    // symbol:
    // ?addVariable@ActorAnimationControllerState@@QEAAAEAVStateAnimationVariable@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class StateAnimationVariable& addVariable(std::string const& variableName);

    // symbol: ?setBlendTransitionTime@ActorAnimationControllerState@@QEAAXM@Z
    MCAPI void setBlendTransitionTime(float time);

    // NOLINTEND
};
