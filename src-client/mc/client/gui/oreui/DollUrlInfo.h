#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/client/gui/geometry_atlas/TileDefinition.h"

// clang-format off
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

namespace OreUI::GeometryAtlasResourceHandlerAnon {

struct DollUrlInfo {
public:
    GeometryAtlas::TileDefinition                                      mDefinition;
    gsl::not_null<::std::shared_ptr<::GeometryAtlas::PaperDollHandle>> mDoll;
    std::optional<float>                                               mReferenceHeight;
};

} // namespace OreUI::GeometryAtlasResourceHandlerAnon