#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ConditionalBandwidthOptimizationDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDITIONALBANDWIDTHOPTIMIZATIONDEFINITION
public:
    ConditionalBandwidthOptimizationDefinition& operator=(ConditionalBandwidthOptimizationDefinition const&) = delete;
    ConditionalBandwidthOptimizationDefinition(ConditionalBandwidthOptimizationDefinition const&)            = delete;
    ConditionalBandwidthOptimizationDefinition()                                                             = delete;
#endif

public:
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
     * ?initialize\@ConditionalBandwidthOptimizationDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVConditionalBandwidthOptimizationComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ConditionalBandwidthOptimizationComponent&) const;
    /**
     * @symbol ??1ConditionalBandwidthOptimizationDefinition\@\@QEAA\@XZ
     */
    MCAPI ~ConditionalBandwidthOptimizationDefinition();
    /**
     * @symbol
     * ?buildSchema\@ConditionalBandwidthOptimizationDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VConditionalBandwidthOptimizationDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class ConditionalBandwidthOptimizationDefinition>>&);
};
