#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7be6fa;
    ::ll::UntypedStorage<8, 64> mUnk3b1acb;
    ::ll::UntypedStorage<8, 64> mUnk4e62e2;
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
    MCNAPI LevelListCache(
        ::LevelStorageSource&                              levelStorageSource,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform const> appPlatform,
        ::std::function<bool()>&&                          checkIsSafeToFlushCache
    );

    MCNAPI ::LevelCache* _addOrReplaceCache(::Core::Path const& path);

    MCNAPI ::LevelCache* _addToCache(
        ::std::string const&                     levelId,
        ::LevelCache&&                           levelCache,
        ::LevelListCacheObserver::LevelAddedType levelAddedType
    );

    MCNAPI ::LevelCache* _createAndAddToCache(
        ::std::string const&                     levelId,
        ::Core::Path const&                      directory,
        ::LevelListCacheObserver::LevelAddedType levelAddedType
    );

    MCNAPI ::LevelCache* _getLevelCache(::std::string const& levelId);

    MCNAPI ::LevelSummary* _getLevelSummary(::std::string const& levelId);

    MCNAPI void _notifyLevelUpdated(::std::string const& levelId);

    MCNAPI void _notifyNewLevelFound(::std::string const& levelId, ::LevelListCacheObserver::LevelAddedType type);

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
