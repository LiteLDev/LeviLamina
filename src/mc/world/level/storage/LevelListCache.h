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
    virtual ::Bedrock::NonOwnerPointer<::LevelData>
    getLevelDataNonOwnerPointer(::std::string const& levelId) /*override*/;

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
    MCNAPI LevelListCache(
        ::LevelStorageSource&                              levelStorageSource,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform const> appPlatform,
        ::std::function<bool()>&&                          checkIsSafeToFlushCache
    );

    MCNAPI ::LevelCache* _addOrReplaceCache(::Core::Path const& path);

    MCNAPI ::LevelCache* _addToCache(::Core::Path const& path);

    MCNAPI ::LevelCache* _addToCache(::std::string const& levelId, ::LevelCache&& levelCache);

    MCNAPI ::LevelCache* _createAndAddToCache(::std::string const& levelId, ::Core::Path const& directory);

    MCNAPI ::LevelSummary* _getLevelSummary(::std::string const& levelId);

    MCNAPI void _notifyLevelUpdated(::std::string const& levelId);

    MCNAPI void _refreshSummary(::std::string const& levelId, ::LevelCache& cache);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::LevelStorageSource&                              levelStorageSource,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform const> appPlatform,
        ::std::function<bool()>&&                          checkIsSafeToFlushCache
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addLevel(::std::string const& levelId, ::LevelData&& levelData);

    MCNAPI void $deleteLevel(::std::string const& levelId);

    MCNAPI void $refreshLevel(::std::string const& levelId);

    MCNAPI void $deleteLevelFiles(::std::string const& levelId);

    MCNAPI void $postDeleteLevel(::std::string const& levelId);

    MCNAPI void $renameLevel(::std::string const& levelId, ::std::string const& newLevelName);

    MCNAPI void $renameAndSaveLevelData(
        ::std::string const& levelId,
        ::std::string const& newLevelName,
        ::LevelData const&   levelData
    );

    MCNAPI void $saveLevelData(::std::string const& levelId, ::LevelData const& levelData);

    MCNAPI void $createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLevelId,
        ::std::string const& newName
    );

    MCNAPI bool $hasLevelWithId(::std::string const& levelId);

    MCNAPI bool $checkIfLevelIsCorruptOrMissing(::std::string const& levelId);

    MCNAPI void $addObserver(::LevelListCacheObserver& observer);

    MCNAPI void $removeObserver(::LevelListCacheObserver& observer);

    MCNAPI ::Bedrock::UniqueOwnerPointer<::LevelStorage> $createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing
    );

    MCNAPI ::std::unique_ptr<::LevelLooseFileStorage> $createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );

    MCNAPI ::LevelSummary* $getLevelSummary(::std::string const& levelId);

    MCNAPI ::LevelSummary const* $getLevelSummaryByName(::std::string const& levelName);

    MCNAPI ::LevelSummary* $getOrCreateLevelSummary(::Core::Path const& directory);

    MCNAPI ::LevelData* $getLevelData(::std::string const& levelId);

    MCNAPI ::Bedrock::NonOwnerPointer<::LevelData> $getLevelDataNonOwnerPointer(::std::string const& levelId);

    MCNAPI ::LevelSummary* $getShallowLevelSummary(::std::string const& levelId);

    MCNAPI void $getLevelList(
        ::std::vector<::LevelSummary>& dest,
        bool                           includeShallowSummaries,
        bool                           includePartiallyCopiedLevels,
        bool                           includeBetaRetailLevels
    );

    MCNAPI bool $hasCachedLevels(bool includeShallowSummaries) const;

    MCNAPI void $updateLevelCache(::std::string const& levelId);

    MCNAPI ::std::unique_ptr<::LevelStorageObserver> $createLevelStorageObserver();

    MCNAPI void $onSave(::std::string const& levelId);

    MCNAPI void $onStorageChanged();

    MCNAPI ::Core::PathBuffer<::std::string> const $getBasePath() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForILevelListCache();

    MCNAPI static void** $vftableForEnableQueueForMainThread();
    // NOLINTEND
};
