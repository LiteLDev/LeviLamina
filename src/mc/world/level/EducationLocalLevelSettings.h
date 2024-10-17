#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EducationLocalLevelSettings {
public:
    std::string mCodeBuilderOverrideUri;
    bool        mHasQuiz;

    // prevent constructor by default
    EducationLocalLevelSettings& operator=(EducationLocalLevelSettings const&);
    EducationLocalLevelSettings(EducationLocalLevelSettings const&);
    EducationLocalLevelSettings();

public:
    // NOLINTBEGIN
    MCAPI ~EducationLocalLevelSettings();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
