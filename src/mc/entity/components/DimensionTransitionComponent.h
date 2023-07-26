#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DimensionTransitionComponent {

public:
    // prevent constructor by default
    DimensionTransitionComponent& operator=(DimensionTransitionComponent const&) = delete;
    DimensionTransitionComponent(DimensionTransitionComponent const&)            = delete;
    DimensionTransitionComponent()                                               = delete;

public:
    /**
     * @symbol ?addAdditionalSaveData\@DimensionTransitionComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@DimensionTransitionComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol
     * ?AXIS_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AXIS_TAG; // NOLINT
    /**
     * @symbol
     * ?COMPONENT_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const COMPONENT_TAG; // NOLINT
    /**
     * @symbol
     * ?DIMENSION_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIMENSION_TAG; // NOLINT
    /**
     * @symbol
     * ?POSITION_X_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const POSITION_X_TAG; // NOLINT
    /**
     * @symbol
     * ?POSITION_Y_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const POSITION_Y_TAG; // NOLINT
    /**
     * @symbol
     * ?POSITION_Z_TAG\@DimensionTransitionComponent\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const POSITION_Z_TAG; // NOLINT
};
