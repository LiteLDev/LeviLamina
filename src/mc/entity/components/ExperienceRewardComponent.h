#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperienceRewardComponent {

public:
    // prevent constructor by default
    ExperienceRewardComponent& operator=(ExperienceRewardComponent const&) = delete;
    ExperienceRewardComponent(ExperienceRewardComponent const&)            = delete;
    ExperienceRewardComponent()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addAdditionalSaveData\@ExperienceRewardComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?getIsExperienceDropEnabled\@ExperienceRewardComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsExperienceDropEnabled() const;
    /**
     * @symbol ?getOnBredExperience\@ExperienceRewardComponent\@\@QEBAHAEAVActor\@\@\@Z
     */
    MCAPI int getOnBredExperience(class Actor&) const;
    /**
     * @symbol ?getOnDeathExperience\@ExperienceRewardComponent\@\@QEBAHAEAVActor\@\@\@Z
     */
    MCAPI int getOnDeathExperience(class Actor&) const;
    /**
     * @symbol ??4ExperienceRewardComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ExperienceRewardComponent& operator=(class ExperienceRewardComponent&&);
    /**
     * @symbol
     * ?readAdditionalSaveData\@ExperienceRewardComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?setIsExperienceDropEnabled\@ExperienceRewardComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setIsExperienceDropEnabled(bool);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mIsExperienceDropEnabledTag\@ExperienceRewardComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mIsExperienceDropEnabledTag;
    // NOLINTEND
};
