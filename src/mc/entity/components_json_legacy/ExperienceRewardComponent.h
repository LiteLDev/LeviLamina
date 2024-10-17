#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperienceRewardComponent {
public:
    // prevent constructor by default
    ExperienceRewardComponent& operator=(ExperienceRewardComponent const&);
    ExperienceRewardComponent(ExperienceRewardComponent const&);
    ExperienceRewardComponent();

public:
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool getIsExperienceDropEnabled() const;

    MCAPI int getOnDeathExperience(class Actor& owner) const;

    MCAPI class ExperienceRewardComponent& operator=(class ExperienceRewardComponent&&);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void setIsExperienceDropEnabled(bool isExperienceDropEnabled);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::string const& mIsExperienceDropEnabledTag();

    // NOLINTEND
};
