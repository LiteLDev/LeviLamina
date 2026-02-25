#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class RectangleArea;
class Stopwatch;
class Tessellator;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { class TextureGroup; }
// clang-format on

class BohrModelRenderer : public ::MinecraftUICustomRenderer {
public:
    // BohrModelRenderer inner types declare
    // clang-format off
    struct Renderable;
    struct State;
    // clang-format on

    // BohrModelRenderer inner types define
    struct Renderable {};

    struct State {};

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
    virtual ~BohrModelRenderer() /*override*/;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl&, int) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BohrModelRenderer();

    MCAPI void _extractElectrons(::Tessellator& t, int electrons, ::RectangleArea const& rect);

    MCAPI void _extractParticleClump(::Tessellator& t, int protons, int neutrons, ::RectangleArea const& rect);

    MCAPI void _extractRings(::Tessellator& t, int rings, ::RectangleArea const& rect);

    MCAPI void _loadTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void _renderTick(::MinecraftUIRenderContext& renderContext);

    MCAPI void _updateState(::UIControl& owner);
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

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl&, int);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
