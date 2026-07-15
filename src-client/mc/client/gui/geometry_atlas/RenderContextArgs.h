#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ItemRenderer;
namespace dragon::atlas { class IAtlasUserOperations; }
// clang-format on

namespace GeometryAtlas {

struct RenderContextArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemRenderer&>                        mItemRenderer;
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&>              mRenderContext;
    ::ll::TypedStorage<8, 8, ::dragon::atlas::IAtlasUserOperations&> mUserOperations;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContextArgs& operator=(RenderContextArgs const&);
    RenderContextArgs(RenderContextArgs const&);
    RenderContextArgs();
};

} // namespace GeometryAtlas
