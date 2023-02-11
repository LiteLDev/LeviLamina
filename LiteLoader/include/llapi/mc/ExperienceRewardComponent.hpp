/**
 * @file  ExperienceRewardComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -11215912
     * @symbol  ?addAdditionalSaveData\@ExperienceRewardComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   703349336
     * @symbol  ?getIsExperienceDropEnabled\@ExperienceRewardComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsExperienceDropEnabled() const;
    /**
     * @hash   -1306920951
     * @symbol  ?getOnBredExperience\@ExperienceRewardComponent\@\@QEBAHAEAVActor\@\@\@Z
     */
    MCAPI int getOnBredExperience(class Actor &) const;
    /**
     * @hash   1700823237
     * @symbol  ?getOnDeathExperience\@ExperienceRewardComponent\@\@QEBAHAEAVActor\@\@\@Z
     */
    MCAPI int getOnDeathExperience(class Actor &) const;
    /**
     * @hash   -1613186132
     * @symbol  ??4ExperienceRewardComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ExperienceRewardComponent & operator=(class ExperienceRewardComponent &&);
    /**
     * @hash   827585576
     * @symbol  ?readAdditionalSaveData\@ExperienceRewardComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1518331764
     * @symbol  ?setIsExperienceDropEnabled\@ExperienceRewardComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setIsExperienceDropEnabled(bool);

//private:

private:
    /**
     * @hash   -264739552
     * @symbol  ?mIsExperienceDropEnabledTag\@ExperienceRewardComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mIsExperienceDropEnabledTag;

};