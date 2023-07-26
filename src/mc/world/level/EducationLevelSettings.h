#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EducationLevelSettings {

public:
    /**
     * @symbol ??0EducationLevelSettings\@\@QEAA\@XZ
     */
    MCAPI EducationLevelSettings(); // NOLINT
    /**
     * @symbol ??0EducationLevelSettings\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI EducationLevelSettings(struct EducationLevelSettings const&); // NOLINT
    /**
     * @symbol
     * ?getCommandOverrideFunctor\@EducationLevelSettings\@\@QEBA?AV?$function\@$$A6AXAEAUCommandFlag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@XZ
     */
    MCAPI class std::function<void(struct CommandFlag&, std::string const&)>
    getCommandOverrideFunctor() const; // NOLINT
    /**
     * @symbol ??4EducationLevelSettings\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct EducationLevelSettings& operator=(struct EducationLevelSettings const&); // NOLINT
    /**
     * @symbol ??1EducationLevelSettings\@\@QEAA\@XZ
     */
    MCAPI ~EducationLevelSettings(); // NOLINT
    /**
     * @symbol
     * ?DEFAULT_BORDER_PATH\@EducationLevelSettings\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_BORDER_PATH; // NOLINT
};
