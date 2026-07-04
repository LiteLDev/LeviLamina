#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/SignModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/world/level/block/SignBlock.h"
#include "mc/world/level/block/actor/SignBlockActor.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Font;
class IClientInstance;
class Model;
class ProfanityContext;
class ScreenContext;
class SignBlockActor;
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

    MCAPI ::SignBlockActor::CachedMessageData const& _getCachedSignMessage(
        ::SignBlockActor&                                        signBlockActor,
        ::IClientInstance&                                       clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> const& context,
        ::Font&                                                  font,
        ::SignTextSide                                           side
    );

    MCAPI void _renderSign(
        ::BaseActorRenderContext&                               renderContext,
        ::Block const&                                          block,
        float                                                   size,
        int                                                     breakingAmount,
        float                                                   frameAlpha,
        ::ScreenContext&                                        screenContext,
        ::BlockSource&                                          renderSource,
        ::BlockActor&                                           entity,
        ::BlockPos const&                                       worldPos,
        ::mce::MaterialPtr const&                               forcedMat,
        ::mce::ClientTexture                                    forcedTex,
        ::Model&                                                model,
        ::mce::framebuilder::CustomSurfaceShaderMetadata const& cssMetadata
    );

    MCAPI void _renderText(
        ::BaseActorRenderContext& renderContext,
        ::BlockActor&             te,
        float                     size,
        ::BlockSource const&      renderSource,
        ::SignTextSide            side
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);

    MCFOLD float $_getScaleFactor() const;

    MCFOLD float $_yTextOffset() const;

    MCFOLD float $_zTextOffset() const;

    MCFOLD int $_getSignWidth() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
