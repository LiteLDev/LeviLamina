#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class Stopwatch;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class Mesh; }
// clang-format on

class BohrModelRenderer : public ::MinecraftUICustomRenderer {
public:
    // BohrModelRenderer inner types declare
    // clang-format off
    class Renderable;
    struct State;
    // clang-format on

    // BohrModelRenderer inner types define
    class Renderable {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::Mesh>> mMesh;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr>             mTexture;
        // NOLINTEND
    };

    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>    mElectrons;
        ::ll::TypedStorage<4, 4, int>    mProtons;
        ::ll::TypedStorage<4, 4, int>    mNeutrons;
        ::ll::TypedStorage<4, 4, int>    mRings;
        ::ll::TypedStorage<4, 4, float>  mScale;
        ::ll::TypedStorage<4, 8, ::Vec2> mTopLeft;
        ::ll::TypedStorage<4, 8, ::Vec2> mBottomRight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Stopwatch>>                  mStopwatch;
    ::ll::TypedStorage<4, 36, ::BohrModelRenderer::State>                     mCurState;
    ::ll::TypedStorage<4, 36, ::BohrModelRenderer::State>                     mLastState;
    ::ll::TypedStorage<4, 4, float>                                           mCenterRadius;
    ::ll::TypedStorage<4, 4, float>                                           mRingDistance;
    ::ll::TypedStorage<4, 4, float>                                           mRingThickness;
    ::ll::TypedStorage<4, 4, float>                                           mMargin;
    ::ll::TypedStorage<4, 4, float>                                           mElectronSize;
    ::ll::TypedStorage<4, 4, float>                                           mClumpRadius;
    ::ll::TypedStorage<4, 4, uint>                                            mProtonSeed;
    ::ll::TypedStorage<4, 4, uint>                                            mNeutronSeed;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                              mRingTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                              mProtonTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                              mElectronTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                              mNeutronTexture;
    ::ll::TypedStorage<8, 24, ::std::vector<::BohrModelRenderer::Renderable>> mRenderables;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BohrModelRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int) /*override*/;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
