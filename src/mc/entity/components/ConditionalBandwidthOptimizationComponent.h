#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConditionalBandwidthOptimizationComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDITIONALBANDWIDTHOPTIMIZATIONCOMPONENT
public:
    ConditionalBandwidthOptimizationComponent& operator=(ConditionalBandwidthOptimizationComponent const&) = delete;
    ConditionalBandwidthOptimizationComponent(ConditionalBandwidthOptimizationComponent const&)            = delete;
    ConditionalBandwidthOptimizationComponent()                                                            = delete;
#endif

public:
    /**
     * @symbol ??0ConditionalBandwidthOptimizationComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ConditionalBandwidthOptimizationComponent(class ConditionalBandwidthOptimizationComponent&&);
    /**
     * @symbol
     * ?getCurrentOptimizationValues\@ConditionalBandwidthOptimizationComponent\@\@QEAA?AUConditionalBandwidthOptimization\@\@AEAVActor\@\@\@Z
     */
    MCAPI struct ConditionalBandwidthOptimization getCurrentOptimizationValues(class Actor&);
    /**
     * @symbol
     * ?initFromDefinition\@ConditionalBandwidthOptimizationComponent\@\@QEAAXAEAVActor\@\@AEBVConditionalBandwidthOptimizationDefinition\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&, class ConditionalBandwidthOptimizationDefinition const&);
    /**
     * @symbol ??4ConditionalBandwidthOptimizationComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ConditionalBandwidthOptimizationComponent& operator=(class ConditionalBandwidthOptimizationComponent&&);
    /**
     * @symbol ??1ConditionalBandwidthOptimizationComponent\@\@QEAA\@XZ
     */
    MCAPI ~ConditionalBandwidthOptimizationComponent();
};
