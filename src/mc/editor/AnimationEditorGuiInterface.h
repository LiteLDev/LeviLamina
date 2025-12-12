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
    // vIndex: 0
    virtual ~AnimationEditorGuiInterface() = default;

    // vIndex: 1
    virtual ::Actor* getPlayer() = 0;

    // vIndex: 2
    virtual ::Actor* getActor(::ActorRuntimeID) = 0;

    // vIndex: 3
    virtual ::ActorAnimationGroup* getActorAnimationGroup() = 0;

    // vIndex: 4
    virtual ::Bedrock::NonOwnerPointer<::ActorAnimationControllerGroup> getActorAnimationControllerGroup() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
