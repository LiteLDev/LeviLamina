#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct EducationLevelSettings;
// clang-format on

class EducationSettingsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 328> mUnk5c2b49;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationSettingsManager& operator=(EducationSettingsManager const&);
    EducationSettingsManager(EducationSettingsManager const&);
    EducationSettingsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::EducationLevelSettings> const& getEducationLevelSettings() const;

    MCAPI void setEducationLevelSettings(::EducationLevelSettings settings);
    // NOLINTEND
};
