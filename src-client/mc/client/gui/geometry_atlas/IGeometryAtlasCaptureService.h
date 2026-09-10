#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class GeometryAtlasCapture; }
namespace GeometryAtlas { class IAtlasTile; }
namespace dragon::atlas { class IAtlasRenderOperations; }
// clang-format on

namespace GeometryAtlas {

class IGeometryAtlasCaptureService {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGeometryAtlasCaptureService() = default;

    virtual void processCaptureRequests(::dragon::atlas::IAtlasRenderOperations& renderOps) = 0;

    virtual ::Bedrock::Threading::Async<::GeometryAtlas::GeometryAtlasCapture>
    requestCapture(::std::vector<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>&& tiles) = 0;
    // NOLINTEND
};

} // namespace GeometryAtlas
