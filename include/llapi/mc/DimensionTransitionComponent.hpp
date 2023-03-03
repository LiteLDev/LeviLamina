/**
 * @file  DimensionTransitionComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure DimensionTransitionComponent.
 *
 */
struct DimensionTransitionComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONTRANSITIONCOMPONENT
public:
    struct DimensionTransitionComponent& operator=(struct DimensionTransitionComponent const &) = delete;
    DimensionTransitionComponent(struct DimensionTransitionComponent const &) = delete;
    DimensionTransitionComponent() = delete;
#endif

public:
    /**
     * @symbol  ?addAdditionalSaveData\@DimensionTransitionComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?readAdditionalSaveData\@DimensionTransitionComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?AXIS_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AXIS_TAG;
    /**
     * @symbol  ?COMPONENT_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const COMPONENT_TAG;
    /**
     * @symbol  ?DIMENSION_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIMENSION_TAG;
    /**
     * @symbol  ?POSITION_X_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const POSITION_X_TAG;
    /**
     * @symbol  ?POSITION_Y_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const POSITION_Y_TAG;
    /**
     * @symbol  ?POSITION_Z_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const POSITION_Z_TAG;

};