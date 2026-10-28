#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IRecentlyPlayedStorePersistence.h"
#include "mc/client/world/RecentlyPlayedLoadError.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace World { struct RecentlyPlayedEntry; }
namespace World { struct RecentlyPlayedStoreLoadData; }
// clang-format on

namespace World {

class NullRecentlyPlayedStorePersistence : public ::World::IRecentlyPlayedStorePersistence {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mEmptyPath;
    ::ll::TypedStorage<8, 32, ::std::string>                     mEmptyAccountKey;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Core::PathBuffer<::std::string> const& getSettingsDirectoryPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const& getRecordFilePath() const /*override*/;

    virtual ::std::string const& getAccountKey() const /*override*/;

    virtual bool hasLoadedProfile() const /*override*/;

    virtual ::nonstd::expected<::World::RecentlyPlayedStoreLoadData, ::World::RecentlyPlayedLoadError>
    load(::Core::Path const&, ::std::string const&) /*override*/;

    virtual void clearLoadedProfile() /*override*/;

    virtual void persist(::gsl::span<::World::RecentlyPlayedEntry const>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Core::PathBuffer<::std::string> const& $getSettingsDirectoryPath() const;

    MCFOLD ::Core::PathBuffer<::std::string> const& $getRecordFilePath() const;

    MCFOLD ::std::string const& $getAccountKey() const;

    MCFOLD bool $hasLoadedProfile() const;

    MCAPI ::nonstd::expected<::World::RecentlyPlayedStoreLoadData, ::World::RecentlyPlayedLoadError>
    $load(::Core::Path const&, ::std::string const&);

    MCFOLD void $clearLoadedProfile();

    MCFOLD void $persist(::gsl::span<::World::RecentlyPlayedEntry const>);
    // NOLINTEND
};

} // namespace World
