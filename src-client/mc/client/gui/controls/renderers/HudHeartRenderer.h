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
class Player;
class ScreenContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class HudHeartRenderer : public ::MinecraftUICustomRenderer {
public:
    // HudHeartRenderer inner types declare
    // clang-format off
    struct SanitizedHealthData;
    struct HeartIconData;
    // clang-format on

    // HudHeartRenderer inner types define
    enum class HeartType : int {
        Background      = 0,
        BackgroundBlink = 1,
        Full            = 2,
        FullPoison      = 3,
        FullWither      = 4,
        FullFrozen      = 5,
        FullFlash       = 6,
        FullPoisonFlash = 7,
        FullWitherFlash = 8,
        FullFrozenFlash = 9,
        Half            = 10,
        HalfPoison      = 11,
        HalfWither      = 12,
        HalfFrozen      = 13,
        HalfFlash       = 14,
        HalfPoisonFlash = 15,
        HalfWitherFlash = 16,
        HalfFrozenFlash = 17,
        FullAbsorption  = 18,
        HalfAbsorption  = 19,
        Count           = 20,
    };

    struct SanitizedHealthData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mHealth;
        ::ll::TypedStorage<4, 4, int> mOldHealth;
        ::ll::TypedStorage<4, 4, int> mMaxHealth;
        ::ll::TypedStorage<4, 4, int> mAbsorption;
        // NOLINTEND
    };

    struct HeartIconData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::HudHeartRenderer::HeartType> mType;
        ::ll::TypedStorage<8, 8, uint64>                        mOffset;
        ::ll::TypedStorage<8, 8, uint64>                        mCount;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                  mHasLoadedTextures;
    ::ll::TypedStorage<1, 1, bool>                                  mShouldRender;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>    mBackgroundIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>    mFullFlashIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>    mHalfFlashIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>    mFullAbsorptionIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>    mHalfAbsorptionIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>    mFullIcon;
    ::ll::TypedStorage<8, 24, ::HudHeartRenderer::HeartIconData>    mHalfIcon;
    ::ll::TypedStorage<8, 640, ::std::array<::mce::TexturePtr, 20>> mHeartTextures;
    ::ll::TypedStorage<8, 10560, ::std::array<::mce::Mesh, 20>>     mHeartMeshes;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::vec3>>           mIconPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudHeartRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HudHeartRenderer();

    MCAPI void _loadHeartTextures(::mce::TextureGroup& textureGroup, bool isHardcore);

    MCAPI bool _validateHeartMeshes(::ScreenContext& screenContext);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HudHeartRenderer::SanitizedHealthData getSanitizedHealthData(::Player const& player);
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
