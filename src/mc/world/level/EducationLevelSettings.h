#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EducationLevelSettings {
public:
    // NOLINTBEGIN
    MCAPI EducationLevelSettings();

    MCAPI EducationLevelSettings(struct EducationLevelSettings const&);

    MCAPI std::function<void(struct CommandFlag&, std::string const&)> getCommandOverrideFunctor() const;

    MCAPI struct EducationLevelSettings& operator=(struct EducationLevelSettings const&);

    MCAPI ~EducationLevelSettings();

    MCAPI static std::string const DEFAULT_BORDER_PATH;

    // NOLINTEND
};
