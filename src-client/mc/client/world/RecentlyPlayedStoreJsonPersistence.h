#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IRecentlyPlayedStorePersistence.h"
#include "mc/client/world/RecentlyPlayedLoadError.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace World { struct RecentlyPlayedEntry; }
namespace World { struct RecentlyPlayedStoreLoadData; }
// clang-format on

namespace World {

class RecentlyPlayedStoreJsonPersistence : public ::World::IRecentlyPlayedStorePersistence {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Core::FileSystem&>                mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mSettingsDirectoryPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mRecordDirectoryPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mRecordFilePath;
    ::ll::TypedStorage<8, 32, ::std::string>                     mAccountKey;
    // NOLINTEND

public:
    // prevent constructor by default
    RecentlyPlayedStoreJsonPersistence& operator=(RecentlyPlayedStoreJsonPersistence const&);
    RecentlyPlayedStoreJsonPersistence(RecentlyPlayedStoreJsonPersistence const&);
    RecentlyPlayedStoreJsonPersistence();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecentlyPlayedStoreJsonPersistence() /*override*/ = default;

    virtual ::Core::PathBuffer<::std::string> const& getSettingsDirectoryPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const& getRecordFilePath() const /*override*/;

    virtual ::std::string const& getAccountKey() const /*override*/;

    virtual bool hasLoadedProfile() const /*override*/;

    virtual ::nonstd::expected<::World::RecentlyPlayedStoreLoadData, ::World::RecentlyPlayedLoadError>
    load(::Core::Path const& settingsDirectoryPath, ::std::string const& accountKey) /*override*/;

    virtual void clearLoadedProfile() /*override*/;

    virtual void persist(::gsl::span<::World::RecentlyPlayedEntry const> entries) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Core::PathBuffer<::std::string> const& $getSettingsDirectoryPath() const;

    MCFOLD ::Core::PathBuffer<::std::string> const& $getRecordFilePath() const;

    MCFOLD ::std::string const& $getAccountKey() const;

    MCAPI bool $hasLoadedProfile() const;

    MCAPI ::nonstd::expected<::World::RecentlyPlayedStoreLoadData, ::World::RecentlyPlayedLoadError>
    $load(::Core::Path const& settingsDirectoryPath, ::std::string const& accountKey);

    MCAPI void $clearLoadedProfile();

    MCAPI void $persist(::gsl::span<::World::RecentlyPlayedEntry const> entries);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
