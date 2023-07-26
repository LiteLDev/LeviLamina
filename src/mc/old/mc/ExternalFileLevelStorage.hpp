/**
 * @file  ExternalFileLevelStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ExternalFileLevelStorage.
 *
 */
namespace ExternalFileLevelStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?_readLevelDataFromFile\@ExternalFileLevelStorage\@\@YA?AVResult\@Core\@\@AEBVPath\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelData\@\@\@Z
     */
    MCAPI class Core::Result _readLevelDataFromFile(class Core::Path const &, std::string const &, class LevelData &);
    /**
     * @symbol  ?_writeLevelDat\@ExternalFileLevelStorage\@\@YA_NAEBVPath\@Core\@\@AEBVLevelData\@\@\@Z
     */
    MCAPI bool _writeLevelDat(class Core::Path const &, class LevelData const &);
    /**
     * @symbol  ?getAccessStrategy\@ExternalFileLevelStorage\@\@YA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVPath\@Core\@\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI std::unique_ptr<class PackAccessStrategy> getAccessStrategy(class Core::Path const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    /**
     * @symbol  ?getImportantFiles\@ExternalFileLevelStorage\@\@YA?BV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const getImportantFiles();
    /**
     * @symbol  ?getLevelIDFromPath\@ExternalFileLevelStorage\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@0\@Z
     */
    MCAPI std::string getLevelIDFromPath(class Core::Path const &, class Core::Path const &);
    /**
     * @symbol  ?isLevelMarkedForSync\@ExternalFileLevelStorage\@\@YA_NAEBVPath\@Core\@\@\@Z
     */
    MCAPI bool isLevelMarkedForSync(class Core::Path const &);
    /**
     * @symbol  ?makeReadableLevelnameFile\@ExternalFileLevelStorage\@\@YAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void makeReadableLevelnameFile(class Core::Path const &, std::string const &);
    /**
     * @symbol  ?readLevelDataFromData\@ExternalFileLevelStorage\@\@YA?AVResult\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelData\@\@\@Z
     */
    MCAPI class Core::Result readLevelDataFromData(std::string const &, class LevelData &);
    /**
     * @symbol  ?readLevelDataFromFile\@ExternalFileLevelStorage\@\@YA?AVResult\@Core\@\@AEBVPath\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelData\@\@\@Z
     */
    MCAPI class Core::Result readLevelDataFromFile(class Core::Path const &, std::string const &, class LevelData &);
    /**
     * @symbol  ?readShallowLevelSummaryFromSyncFile\@ExternalFileLevelStorage\@\@YA_NAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAULevelSummary\@\@\@Z
     */
    MCAPI bool readShallowLevelSummaryFromSyncFile(class Core::Path const &, std::string const &, struct LevelSummary &);
    /**
     * @symbol  ?readSyncFileData\@ExternalFileLevelStorage\@\@YA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEA_J2AEA_N\@Z
     */
    MCAPI bool readSyncFileData(class Core::Path const &, std::string &, __int64 &, __int64 &, bool &);
    /**
     * @symbol  ?saveLevelData\@ExternalFileLevelStorage\@\@YAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelData\@\@_N\@Z
     */
    MCAPI void saveLevelData(class Core::Path const &, std::string const &, class LevelData const &, bool);
    /**
     * @symbol  ?saveLevelDataToPath\@ExternalFileLevelStorage\@\@YAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelData\@\@\@Z
     */
    MCAPI void saveLevelDataToPath(class Core::Path const &, std::string const &, class LevelData const &);
    /**
     * @symbol  ?saveLevelDisplayDataToCache\@ExternalFileLevelStorage\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelData\@\@V?$not_null\@PEAVTaskGroup\@\@\@gsl\@\@\@Z
     */
    MCAPI void saveLevelDisplayDataToCache(std::string const &, class LevelData const &, class gsl::not_null<class TaskGroup *>);
    /**
     * @symbol  ?validateLevelDat\@ExternalFileLevelStorage\@\@YA?AVResult\@Core\@\@VPath\@3\@\@Z
     */
    MCAPI class Core::Result validateLevelDat(class Core::Path);

};