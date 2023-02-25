/**
 * @file  ConditionalBandwidthOptimizationDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConditionalBandwidthOptimizationDefinition.
 *
 */
class ConditionalBandwidthOptimizationDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDITIONALBANDWIDTHOPTIMIZATIONDEFINITION
public:
    class ConditionalBandwidthOptimizationDefinition& operator=(class ConditionalBandwidthOptimizationDefinition const &) = delete;
    ConditionalBandwidthOptimizationDefinition(class ConditionalBandwidthOptimizationDefinition const &) = delete;
    ConditionalBandwidthOptimizationDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?addConditionalBandwidthOptimization\@ConditionalBandwidthOptimizationDefinition\@\@QEAAXAEBUConditionalBandwidthOptimization\@\@\@Z
     */
    MCAPI void addConditionalBandwidthOptimization(struct ConditionalBandwidthOptimization const &);
    /**
     * @symbol  ?addDefaultBandwidthOptimization\@ConditionalBandwidthOptimizationDefinition\@\@QEAAXAEBUConditionalBandwidthOptimization\@\@\@Z
     */
    MCAPI void addDefaultBandwidthOptimization(struct ConditionalBandwidthOptimization const &);
    /**
     * @symbol  ?initialize\@ConditionalBandwidthOptimizationDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVConditionalBandwidthOptimizationComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class ConditionalBandwidthOptimizationComponent &) const;
    /**
     * @symbol  ??1ConditionalBandwidthOptimizationDefinition\@\@QEAA\@XZ
     */
    MCAPI ~ConditionalBandwidthOptimizationDefinition();
    /**
     * @symbol  ?buildSchema\@ConditionalBandwidthOptimizationDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VConditionalBandwidthOptimizationDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ConditionalBandwidthOptimizationDefinition>> &);

};