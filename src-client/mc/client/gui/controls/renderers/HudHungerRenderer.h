#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudHungerRenderer : public ::MinecraftUICustomRenderer {
public:
    // HudHungerRenderer inner types define
    enum class HungerType : int {
        Background       = 0,
        BackgroundEffect = 1,
        Full             = 2,
        FullEffect       = 3,
        Half             = 4,
        HalfEffect       = 5,
        Count            = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mTickCount;
    ::ll::TypedStorage<1, 1, bool>                                 mHasLoadedTextures;
    ::ll::TypedStorage<1, 1, bool>                                 mShouldRender;
    ::ll::TypedStorage<1, 1, bool>                                 mUseHungerEffect;
    ::ll::TypedStorage<1, 1, bool>                                 mAnimatedLastFrame;
    ::ll::TypedStorage<8, 8, uint64>                               mNumFullIcons;
    ::ll::TypedStorage<8, 8, uint64>                               mNumHalfIcons;
    ::ll::TypedStorage<8, 192, ::std::array<::mce::TexturePtr, 6>> mHungerTextures;
    ::ll::TypedStorage<8, 3168, ::std::array<::mce::Mesh, 6>>      mHungerMeshes;
    ::ll::TypedStorage<4, 120, ::std::array<::glm::vec3, 10>>      mIconPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudHungerRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudHungerRenderer();

    MCAPI void _loadHungerTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI bool _validateHungerMeshes(::ScreenContext& screenContext);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
