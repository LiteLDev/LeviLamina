#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ItemRenderChunkType.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct TextureUVCoordinateSet;
// clang-format on

class IInventoryItemRendererRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInventoryItemRendererRenderContext() = default;

    virtual void setHUDOpacity(float opacity) = 0;

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
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
