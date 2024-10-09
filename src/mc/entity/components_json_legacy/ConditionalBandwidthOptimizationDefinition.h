#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ConditionalBandwidthOptimizationDefinition {
public:
    // prevent constructor by default
    ConditionalBandwidthOptimizationDefinition& operator=(ConditionalBandwidthOptimizationDefinition const&);
    ConditionalBandwidthOptimizationDefinition(ConditionalBandwidthOptimizationDefinition const&);
    ConditionalBandwidthOptimizationDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addConditionalBandwidthOptimization(struct ConditionalBandwidthOptimization const& optimization);

    MCAPI void addDefaultBandwidthOptimization(struct ConditionalBandwidthOptimization const& optimization);

    MCAPI void initialize(class EntityContext&, class ConditionalBandwidthOptimizationComponent& component) const;

    MCAPI ~ConditionalBandwidthOptimizationDefinition();

    MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class ConditionalBandwidthOptimizationDefinition>>& root);

    // NOLINTEND
};
