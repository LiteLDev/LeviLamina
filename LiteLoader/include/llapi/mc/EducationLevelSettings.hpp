/**
 * @file  EducationLevelSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -925427925
     * @symbol  ??0EducationLevelSettings\@\@QEAA\@XZ
     */
    MCAPI EducationLevelSettings();
    /**
     * @hash   -1780120065
     * @symbol  ??0EducationLevelSettings\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI EducationLevelSettings(struct EducationLevelSettings const &);
    /**
     * @hash   -1773237722
     * @symbol  ?getCommandOverrideFunctor\@EducationLevelSettings\@\@QEBA?AV?$function\@$$A6AXAEAUCommandFlag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@XZ
     */
    MCAPI class std::function<void (struct CommandFlag &, std::string const &)> getCommandOverrideFunctor() const;
    /**
     * @hash   1833604438
     * @symbol  ??4EducationLevelSettings\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct EducationLevelSettings & operator=(struct EducationLevelSettings const &);
    /**
     * @hash   1368348374
     * @symbol  ?save\@EducationLevelSettings\@\@QEAAXAEBVLevelLooseFileStorage\@\@\@Z
     */
    MCAPI void save(class LevelLooseFileStorage const &);
    /**
     * @hash   1220745961
     * @symbol  ??1EducationLevelSettings\@\@QEAA\@XZ
     */
    MCAPI ~EducationLevelSettings();
    /**
     * @hash   897706627
     * @symbol  ?DEFAULT_BORDER_PATH\@EducationLevelSettings\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_BORDER_PATH;

};