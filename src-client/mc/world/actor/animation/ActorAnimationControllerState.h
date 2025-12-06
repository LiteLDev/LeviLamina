#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/world/actor/animation/ActorAnimationBase.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerStateTransition;
class ActorAnimationEvent;
class ActorParticleEffect;
class ActorSoundEffect;
class AnimationValueCurveKeyFrame;
class ExpressionNode;
class RenderParams;
class StateAnimationVariable;
// clang-format on

class ActorAnimationControllerState : public ::ActorAnimationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                               mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::StateAnimationVariable>>                      mVariables;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::HashedString, ::ExpressionNode>>> mAnimations;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorParticleEffect>>                         mParticleEffects;
    ::ll::TypedStorage<8, 48, ::std::vector<::ActorAnimationEvent>[2]>                      mEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorAnimationControllerStateTransition>>     mTransitions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorSoundEffect>>                            mSoundEffects;
    ::ll::TypedStorage<1, 1, bool>                                                          mBlendViaShortestPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationValueCurveKeyFrame>>                 mBlendTransitionKeyFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerState();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorAnimationControllerState(::HashedString const& name);

    MCAPI void addTransition(
        ::std::string const& stateName,
        ::std::string const& expression,
        ::MolangVersion      molangVersion,
        bool                 createEvenIfAlreadyExists
    );

    MCAPI ::StateAnimationVariable& addVariable(::std::string const& variableName);

    MCAPI void setVariables(::RenderParams& renderParams) const;

    MCAPI ~ActorAnimationControllerState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
