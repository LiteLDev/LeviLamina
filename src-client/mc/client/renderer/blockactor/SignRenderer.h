#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/SignModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/world/level/block/SignBlock.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Block;
class BlockPos;
class BlockSource;
class IVanillaRenderBlockActorComponent;
class Model;
class ScreenContext;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
namespace mce::framebuilder { struct CustomSurfaceShaderMetadata; }
// clang-format on

class SignRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::ActorTextureInfo>                                   mSignTex;
    ::ll::TypedStorage<8, 16, ::std::map<::SignBlock::SignType, ::ActorTextureInfo>> mTextureMap;
    ::ll::TypedStorage<8, 1488, ::SignModel>                                         mSignModel;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                    mGlowSignTextMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                    mSignTextMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    SignRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;

    virtual float _getScaleFactor() const;

    virtual float _yTextOffset() const;

    virtual float _zTextOffset() const;

    virtual int _getSignWidth() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SignRenderer(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void _renderSign(
        ::BaseActorRenderContext&                               renderContext,
        ::Block const&                                          block,
        float const                                             size,
        int const                                               breakingAmount,
        float const                                             frameAlpha,
        ::ScreenContext&                                        screenContext,
        ::BlockSource&                                          renderSource,
        ::IVanillaRenderBlockActorComponent&                    renderComponent,
        ::BlockPos const&                                       worldPos,
        ::mce::MaterialPtr const&                               forcedMat,
        ::mce::ClientTexture const                              forcedTex,
        ::Model&                                                model,
        ::mce::framebuilder::CustomSurfaceShaderMetadata const& cssMetadata
    );

    MCAPI void _renderText(
        ::BaseActorRenderContext&            renderContext,
        ::IVanillaRenderBlockActorComponent& renderComponent,
        float                                size,
        ::BlockSource const&                 renderSource,
        ::SignTextSide                       side
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
