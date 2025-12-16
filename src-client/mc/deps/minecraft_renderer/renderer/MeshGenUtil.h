#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MeshData; }
namespace mce { struct VertexLayout; }
// clang-format on

namespace mce::MeshGenUtil {
// functions
// NOLINTBEGIN
MCAPI ::mce::VertexLayout findVertexLayout(::mce::MeshData const& data, bool splitStream);

MCAPI void generateOldStyleRenderChunk(
    ::mce::MeshData const&     data,
    ::mce::VertexLayout const& format,
    uint64                     vertexCount,
    uint64                     indexSegmentSize,
    uint                       indexSize,
    ::std::vector<uchar>&      dataOut
);

MCAPI void generateOldStyleTintedUIElement(
    ::mce::MeshData const&     data,
    ::mce::VertexLayout const& format,
    uint64                     vertexCount,
    uint64                     indexSegmentSize,
    uint                       indexSize,
    ::std::vector<uchar>&      dataOut
);

MCAPI void generateOldStyleUIElement(
    ::mce::MeshData const&     data,
    ::mce::VertexLayout const& format,
    uint64                     vertexCount,
    uint64                     indexSegmentSize,
    uint                       indexSize,
    ::std::vector<uchar>&      dataOut
);

MCAPI void generateOldStyleVertexBufferData(
    ::mce::MeshData const&                      data,
    ::mce::VertexLayout const&                  layout,
    ::std::vector<uchar>&                       dataOut,
    uint&                                       indexSize,
    ::std::optional<::gsl::span<::glm::mat4x4>> bones,
    ::std::optional<::gsl::span<::glm::mat4x4>> previousBones
);

MCAPI void normalizeVerticesToOrthogonalFrame(
    ::mce::MeshData&   meshData,
    uint               startingVertexIndex,
    ::glm::vec2 const& frameMin,
    ::glm::vec2 const& frameMax,
    int                zOrder
);
// NOLINTEND

} // namespace mce::MeshGenUtil
