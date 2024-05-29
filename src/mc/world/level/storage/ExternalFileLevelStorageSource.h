#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/storage/LevelStorageSource.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class ExternalFileLevelStorageSource : public ::LevelStorageSource {
public:
    // prevent constructor by default
    ExternalFileLevelStorageSource& operator=(ExternalFileLevelStorageSource const&);
    ExternalFileLevelStorageSource(ExternalFileLevelStorageSource const&);
    ExternalFileLevelStorageSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ExternalFileLevelStorageSource@@UEAA@XZ
    virtual ~ExternalFileLevelStorageSource();

    // vIndex: 1, symbol:
    // ?getName@ExternalFileLevelStorageSource@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const;

    // vIndex: 2, symbol:
    // ?getLevelData@ExternalFileLevelStorageSource@@UEBA?AVResult@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelData@@@Z
    virtual class Core::Result getLevelData(std::string const& levelId, class LevelData& levelDataOut) const;

    // vIndex: 3, symbol:
    // ?saveLevelData@ExternalFileLevelStorageSource@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelData@@@Z
    virtual void saveLevelData(std::string const& levelId, class LevelData const& data);

    // vIndex: 4, symbol:
    // ?getLevelList@ExternalFileLevelStorageSource@@UEAAXAEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@@Z
    virtual void getLevelList(std::vector<class Core::PathBuffer<std::string>>& paths);

    // vIndex: 5, symbol:
    // ?createLevelStorage@ExternalFileLevelStorageSource@@UEAA?AV?$OwnerPtr@VLevelStorage@@@@AEAVScheduler@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@5@V?$not_null@V?$NonOwnerPointer@VLevelDbEnv@@@Bedrock@@@8@V?$unique_ptr@VLevelStorageEventing@@U?$default_delete@VLevelStorageEventing@@@std@@@5@@Z
    virtual class
        OwnerPtr<class LevelStorage>
        createLevelStorage(class Scheduler& scheduler, std::string const& levelId, class ContentIdentity const& contentIdentity, Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider, std::chrono::nanoseconds const& writeFlushInterval, Bedrock::NotNullNonOwnerPtr<class LevelDbEnv> levelDbEnv, std::unique_ptr<class LevelStorageEventing>);

    // vIndex: 6, symbol:
    // ?createLevelLooseStorage@ExternalFileLevelStorageSource@@UEAA?AV?$unique_ptr@VLevelLooseFileStorage@@U?$default_delete@VLevelLooseFileStorage@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual std::unique_ptr<class LevelLooseFileStorage> createLevelLooseStorage(
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // vIndex: 7, symbol:
    // ?deleteLevel@ExternalFileLevelStorageSource@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void deleteLevel(std::string const& levelId);

    // vIndex: 8, symbol:
    // ?renameLevel@ExternalFileLevelStorageSource@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool renameLevel(std::string const& levelId, std::string const& newLevelName);

    // vIndex: 9, symbol:
    // ?renameLevel@ExternalFileLevelStorageSource@@UEAAXAEAVLevelData@@AEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void
    renameLevel(class LevelData& levelData, class Core::Path const& fullPath, std::string const& newLevelName);

    // vIndex: 10, symbol:
    // ?createBackupCopyOfWorld@ExternalFileLevelStorageSource@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    virtual bool
    createBackupCopyOfWorld(std::string const& levelId, std::string const& newLeveId, std::string const& newName);

    // vIndex: 11, symbol: ?isLevelMarkedForSync@ExternalFileLevelStorageSource@@UEBA_NAEBVPath@Core@@@Z
    virtual bool isLevelMarkedForSync(class Core::Path const& levelPath) const;

    // vIndex: 12, symbol: ?isLevelPartiallyCopied@ExternalFileLevelStorageSource@@UEBA_NAEBVPath@Core@@@Z
    virtual bool isLevelPartiallyCopied(class Core::Path const& levelPath) const;

    // vIndex: 13, symbol:
    // ?getLevelDatFoundPath@ExternalFileLevelStorageSource@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
    virtual class Core::PathBuffer<std::string> getLevelDatFoundPath(class Core::Path const&) const;

    // vIndex: 14, symbol:
    // ?getBasePath@ExternalFileLevelStorageSource@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getBasePath() const;

    // vIndex: 15, symbol:
    // ?getPathToLevel@ExternalFileLevelStorageSource@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class Core::PathBuffer<std::string> const getPathToLevel(std::string const& levelId) const;

    // vIndex: 16, symbol:
    // ?getPathToLevelInfo@ExternalFileLevelStorageSource@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual class Core::PathBuffer<std::string> const
    getPathToLevelInfo(std::string const& levelId, bool forceInfo) const;

    // vIndex: 17, symbol:
    // ?isBetaRetailLevel@ExternalFileLevelStorageSource@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isBetaRetailLevel(std::string const& levelId) const;

    // symbol:
    // ??0ExternalFileLevelStorageSource@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VFilePathManager@Core@@@Bedrock@@@gsl@@AEBV?$not_null@V?$NonOwnerPointer@VSaveTransactionManager@@@Bedrock@@@2@@Z
    MCAPI ExternalFileLevelStorageSource(
        Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&  pathManager,
        Bedrock::NotNullNonOwnerPtr<class SaveTransactionManager> const& saveTransactionManager
    );

    // NOLINTEND
};
