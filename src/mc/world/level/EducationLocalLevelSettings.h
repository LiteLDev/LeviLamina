#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EducationLocalLevelSettings {

public:
    std::optional<std::string> mCodeBuilderOverrideUri;
    bool                       mHasQuiz;

    // prevent constructor by default
    EducationLocalLevelSettings& operator=(EducationLocalLevelSettings const&) = delete;
    EducationLocalLevelSettings(EducationLocalLevelSettings const&)            = delete;
    EducationLocalLevelSettings()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1EducationLocalLevelSettings\@\@QEAA\@XZ
     */
    MCAPI ~EducationLocalLevelSettings();
    // NOLINTEND
};
