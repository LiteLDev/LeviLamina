#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IGeometryAtlasCaptureService.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class GeometryAtlasCapture; }
namespace GeometryAtlas { class IAtlasTile; }
namespace dragon::atlas { class IAtlasRenderOperations; }
// clang-format on

namespace GeometryAtlas {

class NullCaptureService : public ::GeometryAtlas::IGeometryAtlasCaptureService {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void processCaptureRequests(::dragon::atlas::IAtlasRenderOperations&) /*override*/;

    virtual ::Bedrock::Threading::Async<::GeometryAtlas::GeometryAtlasCapture>
    requestCapture(::std::vector<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>&&) /*override*/;
    // NOLINTEND
};

} // namespace GeometryAtlas
