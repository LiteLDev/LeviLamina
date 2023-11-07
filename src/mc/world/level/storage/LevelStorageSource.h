#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class LevelStorageSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    LevelStorageSource& operator=(LevelStorageSource const&);
    LevelStorageSource(LevelStorageSource const&);
    LevelStorageSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LevelStorageSource@@UEAA@XZ
    virtual ~LevelStorageSource();

    // vIndex: 1, symbol:
    // ?getName@ExternalFileLevelStorageSource@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getName() const = 0;

    // vIndex: 2, symbol:
    // ?getLevelData@ExternalFileLevelStorageSource@@UEBA?AVLevelData@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class LevelData getLevelData(std::string const&) const = 0;

    // vIndex: 3, symbol:
    // ?getLevelData@ExternalFileLevelStorageSource@@UEBA?AVResult@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelData@@@Z
    virtual class Core::Result getLevelData(std::string const&, class LevelData&) const = 0;

    // vIndex: 4, symbol:
    // ?saveLevelData@ExternalFileLevelStorageSource@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelData@@@Z
    virtual void saveLevelData(std::string const&, class LevelData const&) = 0;

    // vIndex: 5, symbol:
    // ?getLevelList@ExternalFileLevelStorageSource@@UEAAXAEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@@Z
    virtual void getLevelList(std::vector<class Core::PathBuffer<std::string>>&) = 0;

    // vIndex: 6, symbol:
    // ?createLevelStorage@ExternalFileLevelStorageSource@@UEAA?AV?$OwnerPtrT@U?$SharePtrRefTraits@VLevelStorage@@@@@@AEAVScheduler@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@5@V?$not_null@V?$NonOwnerPointer@VLevelDbEnv@@@Bedrock@@@8@V?$unique_ptr@VLevelStorageEventing@@U?$default_delete@VLevelStorageEventing@@@std@@@5@@Z
    virtual class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>>
    createLevelStorage(class Scheduler&, std::string const&, class ContentIdentity const&, Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const&, std::chrono::nanoseconds const&, Bedrock::NotNullNonOwnerPtr<class LevelDbEnv>, std::unique_ptr<class LevelStorageEventing>) = 0;

    // vIndex: 7, symbol:
    // ?createLevelLooseStorage@ExternalFileLevelStorageSource@@UEAA?AV?$unique_ptr@VLevelLooseFileStorage@@U?$default_delete@VLevelLooseFileStorage@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVContentIdentity@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
    virtual std::unique_ptr<class LevelLooseFileStorage>
    createLevelLooseStorage(std::string const&, class ContentIdentity const&, Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const&) = 0;

    // vIndex: 8, symbol:
    // ?isNewLevelIdAcceptable@ExternalFileLevelStorageSource@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isNewLevelIdAcceptable(std::string const&) = 0;

    // vIndex: 9, symbol:
    // ?deleteLevel@ExternalFileLevelStorageSource@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void deleteLevel(std::string const&) = 0;

    // vIndex: 10, symbol:
    // ?renameLevel@ExternalFileLevelStorageSource@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool renameLevel(std::string const&, std::string const&) = 0;

    // vIndex: 11, symbol:
    // ?renameLevel@ExternalFileLevelStorageSource@@UEAAXAEAVLevelData@@AEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void renameLevel(class LevelData&, class Core::Path const&, std::string const&) = 0;

    // vIndex: 12, symbol:
    // ?createBackupCopyOfWorld@ExternalFileLevelStorageSource@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    virtual bool createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&) = 0;

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13() = 0;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14() = 0;

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15() = 0;

    // vIndex: 16, symbol: ?isLevelMarkedForSync@ExternalFileLevelStorageSource@@UEBA_NAEBVPath@Core@@@Z
    virtual bool isLevelMarkedForSync(class Core::Path const&) const = 0;

    // vIndex: 17, symbol: ?isLevelPartiallyCopied@ExternalFileLevelStorageSource@@UEBA_NAEBVPath@Core@@@Z
    virtual bool isLevelPartiallyCopied(class Core::Path const&) const = 0;

    // vIndex: 18, symbol:
    // ?getLevelDatFoundPath@ExternalFileLevelStorageSource@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
    virtual class Core::PathBuffer<std::string> getLevelDatFoundPath(class Core::Path const&) const = 0;

    // vIndex: 19, symbol:
    // ?getBasePath@ExternalFileLevelStorageSource@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getBasePath() const = 0;

    // vIndex: 20, symbol:
    // ?getPathToLevel@ExternalFileLevelStorageSource@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class Core::PathBuffer<std::string> const getPathToLevel(std::string const&) const = 0;

    // vIndex: 21, symbol:
    // ?getPathToLevelInfo@ExternalFileLevelStorageSource@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual class Core::PathBuffer<std::string> const getPathToLevelInfo(std::string const&, bool) const = 0;

    // symbol: ?WORLD_SAVE_FLUSH_INTERVAL@LevelStorageSource@@2V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@B
    MCAPI static std::chrono::nanoseconds const WORLD_SAVE_FLUSH_INTERVAL;

    // symbol:
    // ?WORLD_SAVE_MENU_FLUSH_INTERVAL@LevelStorageSource@@2V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@B
    MCAPI static std::chrono::nanoseconds const WORLD_SAVE_MENU_FLUSH_INTERVAL;

    // NOLINTEND
};
