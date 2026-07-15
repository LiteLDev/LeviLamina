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

    virtual void addLevel(::std::string const&, ::LevelData&&) /*override*/;

    virtual void deleteLevel(::std::string const&) /*override*/;

    virtual void refreshLevel(::std::string const&) /*override*/;

    virtual void ensureLevelInitialized(::std::string const&) /*override*/;

    virtual void deleteLevelFiles(::std::string const&) /*override*/;

    virtual void postDeleteLevel(::std::string const&) /*override*/;

    virtual void renameLevel(::std::string const&, ::std::string const&) /*override*/;

    virtual void renameAndSaveLevelData(::std::string const&, ::std::string const&, ::LevelData const&) /*override*/;

    virtual void saveLevelData(::std::string const&, ::LevelData const&) /*override*/;

    virtual void createBackupCopyOfWorld(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual bool hasLevelWithId(::std::string const&) /*override*/;

    virtual ::std::string getLevelIdFromPath(::Core::Path const&, ::Core::Path const&) /*override*/;

    virtual bool checkIfLevelIsCorruptOrMissing(::std::string const&) /*override*/;

    virtual void addObserver(::LevelListCacheObserver&) /*override*/;

    virtual void removeObserver(::LevelListCacheObserver&) /*override*/;

    virtual ::Bedrock::UniqueOwnerPointer<::LevelStorage> createLevelStorage(
        ::Scheduler&,
        ::std::string const&,
        ::ContentIdentity const&,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&,
        ::std::chrono::nanoseconds const&,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>,
        ::std::unique_ptr<::LevelStorageEventing>
    ) /*override*/;

    virtual ::std::unique_ptr<::LevelLooseFileStorage> createLevelLooseStorage(
        ::std::string const&,
        ::ContentIdentity const&,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&
    ) /*override*/;

    virtual ::LevelSummary* getLevelSummary(::std::string const&) /*override*/;

    virtual ::LevelSummary const* getLevelSummaryByName(::std::string const&) /*override*/;

    virtual ::LevelSummary* getOrCreateLevelSummary(::Core::Path const&) /*override*/;

    virtual ::LevelData* getLevelData(::std::string const&) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::LevelData> getLevelDataNonOwnerPointer(::std::string const&) /*override*/;

    virtual ::LevelSummary* getShallowLevelSummary(::std::string const&) /*override*/;

    virtual void getLevelList(::std::vector<::LevelSummary>&, bool, bool, bool, bool) /*override*/;

    virtual bool hasCachedLevels(bool) const /*override*/;

    virtual void updateLevelCache(::std::string const&) /*override*/;

    virtual ::std::unique_ptr<::LevelStorageObserver> createLevelStorageObserver() /*override*/;

    virtual void onSave(::std::string const&) /*override*/;

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
