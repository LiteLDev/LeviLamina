/**
 * @file  MC/EducationLevelSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -14753573
     * @symbol ??0EducationLevelSettings@@QEAA@XZ
     */
    MCAPI EducationLevelSettings();
    /**
     * @hash   -1871976289
     * @symbol ??0EducationLevelSettings@@QEAA@AEBU0@@Z
     */
    MCAPI EducationLevelSettings(struct EducationLevelSettings const &);
    /**
     * @hash   1667638902
     * @symbol ?getCommandOverrideFunctor@EducationLevelSettings@@QEBA?AV?$function@$$A6AXAEAUCommandFlag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@XZ
     */
    MCAPI class std::function<void (struct CommandFlag &, std::string const &)> getCommandOverrideFunctor() const;
    /**
     * @hash   -1550688506
     * @symbol ??4EducationLevelSettings@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct EducationLevelSettings & operator=(struct EducationLevelSettings const &);
    /**
     * @hash   514273078
     * @symbol ?save@EducationLevelSettings@@QEAAXAEBVLevelLooseFileStorage@@@Z
     */
    MCAPI void save(class LevelLooseFileStorage const &);
    /**
     * @hash   1128013305
     * @symbol ??1EducationLevelSettings@@QEAA@XZ
     */
    MCAPI ~EducationLevelSettings();
    /**
     * @hash   -1094100413
     * @symbol ?DEFAULT_BORDER_PATH@EducationLevelSettings@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DEFAULT_BORDER_PATH;

};