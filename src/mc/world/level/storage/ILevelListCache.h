#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class LevelData;
class LevelDbEnv;
class LevelListCacheObserver;
class LevelLooseFileStorage;
class LevelStorage;
class LevelStorageEventing;
class LevelStorageObserver;
class Scheduler;
struct LevelSummary;
namespace Core { class Path; }
// clang-format on

class ILevelListCache : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevelListCache() /*override*/;

    // vIndex: 1
    virtual void addLevel(::std::string const&, ::LevelData&&) = 0;

    // vIndex: 2
    virtual void deleteLevel(::std::string const&) = 0;

    // vIndex: 3
    virtual void refreshLevel(::std::string const&) = 0;

    // vIndex: 4
    virtual void deleteLevelFiles(::std::string const&) = 0;

    // vIndex: 5
    virtual void postDeleteLevel(::std::string const&) = 0;

    // vIndex: 6
    virtual void renameLevel(::std::string const&, ::std::string const&) = 0;

    // vIndex: 7
    virtual void renameAndSaveLevelData(::std::string const&, ::std::string const&, ::LevelData const&) = 0;

    // vIndex: 8
    virtual void saveLevelData(::std::string const&, ::LevelData const&) = 0;

    // vIndex: 9
    virtual void createBackupCopyOfWorld(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 10
    virtual bool hasLevelWithId(::std::string const&) = 0;

    // vIndex: 11
    virtual bool checkIfLevelIsCorruptOrMissing(::std::string const&) = 0;

    // vIndex: 12
    virtual void addObserver(::LevelListCacheObserver&) = 0;

    // vIndex: 13
    virtual void removeObserver(::LevelListCacheObserver&) = 0;

    // vIndex: 14
    virtual ::Bedrock::UniqueOwnerPointer<::LevelStorage>
    createLevelStorage(::Scheduler&, ::std::string const&, ::ContentIdentity const&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&, ::std::chrono::nanoseconds const&, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>, ::std::unique_ptr<::LevelStorageEventing>) = 0;

    // vIndex: 15
    virtual ::std::unique_ptr<::LevelLooseFileStorage>
    createLevelLooseStorage(::std::string const&, ::ContentIdentity const&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&) = 0;

    // vIndex: 16
    virtual ::LevelSummary* getLevelSummary(::std::string const&) = 0;

    // vIndex: 17
    virtual ::LevelSummary const* getLevelSummaryByName(::std::string const&) = 0;

    // vIndex: 18
    virtual ::LevelSummary* getOrCreateLevelSummary(::Core::Path const&) = 0;

    // vIndex: 19
    virtual ::LevelData* getLevelData(::std::string const&) = 0;

    // vIndex: 20
    virtual ::Bedrock::NonOwnerPointer<::LevelData> getLevelDataNonOwnerPointer(::std::string const&) = 0;

    // vIndex: 21
    virtual ::LevelSummary* getShallowLevelSummary(::std::string const&) = 0;

    // vIndex: 22
    virtual void getLevelList(::std::vector<::LevelSummary>&, bool, bool, bool) = 0;

    // vIndex: 23
    virtual bool hasCachedLevels(bool) const = 0;

    // vIndex: 24
    virtual void updateLevelCache(::std::string const&) = 0;

    // vIndex: 25
    virtual ::std::unique_ptr<::LevelStorageObserver> createLevelStorageObserver() = 0;

    // vIndex: 26
    virtual void onSave(::std::string const&) = 0;

    // vIndex: 27
    virtual void onStorageChanged() = 0;

    // vIndex: 28
    virtual ::Core::PathBuffer<::std::string> const getBasePath() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
