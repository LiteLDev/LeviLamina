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
    ConditionalBandwidthOptimizationDefinition& operator=(ConditionalBandwidthOptimizationDefinition const&) = delete;
    ConditionalBandwidthOptimizationDefinition(ConditionalBandwidthOptimizationDefinition const&)            = delete;
    ConditionalBandwidthOptimizationDefinition()                                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?addConditionalBandwidthOptimization\@ConditionalBandwidthOptimizationDefinition\@\@QEAAXAEBUConditionalBandwidthOptimization\@\@\@Z
     */
    MCAPI void addConditionalBandwidthOptimization(struct ConditionalBandwidthOptimization const&);
    /**
     * @symbol
     * ?addDefaultBandwidthOptimization\@ConditionalBandwidthOptimizationDefinition\@\@QEAAXAEBUConditionalBandwidthOptimization\@\@\@Z
     */
    MCAPI void addDefaultBandwidthOptimization(struct ConditionalBandwidthOptimization const&);
    /**
     * @symbol
     * ?buildSchema\@ConditionalBandwidthOptimizationDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VConditionalBandwidthOptimizationDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class ConditionalBandwidthOptimizationDefinition>>&);
    /**
     * @symbol
     * ?initialize\@ConditionalBandwidthOptimizationDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVConditionalBandwidthOptimizationComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ConditionalBandwidthOptimizationComponent&) const;
    /**
     * @symbol ??1ConditionalBandwidthOptimizationDefinition\@\@QEAA\@XZ
     */
    MCAPI ~ConditionalBandwidthOptimizationDefinition();
    // NOLINTEND
};
