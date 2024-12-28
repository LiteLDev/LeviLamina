#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonParseState.h"
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/level/levelgen/feature/feature_loading/ConcreteFeatureHolder.h"

// auto generated forward declare list
// clang-format off
class ScatterFeature;
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { class EmptyClass; }
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
