/**
 * @file  EducationLevelSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure EducationLevelSettings.
 *
 */
struct EducationLevelSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @symbol  ??0EducationLevelSettings\@\@QEAA\@XZ
     */
    MCAPI EducationLevelSettings();
    /**
     * @symbol  ??0EducationLevelSettings\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI EducationLevelSettings(struct EducationLevelSettings const &);
    /**
     * @symbol  ?getCommandOverrideFunctor\@EducationLevelSettings\@\@QEBA?AV?$function\@$$A6AXAEAUCommandFlag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@XZ
     */
    MCAPI class std::function<void (struct CommandFlag &, std::string const &)> getCommandOverrideFunctor() const;
    /**
     * @symbol  ??4EducationLevelSettings\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct EducationLevelSettings & operator=(struct EducationLevelSettings const &);
    /**
     * @symbol  ?save\@EducationLevelSettings\@\@QEAAXAEBVLevelLooseFileStorage\@\@\@Z
     */
    MCAPI void save(class LevelLooseFileStorage const &);
    /**
     * @symbol  ??1EducationLevelSettings\@\@QEAA\@XZ
     */
    MCAPI ~EducationLevelSettings();
    /**
     * @symbol  ?DEFAULT_BORDER_PATH\@EducationLevelSettings\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_BORDER_PATH;

};