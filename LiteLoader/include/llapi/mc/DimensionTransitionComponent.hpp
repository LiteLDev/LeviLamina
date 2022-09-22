/**
 * @file  DimensionTransitionComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1465839112
     * @symbol ?addAdditionalSaveData@DimensionTransitionComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -874807714
     * @symbol ?readAdditionalSaveData@DimensionTransitionComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1709934615
     * @symbol ?AXIS_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const AXIS_TAG;
    /**
     * @hash   -1196739375
     * @symbol ?COMPONENT_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const COMPONENT_TAG;
    /**
     * @hash   721499299
     * @symbol ?DIMENSION_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DIMENSION_TAG;
    /**
     * @hash   2046108953
     * @symbol ?POSITION_X_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const POSITION_X_TAG;
    /**
     * @hash   1732597691
     * @symbol ?POSITION_Y_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const POSITION_Y_TAG;
    /**
     * @hash   1419086429
     * @symbol ?POSITION_Z_TAG@DimensionTransitionComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const POSITION_Z_TAG;

};