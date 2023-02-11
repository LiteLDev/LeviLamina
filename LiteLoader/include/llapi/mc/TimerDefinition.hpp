/**
 * @file  TimerDefinition.hpp
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
 * @brief MC class TimerDefinition.
 *
 */
class TimerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMERDEFINITION
public:
    class TimerDefinition& operator=(class TimerDefinition const &) = delete;
    TimerDefinition(class TimerDefinition const &) = delete;
#endif

public:
    /**
     * @hash   929322084
     * @symbol  ??0TimerDefinition\@\@QEAA\@XZ
     */
    MCAPI TimerDefinition();
    /**
     * @hash   -616234848
     * @symbol  ?addWeightedChoiceEntry\@TimerDefinition\@\@QEAAXAEBUWeightChoiceEntry\@\@\@Z
     */
    MCAPI void addWeightedChoiceEntry(struct WeightChoiceEntry const &);
    /**
     * @hash   -1933373787
     * @symbol  ?initialize\@TimerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVTimerComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class TimerComponent &) const;
    /**
     * @hash   -743388910
     * @symbol  ?buildSchema\@TimerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VTimerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TimerDefinition>> &);

};