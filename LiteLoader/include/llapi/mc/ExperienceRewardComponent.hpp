/**
 * @file  MC/ExperienceRewardComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExperienceRewardComponent.
 *
 */
class ExperienceRewardComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEREWARDCOMPONENT
public:
    class ExperienceRewardComponent& operator=(class ExperienceRewardComponent const &) = delete;
    ExperienceRewardComponent(class ExperienceRewardComponent const &) = delete;
    ExperienceRewardComponent() = delete;
#endif

public:
    /**
     * @hash   951813720
     * @symbol ?addAdditionalSaveData@ExperienceRewardComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1666378968
     * @symbol ?getIsExperienceDropEnabled@ExperienceRewardComponent@@QEBA_NXZ
     */
    MCAPI bool getIsExperienceDropEnabled() const;
    /**
     * @hash   -343891319
     * @symbol ?getOnBredExperience@ExperienceRewardComponent@@QEBAHAEAVActor@@@Z
     */
    MCAPI int getOnBredExperience(class Actor &) const;
    /**
     * @hash   -1631114427
     * @symbol ?getOnDeathExperience@ExperienceRewardComponent@@QEBAHAEAVActor@@@Z
     */
    MCAPI int getOnDeathExperience(class Actor &) const;
    /**
     * @hash   -1740191892
     * @symbol ??4ExperienceRewardComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class ExperienceRewardComponent & operator=(class ExperienceRewardComponent &&);
    /**
     * @hash   1790615208
     * @symbol ?readAdditionalSaveData@ExperienceRewardComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1813605900
     * @symbol ?setIsExperienceDropEnabled@ExperienceRewardComponent@@QEAAX_N@Z
     */
    MCAPI void setIsExperienceDropEnabled(bool);

//private:

private:
    /**
     * @hash   -1932720344
     * @symbol ?mIsExperienceDropEnabledTag@ExperienceRewardComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const mIsExperienceDropEnabledTag;

};