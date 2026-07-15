#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IInventoryItemRendererRenderContext.h"
#include "mc/client/renderer/actor/ItemRenderChunkType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ItemStack;
struct TextureUVCoordinateSet;
// clang-format on

class BaseActorInventoryRenderContext : public ::IInventoryItemRendererRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseActorInventoryRenderContext& operator=(BaseActorInventoryRenderContext const&);
    BaseActorInventoryRenderContext(BaseActorInventoryRenderContext const&);
    BaseActorInventoryRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setHUDOpacity(float opacity) /*override*/;

    virtual void renderGuiItemInChunk(
        ::ItemRenderChunkType                            itemRenderChunkType,
        ::ItemStack const&                               item,
        float                                            x,
        float                                            y,
        float                                            lightMultiplier,
        float                                            alphaMultiplier,
        float                                            scale,
        int                                              frame,
        bool                                             allowAnimation,
        int                                              zOrder,
        ::std::optional<::TextureUVCoordinateSet> const& customIconUVCoords
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setHUDOpacity(float opacity);

    MCAPI void $renderGuiItemInChunk(
        ::ItemRenderChunkType                            itemRenderChunkType,
        ::ItemStack const&                               item,
        float                                            x,
        float                                            y,
        float                                            lightMultiplier,
        float                                            alphaMultiplier,
        float                                            scale,
        int                                              frame,
        bool                                             allowAnimation,
        int                                              zOrder,
        ::std::optional<::TextureUVCoordinateSet> const& customIconUVCoords
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
