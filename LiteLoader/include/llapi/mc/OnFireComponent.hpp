/**
 * @file  MC/OnFireComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnFireComponent.
 *
 */
class OnFireComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFIRECOMPONENT
public:
    class OnFireComponent& operator=(class OnFireComponent const &) = delete;
    OnFireComponent(class OnFireComponent const &) = delete;
    OnFireComponent() = delete;
#endif

public:
    /**
     * @hash   -1401538055
     * @symbol ?addAdditionalSaveData@OnFireComponent@@QEBAXAEBVActor@@AEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const &, class CompoundTag &) const;
    /**
     * @hash   -711580501
     * @symbol ?readAdditionalSaveData@OnFireComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &);
    /**
     * @hash   655741714
     * @symbol ?convertFromLegacyData@OnFireComponent@@SAXAEBVCompoundTag@@AEAV2@@Z
     */
    MCAPI static void convertFromLegacyData(class CompoundTag const &, class CompoundTag &);
    /**
     * @hash   1024789219
     * @symbol ?needsLegacyConversion@OnFireComponent@@SA_NAEBVCompoundTag@@@Z
     */
    MCAPI static bool needsLegacyConversion(class CompoundTag const &);

//private:

private:
    /**
     * @hash   -276481422
     * @symbol ?LEGACY_FIRE_TAG@OnFireComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const LEGACY_FIRE_TAG;
    /**
     * @hash   -831047300
     * @symbol ?ON_FIRE_TAG@OnFireComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const ON_FIRE_TAG;

};