#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EducationSettingsManager {
public:
    // prevent constructor by default
    EducationSettingsManager& operator=(EducationSettingsManager const&);
    EducationSettingsManager(EducationSettingsManager const&);
    EducationSettingsManager();

public:
    // NOLINTBEGIN
    MCAPI std::optional<struct EducationLevelSettings> const& getEducationLevelSettings() const;

    MCAPI void setEducationLevelSettings(struct EducationLevelSettings settings);

    // NOLINTEND
};
