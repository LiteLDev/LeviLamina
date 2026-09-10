#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IGeometryAtlas; }
namespace GeometryAtlas { class IGeometryAtlasCaptureService; }
namespace GeometryAtlas { class IOffscreenPaperDollRenderer; }
namespace GeometryAtlas { class IPaperDollHandleFactory; }
// clang-format on

namespace GeometryAtlas {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::GeometryAtlas::IOffscreenPaperDollRenderer> createOffscreenPaperDollRenderer(
    ::std::weak_ptr<::GeometryAtlas::IGeometryAtlas>               atlas,
    ::std::weak_ptr<::GeometryAtlas::IGeometryAtlasCaptureService> capture,
    ::std::unique_ptr<::GeometryAtlas::IPaperDollHandleFactory>    dollFactory
);
// NOLINTEND

} // namespace GeometryAtlas
