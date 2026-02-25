#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudHorseHeartRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>               mHasLoadedTextures;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mHeartHorseBackgroundTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mHeartHorseBlinkTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mHeartHorseFullTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mHeartHorseHalfTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mHeartHorseFlashFullTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mHeartHorseFlashHalfTexture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudHorseHeartRenderer() /*override*/;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudHorseHeartRenderer();

    MCAPI void _loadHeartTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);
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

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
