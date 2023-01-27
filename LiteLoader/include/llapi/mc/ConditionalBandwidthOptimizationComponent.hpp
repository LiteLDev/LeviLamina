/**
 * @file  ConditionalBandwidthOptimizationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConditionalBandwidthOptimizationComponent.
 *
 */
class ConditionalBandwidthOptimizationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDITIONALBANDWIDTHOPTIMIZATIONCOMPONENT
public:
    class ConditionalBandwidthOptimizationComponent& operator=(class ConditionalBandwidthOptimizationComponent const &) = delete;
    ConditionalBandwidthOptimizationComponent(class ConditionalBandwidthOptimizationComponent const &) = delete;
    ConditionalBandwidthOptimizationComponent() = delete;
#endif

public:
    /**
     * @hash   -1893249581
     * @symbol  ??0ConditionalBandwidthOptimizationComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ConditionalBandwidthOptimizationComponent(class ConditionalBandwidthOptimizationComponent &&);
    /**
     * @hash   -377710147
     * @symbol  ?getCurrentOptimizationValues\@ConditionalBandwidthOptimizationComponent\@\@QEAA?AUConditionalBandwidthOptimization\@\@AEAVActor\@\@\@Z
     */
    MCAPI struct ConditionalBandwidthOptimization getCurrentOptimizationValues(class Actor &);
    /**
     * @hash   392158835
     * @symbol  ?initFromDefinition\@ConditionalBandwidthOptimizationComponent\@\@QEAAXAEAVActor\@\@AEBVConditionalBandwidthOptimizationDefinition\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &, class ConditionalBandwidthOptimizationDefinition const &);
    /**
     * @hash   665936862
     * @symbol  ??4ConditionalBandwidthOptimizationComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ConditionalBandwidthOptimizationComponent & operator=(class ConditionalBandwidthOptimizationComponent &&);
    /**
     * @hash   385444481
     * @symbol  ??1ConditionalBandwidthOptimizationComponent\@\@QEAA\@XZ
     */
    MCAPI ~ConditionalBandwidthOptimizationComponent();

};