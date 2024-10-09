#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class LevelListCache {
public:
    // prevent constructor by default
    LevelListCache& operator=(LevelListCache const&);
    LevelListCache(LevelListCache const&);
    LevelListCache();

public:
    // NOLINTBEGIN
    MCVAPI void addLevel(std::string const& levelId, class LevelData&& levelData);

    MCVAPI void addObserver(class LevelListCacheObserver& observer);

    MCVAPI void
    createBackupCopyOfWorld(std::string const& levelId, std::string const& newLevelId, std::string const& newName);

    MCVAPI std::unique_ptr<class LevelLooseFileStorage> createLevelLooseStorage(
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    MCVAPI class OwnerPtr<class LevelStorage> createLevelStorage(
        class Scheduler&                                                    scheduler,
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        std::chrono::nanoseconds const&                                     writeFlushInterval,
        Bedrock::NotNullNonOwnerPtr<class LevelDbEnv>                       levelDbEnv,
        std::unique_ptr<class LevelStorageEventing>                         levelStorageEventing
    );

    MCVAPI std::unique_ptr<class LevelStorageObserver> createLevelStorageObserver();

    MCVAPI void deleteLevel(std::string const& levelId);

    MCVAPI void deleteLevelFiles(std::string const& levelId);

    MCVAPI class Core::PathBuffer<std::string> const getBasePath() const;

    MCVAPI class LevelData* getLevelData(std::string const& levelId);

    MCVAPI class StackRefResult<class LevelData> getLevelDataStackRefResult(std::string const& levelId);

    MCVAPI void getLevelList(
        std::vector<struct LevelSummary>& dest,
        bool                              includeShallowSummaries,
        bool                              includePartiallyCopiedLevels,
        bool                              includeBetaRetailLevels
    );

    MCVAPI struct LevelSummary* getLevelSummary(std::string const& levelId);

    MCVAPI struct LevelSummary const* getLevelSummaryByName(std::string const& levelName);

    MCVAPI struct LevelSummary* getOrCreateLevelSummary(class Core::Path const& directory);

    MCVAPI struct LevelSummary* getShallowLevelSummary(std::string const& levelId);

    MCVAPI bool hasCachedLevels(bool includeShallowSummaries) const;

    MCVAPI bool hasLevelWithId(std::string const& levelId);

    MCVAPI void onSave(std::string const& levelId);

    MCVAPI void onStorageChanged();

    MCVAPI void postDeleteLevel(std::string const& levelId);

    MCVAPI void refreshLevel(std::string const& levelId);

    MCVAPI void removeObserver(class LevelListCacheObserver& observer);

    MCVAPI void renameAndSaveLevelData(
        std::string const&     levelId,
        std::string const&     newLevelName,
        class LevelData const& levelData
    );

    MCVAPI void renameLevel(std::string const& levelId, std::string const& newLevelName);

    MCVAPI void saveLevelData(std::string const& levelId, class LevelData const& levelData);

    MCVAPI void updateLevelCache(std::string const& levelId);

    MCAPI LevelListCache(
        class LevelStorageSource&                            levelStorageSource,
        Bedrock::NotNullNonOwnerPtr<class AppPlatform const> appPlatform,
        std::function<bool()>&&                              checkIsSafeToFlushCache
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class LevelCache* _addOrReplaceCache(class Core::Path const& path);

    MCAPI class LevelCache* _addToCache(class Core::Path const& path);

    MCAPI class LevelCache* _addToCache(std::string const& levelId, class LevelCache&& levelCache);

    MCAPI class LevelCache* _createAndAddToCache(std::string const& levelId, class Core::Path const& directory);

    MCAPI class LevelCache* _getLevelCache(std::string const& levelId);

    MCAPI struct LevelSummary* _getLevelSummary(std::string const& levelId);

    MCAPI void _notifyLevelUpdated(std::string const& levelId);

    MCAPI void _refreshSummary(std::string const& levelId, class LevelCache& cache);

    // NOLINTEND
};
