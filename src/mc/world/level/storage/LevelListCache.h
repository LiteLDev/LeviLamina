#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/world/level/LevelListCacheObserver.h"
#include "mc/world/level/storage/ILevelListCache.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ContentIdentity;
class IContentKeyProvider;
class LevelCache;
class LevelData;
class LevelDbEnv;
class LevelListCacheObserver;
class LevelLooseFileStorage;
class LevelStorage;
class LevelStorageEventing;
class LevelStorageObserver;
class LevelStorageSource;
class Scheduler;
struct LevelSummary;
namespace Core { class Path; }
// clang-format on

class LevelListCache : public ::ILevelListCache, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // LevelListCache inner types define
    using LevelAddedType = ::LevelListCacheObserver::LevelAddedType;

    using LockGuard = ::Bedrock::Threading::LockGuard<::std::recursive_mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelStorageSource&>                                mLevelStorageSource;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::LevelCache>>   mCachedLevelData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::LevelSummary>> mCachedUnSyncedLevelData;
    ::ll::TypedStorage<1, 1, bool>                                                 mDiscoverLevels;
    ::ll::TypedStorage<8, 32, ::Core::Subject<::LevelListCacheObserver, ::Core::SingleThreadedLock>> mSubject;
    ::ll::TypedStorage<8, 80, ::std::recursive_mutex>                                                mCacheLock;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform const> const>              mAppPlatform;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mCheckIsSafeToFlushCache;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelListCache& operator=(LevelListCache const&);
    LevelListCache(LevelListCache const&);
    LevelListCache();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelListCache() /*override*/ = default;

    virtual void addLevel(::std::string const& levelId, ::LevelData&& levelData) /*override*/;

    virtual void deleteLevel(::std::string const& levelId) /*override*/;

    virtual void refreshLevel(::std::string const& levelId) /*override*/;

    virtual void ensureLevelInitialized(::std::string const& levelId) /*override*/;

    virtual void deleteLevelFiles(::std::string const& levelId) /*override*/;

    virtual void postDeleteLevel(::std::string const& levelId) /*override*/;

    virtual void renameLevel(::std::string const& levelId, ::std::string const& newLevelName) /*override*/;

    virtual void renameAndSaveLevelData(
        ::std::string const& levelId,
        ::std::string const& newLevelName,
        ::LevelData const&   levelData
    ) /*override*/;

    virtual void saveLevelData(::std::string const& levelId, ::LevelData const& levelData) /*override*/;

    virtual void createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLevelId,
        ::std::string const& newName
    ) /*override*/;

    virtual bool hasLevelWithId(::std::string const& levelId) /*override*/;

    virtual ::std::string getLevelIdFromPath(::Core::Path const& fullPath, ::Core::Path const& worldsPath) /*override*/;

    virtual bool checkIfLevelIsCorruptOrMissing(::std::string const& levelId) /*override*/;

    virtual void addObserver(::LevelListCacheObserver& observer) /*override*/;

    virtual void removeObserver(::LevelListCacheObserver& observer) /*override*/;

    virtual ::Bedrock::UniqueOwnerPointer<::LevelStorage> createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing
    ) /*override*/;

    virtual ::std::unique_ptr<::LevelLooseFileStorage> createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;

    virtual ::LevelSummary* getLevelSummary(::std::string const& levelId) /*override*/;

    virtual ::LevelSummary const* getLevelSummaryByName(::std::string const& levelName) /*override*/;

    virtual ::LevelSummary* getOrCreateLevelSummary(::Core::Path const& directory) /*override*/;

    virtual ::LevelData* getLevelData(::std::string const& levelId) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::LevelData>
    getLevelDataNonOwnerPointer(::std::string const& levelId) /*override*/;

    virtual ::LevelSummary* getShallowLevelSummary(::std::string const& levelId) /*override*/;

    virtual void getLevelList(
        ::std::vector<::LevelSummary>& dest,
        bool                           includeShallowSummaries,
        bool                           includePartiallyCopiedLevels,
        bool                           includeBetaRetailLevels,
        bool                           includeInvalidLevelDataLevels
    ) /*override*/;

    virtual bool hasCachedLevels(bool includeShallowSummaries) const /*override*/;

    virtual void updateLevelCache(::std::string const& levelId) /*override*/;

    virtual ::std::unique_ptr<::LevelStorageObserver> createLevelStorageObserver() /*override*/;

    virtual void onSave(::std::string const& levelId) /*override*/;

    virtual void onStorageChanged() /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getBasePath() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelListCache(
        ::LevelStorageSource&                              levelStorageSource,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform const> appPlatform,
        ::std::function<bool()>&&                          checkIsSafeToFlushCache
    );

    MCAPI ::LevelCache* _addOrReplaceCache(::Core::Path const& path);

    MCAPI ::LevelCache* _addToCache(
        ::std::string const&                     levelId,
        ::LevelCache&&                           levelCache,
        ::LevelListCacheObserver::LevelAddedType levelAddedType
    );

    MCAPI ::LevelCache* _createAndAddToCache(
        ::std::string const&                     levelId,
        ::Core::Path const&                      directory,
        ::LevelListCacheObserver::LevelAddedType levelAddedType
    );

    MCAPI ::LevelCache* _getLevelCache(::std::string const& levelId);

    MCAPI ::LevelSummary* _getLevelSummary(::std::string const& levelId);

    MCAPI void _notifyLevelUpdated(::std::string const& levelId);

    MCAPI void _notifyNewLevelFound(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);

    MCAPI void _refreshSummary(::std::string const& levelId, ::LevelCache& cache);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::LevelStorageSource&                              levelStorageSource,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform const> appPlatform,
        ::std::function<bool()>&&                          checkIsSafeToFlushCache
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addLevel(::std::string const& levelId, ::LevelData&& levelData);

    MCAPI void $deleteLevel(::std::string const& levelId);

    MCAPI void $refreshLevel(::std::string const& levelId);

    MCAPI void $ensureLevelInitialized(::std::string const& levelId);

    MCAPI void $deleteLevelFiles(::std::string const& levelId);

    MCAPI void $postDeleteLevel(::std::string const& levelId);

    MCAPI void $renameLevel(::std::string const& levelId, ::std::string const& newLevelName);

    MCAPI void $renameAndSaveLevelData(
        ::std::string const& levelId,
        ::std::string const& newLevelName,
        ::LevelData const&   levelData
    );

    MCAPI void $saveLevelData(::std::string const& levelId, ::LevelData const& levelData);

    MCAPI void $createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLevelId,
        ::std::string const& newName
    );

    MCAPI bool $hasLevelWithId(::std::string const& levelId);

    MCAPI ::std::string $getLevelIdFromPath(::Core::Path const& fullPath, ::Core::Path const& worldsPath);

    MCAPI bool $checkIfLevelIsCorruptOrMissing(::std::string const& levelId);

    MCAPI void $addObserver(::LevelListCacheObserver& observer);

    MCAPI void $removeObserver(::LevelListCacheObserver& observer);

    MCAPI ::Bedrock::UniqueOwnerPointer<::LevelStorage> $createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing
    );

    MCAPI ::std::unique_ptr<::LevelLooseFileStorage> $createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );

    MCAPI ::LevelSummary* $getLevelSummary(::std::string const& levelId);

    MCAPI ::LevelSummary const* $getLevelSummaryByName(::std::string const& levelName);

    MCAPI ::LevelSummary* $getOrCreateLevelSummary(::Core::Path const& directory);

    MCAPI ::LevelData* $getLevelData(::std::string const& levelId);

    MCAPI ::Bedrock::NonOwnerPointer<::LevelData> $getLevelDataNonOwnerPointer(::std::string const& levelId);

    MCAPI ::LevelSummary* $getShallowLevelSummary(::std::string const& levelId);

    MCAPI void $getLevelList(
        ::std::vector<::LevelSummary>& dest,
        bool                           includeShallowSummaries,
        bool                           includePartiallyCopiedLevels,
        bool                           includeBetaRetailLevels,
        bool                           includeInvalidLevelDataLevels
    );

    MCAPI bool $hasCachedLevels(bool includeShallowSummaries) const;

    MCAPI void $updateLevelCache(::std::string const& levelId);

    MCAPI ::std::unique_ptr<::LevelStorageObserver> $createLevelStorageObserver();

    MCAPI void $onSave(::std::string const& levelId);

    MCAPI void $onStorageChanged();

    MCAPI ::Core::PathBuffer<::std::string> const $getBasePath() const;


    // NOLINTEND
};
