#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/DecoratedPotBase.h"
#include "mc/client/model/models/DecoratedPotFace.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/PBRTexturePtrs.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/world/Direction.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinition;
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class DecoratedPotBlockActor;
class ItemStack;
class ScreenContext;
class Vec3;
struct BlockActorRenderData;
struct Brightness;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
// clang-format on

class DecoratedPotRenderer : public ::BlockActorRenderer {
public:
    // DecoratedPotRenderer inner types define
    enum class ModelMaterial : int {
        InWorld = 0,
        Gui     = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 928, ::DecoratedPotFace>                         mBackFace;
    ::ll::TypedStorage<8, 928, ::DecoratedPotFace>                         mLeftFace;
    ::ll::TypedStorage<8, 928, ::DecoratedPotFace>                         mRightFace;
    ::ll::TypedStorage<8, 928, ::DecoratedPotFace>                         mFrontFace;
    ::ll::TypedStorage<8, 2656, ::DecoratedPotBase>                        mPotBase;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                           mPotBaseTexture;
    ::ll::TypedStorage<8, 112, ::PBRTexturePtrs>                           mDefaultSideTexture;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::PBRTexturePtrs>> mActorTextures;
    // NOLINTEND

public:
    // prevent constructor by default
    DecoratedPotRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DecoratedPotRenderer(
        ::std::shared_ptr<::mce::TextureGroup>       textureGroup,
        ::std::shared_ptr<::ActorResourceDefinition> definition
    );

    MCAPI void _renderFacesWithActorTexture(
        ::dragon::RenderMetadata const&       renderMetadata,
        ::ScreenContext&                      screenContext,
        ::std::array<::std::string, 4> const& sherdNames,
        ::mce::MaterialPtr const&             forcedMaterial,
        ::mce::ClientTexture const&           forcedTexture
    );

    MCAPI void _setModelMaterial(::DecoratedPotRenderer::ModelMaterial const& modelMaterial);

    MCAPI void _setupTexturesUsingEntityMapping(
        ::std::shared_ptr<::mce::TextureGroup>       textureGroup,
        ::std::shared_ptr<::ActorResourceDefinition> definition
    );

    MCAPI void renderInGui(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemStack const&              decoratedPotItem,
        float                           x,
        float                           y,
        float                           scale,
        float                           lightMultiplier
    );

    MCAPI void renderInHand(
        ::BaseActorRenderContext&     renderContext,
        ::BlockActorRenderData const& blockEntityRenderData,
        bool                          isFirstPerson
    );

    MCAPI void renderInItemFrame(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemStack const&              decoratedPotItem,
        ::BlockSource&                  region,
        ::BlockPos const&               pos,
        ::Vec3 const&                   translation,
        float                           scale,
        bool                            ignoreLighting,
        ::Brightness                    lightEmission
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _animateWobbleFail(
        ::BaseActorRenderContext&       renderContext,
        ::DecoratedPotBlockActor const& entity,
        ::MatrixStack::MatrixStackRef&  worldMatrix
    );

    MCAPI static void _animateWobbleSuccess(
        ::BaseActorRenderContext&       renderContext,
        ::DecoratedPotBlockActor const& entity,
        ::MatrixStack::MatrixStackRef&  worldMatrix
    );

    MCAPI static ::std::array<::std::string, 4> _getSherdsFromPotItem(::ItemStack const& decoratedPotItem);

    MCAPI static void
    _rotateAccordingToDirection(::MatrixStack::MatrixStackRef& worldMatrix, ::Direction::Type const& direction);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup, ::std::shared_ptr<::ActorResourceDefinition> definition);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
