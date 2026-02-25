#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class LocalPlayer;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIResolvedDef;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudHorseJumpRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mHorseJumpEmpty;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mHorseJumpFull;
    ::ll::TypedStorage<1, 1, bool>               mHasLoadedTextures;
    ::ll::TypedStorage<1, 1, bool>               mIsReplacedWhileInactive;
    // NOLINTEND

public:
    // prevent constructor by default
    HudHorseJumpRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudHorseJumpRenderer() /*override*/;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void render(
        ::MinecraftUIRenderContext& renderContext,
        ::IClientInstance&          client,
        ::UIControl&                owner,
        int                         pass
    ) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HudHorseJumpRenderer(::UIResolvedDef const& def);

    MCAPI void _loadHorseJumpTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    canRender(::IClientInstance const& client, ::LocalPlayer const& player, bool isReplacedWhileInactive);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIResolvedDef const& def);
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

    MCAPI void
    $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
