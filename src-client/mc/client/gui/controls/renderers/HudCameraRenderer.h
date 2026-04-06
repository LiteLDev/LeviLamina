#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/item/components/CameraCallbacks.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
class MinecraftUIRenderContext;
class Player;
class ResourceLocation;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
// clang-format on

class HudCameraRenderer : public ::MinecraftUICustomRenderer, public ::CameraCallbacks {
public:
    // HudCameraRenderer inner types define
    enum class State : int {
        None          = 0,
        ShowBlackBars = 1,
        ShowShutter   = 2,
        ShowPicture   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::HudCameraRenderer::State> mState;
    ::ll::TypedStorage<4, 4, float>                      mShowTime;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>         mPhotoTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>        mColorMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>        mTexMaterial;
    ::ll::TypedStorage<1, 1, bool>                       mImmediatePicture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudCameraRenderer() /*override*/;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl&, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl&, ::UIScene const&) /*override*/;

    virtual void onTakePictureNow(::Player& player, ::Actor* camera, ::Actor* target) /*override*/;

    virtual void onStartTakingPicture(::Player& player) /*override*/;

    virtual void onEndTakingPicture(::Player& player, ::Actor* camera, ::Actor* target) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudCameraRenderer();

    MCAPI void
    _drawBlackBars(::ScreenContext& screenContext, float barToScreenRatio, int screenWidth, int screenHeight);

    MCAPI void
    _drawPicture(::ScreenContext& screenContext, float slideOffScreenRatio, int screenWidth, int screenHeight);

    MCAPI ::ResourceLocation _getOverlayResourceLocation() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl&, int);

    MCAPI bool $update(::IClientInstance& client, ::UIControl&, ::UIScene const&);

    MCAPI void $onTakePictureNow(::Player& player, ::Actor* camera, ::Actor* target);

    MCAPI void $onStartTakingPicture(::Player& player);

    MCAPI void $onEndTakingPicture(::Player& player, ::Actor* camera, ::Actor* target);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForMinecraftUICustomRenderer();

    MCNAPI static void** $vftableForCameraCallbacks();
    // NOLINTEND
};
