#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/DecoratedPotBase.h"
#include "mc/client/model/models/DecoratedPotFace.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/PBRTexturePtrs.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class ItemStack;
class Vec3;
struct BlockActorRenderData;
struct Brightness;
namespace dragon { struct RenderMetadata; }
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
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
