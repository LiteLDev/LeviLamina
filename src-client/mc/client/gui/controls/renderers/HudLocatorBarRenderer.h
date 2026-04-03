#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class NinePatchLayer;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudLocatorBarRenderer : public ::MinecraftUICustomRenderer {
public:
    // HudLocatorBarRenderer inner types declare
    // clang-format off
    struct ActorUniqueIDCompare;
    struct PlayerData;
    // clang-format on

    // HudLocatorBarRenderer inner types define
    struct ActorUniqueIDCompare {};

    struct PlayerData {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NinePatchLayer>>     mBackgroundTexture;
    ::ll::TypedStorage<1, 1, bool>                                    mHasLoadedIconTextures;
    ::ll::TypedStorage<8, 192, ::std::array<::mce::TexturePtr, 6>>    mTextures;
    ::ll::TypedStorage<8, 3168, ::std::array<::mce::Mesh, 6>>         mMeshes;
    ::ll::TypedStorage<4, 8, ::Vec2>                                  mBackgroundSize;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastRenderCall;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudLocatorBarRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadIconTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI bool _validateIconMeshes(::ScreenContext& screenContext, float barHeight);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
