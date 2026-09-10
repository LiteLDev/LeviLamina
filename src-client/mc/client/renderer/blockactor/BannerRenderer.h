#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BannerModel;
class BaseActorRenderContext;
class BlockActor;
class ItemStack;
class TextureAtlas;
struct BlockActorRenderData;
namespace dragon { struct RenderMetadata; }
namespace mce { class Color; }
// clang-format on

class BannerRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mAtlasLoaded;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TextureAtlas>> mTextureAtlas;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                       mMaxTileSize;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                mTexture;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BannerModel>>  mBannerModel;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>               mGuiMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>               mGuiPoleMaterial;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>          mExistanceTracker;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _setConstants(
        ::BaseActorRenderContext& baseActorRenderContext,
        int                       index,
        ::std::string             filePath,
        ::mce::Color const&       color
    ) const;

    MCAPI void _setupBannerConstants(::BaseActorRenderContext& baseActorRenderContext, ::BlockActor& entity);

    MCAPI void renderByItem(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemStack const&              item,
        bool                            longPole
    );

    MCAPI void renderInGui(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::BlockActor&                   entity,
        float                           x,
        float                           y,
        float                           scale,
        bool                            asStanding,
        float                           lightMultiplier
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);
    // NOLINTEND
};
