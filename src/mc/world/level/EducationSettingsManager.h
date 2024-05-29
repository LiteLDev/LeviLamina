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
    // symbol: ?getEducationLevelSettings@EducationSettingsManager@@QEBAAEBV?$optional@UEducationLevelSettings@@@std@@XZ
    MCAPI std::optional<struct EducationLevelSettings> const& getEducationLevelSettings() const;

    // symbol: ?setEducationLevelSettings@EducationSettingsManager@@QEAAXUEducationLevelSettings@@@Z
    MCAPI void setEducationLevelSettings(struct EducationLevelSettings);

    // NOLINTEND
};
