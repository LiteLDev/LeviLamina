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

class HudBubblesRenderer : public ::MinecraftUICustomRenderer {
public:
    // HudBubblesRenderer inner types define
    enum class BubbleType : int {
        Full  = 0,
        Pop   = 1,
        Empty = 2,
        Count = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mHasLoadedTextures;
    ::ll::TypedStorage<8, 8, uint64>                              mNumFullIcons;
    ::ll::TypedStorage<8, 8, uint64>                              mNumPoppedIcons;
    ::ll::TypedStorage<8, 8, uint64>                              mNumEmptyIcons;
    ::ll::TypedStorage<1, 1, bool>                                mPopSoundReady;
    ::ll::TypedStorage<1, 1, bool>                                mWobblingLastFrame;
    ::ll::TypedStorage<8, 96, ::std::array<::mce::TexturePtr, 3>> mBubbleTextures;
    ::ll::TypedStorage<8, 1584, ::std::array<::mce::Mesh, 3>>     mBubbleMeshes;
    ::ll::TypedStorage<4, 120, ::std::array<::glm::vec3, 10>>     mIconPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudBubblesRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudBubblesRenderer();

    MCAPI void _loadBubbleTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void _tryPlayPopSound(::IClientInstance& client);

    MCFOLD bool _validateBubbleMeshes(::ScreenContext& screenContext);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::tuple<int, int, int>
    calculateBubbleData(bool isBreathing, bool isCreativeOrSpectator, short supply, short maxSupply);
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
