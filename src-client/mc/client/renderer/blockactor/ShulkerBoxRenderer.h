#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/ShulkerBoxGuiModel.h"
#include "mc/client/model/models/ShulkerBoxModel.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockActor;
class ItemStack;
struct ActorTextureInfo;
struct BlockActorRenderData;
namespace dragon { struct RenderMetadata; }
namespace mce { class TextureGroup; }
// clang-format on

class ShulkerBoxRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::ActorTextureInfo>> mTextures;
    ::ll::TypedStorage<8, 1496, ::ShulkerBoxModel>                            mShulkerBoxModel;
    ::ll::TypedStorage<8, 2064, ::ShulkerBoxGuiModel>                         mShulkerBoxGuiModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ShulkerBoxRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ShulkerBoxRenderer(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void renderByItem(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ItemStack const&              item
    );

    MCAPI void renderInGui(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::BlockActor&,
        ::HashedString const& blockId,
        float                 x,
        float                 y,
        float                 scale,
        float                 pickupPopPercentage,
        float                 lightMultiplier
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string const& getTexturePathFor(::HashedString const& blockId);
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
    // NOLINTEND
};
