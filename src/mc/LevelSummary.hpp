/**
 * @file  LevelSummary.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


struct LevelSummary {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @symbol  ??0LevelSummary\@\@QEAA\@XZ
     */
    MCAPI LevelSummary();
    /**
     * @symbol  ??0LevelSummary\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelData\@\@AEBVPath\@Core\@\@2_N\@Z
     */
    MCAPI LevelSummary(std::string const &, class LevelData const &, class Core::Path const &, class Core::Path const &, bool);
    /**
     * @symbol  ??0LevelSummary\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_JW4GameType\@\@W4Difficulty\@\@VLevelSeed64\@\@H_K_N6W4GamePublishSetting\@Social\@\@6W4EducationEditionOffer\@\@AEBVGameVersion\@\@9W4StorageVersion\@\@AEBVPath\@Core\@\@AEBVContentIdentity\@\@0_NAEBUEduSharedUriResource\@\@AEBVExperiments\@\@AEBVBaseGameVersion\@\@6\@Z
     */
    MCAPI LevelSummary(std::string const &, std::string const &, __int64, enum class GameType, enum class Difficulty, class LevelSeed64, int, unsigned __int64, bool, bool, enum class Social::GamePublishSetting, bool, enum class EducationEditionOffer, class GameVersion const &, class GameVersion const &, enum class StorageVersion, class Core::Path const &, class ContentIdentity const &, std::string const &, bool, struct EduSharedUriResource const &, class Experiments const &, class BaseGameVersion const &, bool);
    /**
     * @symbol  ??0LevelSummary\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI LevelSummary(struct LevelSummary const &);
    /**
     * @symbol  ??4LevelSummary\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct LevelSummary & operator=(struct LevelSummary const &);
    /**
     * @symbol  ?reinitializeWorldIconPath\@LevelSummary\@\@QEAAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI void reinitializeWorldIconPath(class Core::Path const &);
    /**
     * @symbol  ?reinitializeWorldSize\@LevelSummary\@\@QEAAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI void reinitializeWorldSize(class Core::Path const &);
    /**
     * @symbol  ?setName\@LevelSummary\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(std::string);
    /**
     * @symbol  ??1LevelSummary\@\@QEAA\@XZ
     */
    MCAPI ~LevelSummary();
    /**
     * @symbol  ?CUSTOM_ICON_FILENAME\@LevelSummary\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const CUSTOM_ICON_FILENAME;
    /**
     * @symbol  ?DEFAULT_WORLD_ICON_FILENAME\@LevelSummary\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_WORLD_ICON_FILENAME;
    /**
     * @symbol  ?INVALID_LEVEL_ID\@LevelSummary\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const INVALID_LEVEL_ID;
    /**
     * @symbol  ?WORLD_ICON_FILENAME\@LevelSummary\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const WORLD_ICON_FILENAME;
    /**
     * @symbol  ?buildCustomIconPath\@LevelSummary\@\@SA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCAPI static class Core::PathBuffer<std::string> buildCustomIconPath(class Core::Path const &);
    /**
     * @symbol  ?buildWorldIconPath\@LevelSummary\@\@SA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCAPI static class Core::PathBuffer<std::string> buildWorldIconPath(class Core::Path const &);

//private:
    /**
     * @symbol  ?_initializeWorldIconPath\@LevelSummary\@\@AEAAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI void _initializeWorldIconPath(class Core::Path const &);

};