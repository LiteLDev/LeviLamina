#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FogCommandComponent {
public:
    // prevent constructor by default
    FogCommandComponent& operator=(FogCommandComponent const&);
    FogCommandComponent(FogCommandComponent const&);
    FogCommandComponent();

public:
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI std::vector<std::string> getFogSettingsStack() const;

    MCAPI class FogCommandComponent& operator=(class FogCommandComponent&&);

    MCAPI bool popFogSetting(std::string const& userProvidedId);

    MCAPI bool pushFogSetting(std::string const& fogId, std::string const& userProvidedId);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI bool removeFogSettings(std::string const& userProvidedId);

    // NOLINTEND
};
