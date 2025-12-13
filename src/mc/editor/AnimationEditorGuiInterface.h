#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class ActorRuntimeID;
// clang-format on

class AnimationEditorGuiInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnimationEditorGuiInterface() = default;

    virtual ::Actor* getPlayer() = 0;

    virtual ::Actor* getActor(::ActorRuntimeID) = 0;

    virtual ::ActorAnimationGroup* getActorAnimationGroup() = 0;

    virtual ::Bedrock::NonOwnerPointer<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
