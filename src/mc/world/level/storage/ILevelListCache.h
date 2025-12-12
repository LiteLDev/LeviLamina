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
    virtual ~ILevelListCache() /*override*/;

    virtual void addLevel(::std::string const&, ::LevelData&&) = 0;

    virtual void deleteLevel(::std::string const&) = 0;

    virtual void refreshLevel(::std::string const&) = 0;

    virtual void deleteLevelFiles(::std::string const&) = 0;

    virtual void postDeleteLevel(::std::string const&) = 0;

    virtual void renameLevel(::std::string const&, ::std::string const&) = 0;

    virtual void renameAndSaveLevelData(::std::string const&, ::std::string const&, ::LevelData const&) = 0;

    virtual void saveLevelData(::std::string const& levelId, ::LevelData const& data) = 0;

    virtual void createBackupCopyOfWorld(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual bool hasLevelWithId(::std::string const&) = 0;

    virtual bool checkIfLevelIsCorruptOrMissing(::std::string const&) = 0;

    virtual void addObserver(::LevelListCacheObserver&) = 0;

    virtual void removeObserver(::LevelListCacheObserver&) = 0;

    virtual ::Bedrock::UniqueOwnerPointer<::LevelStorage> createLevelStorage(
        ::Scheduler&,
        ::std::string const&,
        ::ContentIdentity const&,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&,
        ::std::chrono::nanoseconds const&,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>,
        ::std::unique_ptr<::LevelStorageEventing>
    ) = 0;

    virtual ::std::unique_ptr<::LevelLooseFileStorage> createLevelLooseStorage(
        ::std::string const&,
        ::ContentIdentity const&,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&
    ) = 0;

    virtual ::LevelSummary* getLevelSummary(::std::string const&) = 0;

    virtual ::LevelSummary const* getLevelSummaryByName(::std::string const&) = 0;

    virtual ::LevelSummary* getOrCreateLevelSummary(::Core::Path const&) = 0;

    virtual ::LevelData* getLevelData(::std::string const& levelID) = 0;

    virtual ::Bedrock::NonOwnerPointer<::LevelData> getLevelDataNonOwnerPointer(::std::string const&) = 0;

    virtual ::LevelSummary* getShallowLevelSummary(::std::string const&) = 0;

    virtual void getLevelList(::std::vector<::LevelSummary>&, bool, bool, bool) = 0;

    virtual bool hasCachedLevels(bool) const = 0;

    virtual void updateLevelCache(::std::string const&) = 0;

    virtual ::std::unique_ptr<::LevelStorageObserver> createLevelStorageObserver() = 0;

    virtual void onSave(::std::string const&) = 0;

    virtual void onStorageChanged() = 0;

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
