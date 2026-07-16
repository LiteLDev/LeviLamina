#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/Geometry.h"
#include "mc/client/renderer/block/tessellation_pipeline/item_transforms/Type.h"

// auto generated forward declare list
// clang-format off
class Matrix;
namespace Json { class Value; }
// clang-format on

namespace ClientBlockPipeline::ItemTransforms {
// functions
// NOLINTBEGIN
MCAPI ::Matrix getDefaultTransformMatrix(::ClientBlockPipeline::ItemTransforms::Type const& type);

MCAPI ::Matrix getFixSpaceTransformMatrix(::ClientBlockPipeline::ItemTransforms::Type const& type);

MCAPI ::ClientBlockPipeline::ItemTransforms::Type getTypeFromString(::std::string const& type);

MCAPI ::std::string getTypeName(::ClientBlockPipeline::ItemTransforms::Type const& type);

MCAPI ::Geometry::ItemDisplayTransform
parseItemDisplayTransform(::Json::Value const& itemTransform, ::ClientBlockPipeline::ItemTransforms::Type const& type);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::vector<::std::string> const& mTypeNames();
// NOLINTEND

} // namespace ClientBlockPipeline::ItemTransforms
