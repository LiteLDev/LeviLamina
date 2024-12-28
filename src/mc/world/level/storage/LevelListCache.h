#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/threading/LockGuard.h"
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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7be6fa;
    ::ll::UntypedStorage<8, 64> mUnkc5bca8;
    ::ll::UntypedStorage<8, 64> mUnke93906;
    ::ll::UntypedStorage<1, 1>  mUnk233d85;
    ::ll::UntypedStorage<8, 32> mUnk92414e;
    ::ll::UntypedStorage<8, 80> mUnk9c4eaf;
    ::ll::UntypedStorage<8, 24> mUnk728a82;
    ::ll::UntypedStorage<8, 64> mUnk1f7cd0;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelListCache& operator=(LevelListCache const&);
    LevelListCache(LevelListCache const&);
    LevelListCache();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelListCache() /*override*/;

    // vIndex: 1
    virtual void addLevel(::std::string const& levelId, ::LevelData&& levelData) /*override*/;

    // vIndex: 2
    virtual void deleteLevel(::std::string const& levelId) /*override*/;

    // vIndex: 3
    virtual void refreshLevel(::std::string const& levelId) /*override*/;

    // vIndex: 4
    virtual void deleteLevelFiles(::std::string const& levelId) /*override*/;

    // vIndex: 5
    virtual void postDeleteLevel(::std::string const& levelId) /*override*/;

    // vIndex: 6
    virtual void renameLevel(::std::string const& levelId, ::std::string const& newLevelName) /*override*/;

    // vIndex: 7
    virtual void renameAndSaveLevelData(
        ::std::string const& levelId,
        ::std::string const& newLevelName,
        ::LevelData const&   levelData
    ) /*override*/;

    // vIndex: 8
    virtual void saveLevelData(::std::string const& levelId, ::LevelData const& levelData) /*override*/;

    // vIndex: 9
    virtual void createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLevelId,
        ::std::string const& newName
    ) /*override*/;

    // vIndex: 10
    virtual bool hasLevelWithId(::std::string const& levelId) /*override*/;

    // vIndex: 11
    virtual bool checkIfLevelIsCorruptOrMissing(::std::string const& levelId) /*override*/;

    // vIndex: 12
    virtual void addObserver(::LevelListCacheObserver& observer) /*override*/;

    // vIndex: 13
    virtual void removeObserver(::LevelListCacheObserver& observer) /*override*/;

    // vIndex: 14
    virtual ::Bedrock::UniqueOwnerPointer<::LevelStorage> createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing
    ) /*override*/;

    // vIndex: 15
    virtual ::std::unique_ptr<::LevelLooseFileStorage> createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;

    // vIndex: 16
    virtual ::LevelSummary* getLevelSummary(::std::string const& levelId) /*override*/;

    // vIndex: 17
    virtual ::LevelSummary const* getLevelSummaryByName(::std::string const& levelName) /*override*/;

    // vIndex: 18
    virtual ::LevelSummary* getOrCreateLevelSummary(::Core::Path const& directory) /*override*/;

    // vIndex: 19
    virtual ::LevelData* getLevelData(::std::string const& levelId) /*override*/;

    // vIndex: 20
    virtual ::Bedrock::NonOwnerPointer<::LevelData> getLevelDataNonOwnerPointer(::std::string const& levelId
    ) /*override*/;

    // vIndex: 21
    virtual ::LevelSummary* getShallowLevelSummary(::std::string const& levelId) /*override*/;

    // vIndex: 22
    virtual void getLevelList(
        ::std::vector<::LevelSummary>& dest,
        bool                           includeShallowSummaries,
        bool                           includePartiallyCopiedLevels,
        bool                           includeBetaRetailLevels
    ) /*override*/;

    // vIndex: 23
    virtual bool hasCachedLevels(bool includeShallowSummaries) const /*override*/;

    // vIndex: 24
    virtual void updateLevelCache(::std::string const& levelId) /*override*/;

    // vIndex: 25
    virtual ::std::unique_ptr<::LevelStorageObserver> createLevelStorageObserver() /*override*/;

    // vIndex: 26
    virtual void onSave(::std::string const& levelId) /*override*/;

    // vIndex: 27
    virtual void onStorageChanged() /*override*/;

    // vIndex: 28
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

    MCAPI ::LevelCache* _addToCache(::Core::Path const& path);

    MCAPI ::LevelCache* _addToCache(::std::string const& levelId, ::LevelCache&& levelCache);

    MCAPI ::LevelCache* _createAndAddToCache(::std::string const& levelId, ::Core::Path const& directory);

    MCAPI ::LevelSummary* _getLevelSummary(::std::string const& levelId);

    MCAPI void _notifyLevelUpdated(::std::string const& levelId);

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addLevel(::std::string const& levelId, ::LevelData&& levelData);

    MCAPI void $deleteLevel(::std::string const& levelId);

    MCAPI void $refreshLevel(::std::string const& levelId);

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
        bool                           includeBetaRetailLevels
    );

    MCAPI bool $hasCachedLevels(bool includeShallowSummaries) const;

    MCAPI void $updateLevelCache(::std::string const& levelId);

    MCAPI ::std::unique_ptr<::LevelStorageObserver> $createLevelStorageObserver();

    MCAPI void $onSave(::std::string const& levelId);

    MCAPI void $onStorageChanged();

    MCAPI ::Core::PathBuffer<::std::string> const $getBasePath() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForILevelListCache();

    MCAPI static void** $vftableForEnableQueueForMainThread();
    // NOLINTEND
};
