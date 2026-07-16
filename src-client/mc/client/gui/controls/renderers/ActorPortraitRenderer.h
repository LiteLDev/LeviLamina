#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/SkinData.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
// clang-format on

class ActorPortraitRenderer : public ::MinecraftUICustomRenderer {
public:
    // ActorPortraitRenderer inner types declare
    // clang-format off
    struct Args;
    // clang-format on

    // ActorPortraitRenderer inner types define
    enum class RotateMode : uchar {
        None = 0,
        Auto = 1,
    };

    struct Args {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::glm::vec3>                        mScale;
        ::ll::TypedStorage<4, 12, ::glm::vec3>                        mRotate;
        ::ll::TypedStorage<4, 12, ::glm::vec3>                        mTranslate;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>                     mActorId;
        ::ll::TypedStorage<1, 1, bool>                                mUseLiveAnimation;
        ::ll::TypedStorage<1, 1, ::ActorPortraitRenderer::RotateMode> mRotateMode;
        ::ll::TypedStorage<4, 16, ::SkinData>                         mSkin;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mElapsedTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
