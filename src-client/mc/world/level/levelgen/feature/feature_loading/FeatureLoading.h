#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonParseState.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/levelgen/feature/feature_loading/ConcreteFeatureHolder.h"

// auto generated forward declare list
// clang-format off
class ScatterFeature;
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { struct EmptyClass; }
// clang-format on

namespace FeatureLoading {
// functions
// NOLINTBEGIN
MCAPI void _addScatterParamsLegacySchema(
    ::JsonUtil::JsonSchemaObjectNode<
        ::JsonUtil::JsonParseState<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>,
        ::FeatureLoading::ConcreteFeatureHolder<::ScatterFeature>>& schemaNode
);
// NOLINTEND

} // namespace FeatureLoading
