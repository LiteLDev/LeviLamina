#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/Geometry.h"
#include "mc/client/renderer/block/tessellation_pipeline/item_transforms/Type.h"

// auto generated forward declare list
// clang-format off
class Matrix;
class Vec3;
namespace Json { class Value; }
// clang-format on

namespace ClientBlockPipeline::ItemTransforms {
// functions
// NOLINTBEGIN
MCAPI ::Matrix constructTransform(
    ::ClientBlockPipeline::ItemTransforms::Type const& type,
    ::Vec3 const&                                      translation,
    ::Vec3 const&                                      rotation,
    ::Vec3 const&                                      scale,
    ::Vec3 const&                                      rotationPivot,
    ::Vec3 const&                                      scalePivot
);

MCAPI ::Matrix getDefaultTransformMatrix(::ClientBlockPipeline::ItemTransforms::Type const& type);

MCAPI ::Geometry::ItemDisplayTransform getDefaultTransforms(::ClientBlockPipeline::ItemTransforms::Type const& type);

MCAPI ::Matrix getFixSpaceTransformMatrix(::ClientBlockPipeline::ItemTransforms::Type const& type);

MCAPI ::ClientBlockPipeline::ItemTransforms::Type getTypeFromString(::std::string const& type);

MCAPI ::std::string getTypeName(::ClientBlockPipeline::ItemTransforms::Type const& type);

MCAPI ::Geometry::ItemDisplayTransform
parseItemDisplayTransform(::Json::Value const& itemTransform, ::ClientBlockPipeline::ItemTransforms::Type const& type);
// NOLINTEND

} // namespace ClientBlockPipeline::ItemTransforms
