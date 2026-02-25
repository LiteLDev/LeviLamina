#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/renderer/ActorShaderManager.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class Color; }
// clang-format on

class BannerPatternRenderer : public ::MinecraftUICustomRenderer, public ::ActorShaderManager {
public:
    // BannerPatternRenderer inner types declare
    // clang-format off
    struct BannerPatternTextureInfo;
    // clang-format on

    // BannerPatternRenderer inner types define
    struct BannerPatternTextureInfo {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                              mHasLoadedTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::BannerPatternRenderer::BannerPatternTextureInfo>> mTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color>>                                      mColors;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerPatternRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForActorShaderManager();

    MCNAPI static void** $vftableForMinecraftUICustomRenderer();
    // NOLINTEND
};
