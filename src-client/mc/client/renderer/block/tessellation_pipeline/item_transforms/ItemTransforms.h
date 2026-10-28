#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/Geometry.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/item/ItemTransformType.h"

// auto generated forward declare list
// clang-format off
class Matrix;
namespace Json { class Value; }
// clang-format on

namespace ClientBlockPipeline::ItemTransforms {
// functions
// NOLINTBEGIN
MCAPI ::Matrix _constructFixSpaceTransform(::ItemTransformType const& type);

MCAPI ::Matrix constructTransform(::ItemTransformType const& type, ::Geometry::ItemDisplayTransform const& transforms);

MCAPI ::Matrix getDefaultTransformMatrix(::ItemTransformType const& type);

MCAPI ::Geometry::ItemDisplayTransform getDefaultTransforms(::ItemTransformType const& type);

MCAPI ::Matrix getFixSpaceTransformMatrix(::ItemTransformType const& type);

MCAPI ::ItemTransformType getTypeFromString(::std::string_view type);

MCAPI ::Geometry::ItemDisplayTransform
parseItemDisplayTransform(::Json::Value const& itemTransform, ::ItemTransformType const& type);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::Bedrock::DenseEnumMap<::ItemTransformType, ::std::string_view, 10> const& mTypeNames();
// NOLINTEND

} // namespace ClientBlockPipeline::ItemTransforms
