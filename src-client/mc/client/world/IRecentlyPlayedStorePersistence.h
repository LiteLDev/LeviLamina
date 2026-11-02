#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/RecentlyPlayedLoadError.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace World { struct RecentlyPlayedEntry; }
namespace World { struct RecentlyPlayedStoreLoadData; }
// clang-format on

namespace World {

class IRecentlyPlayedStorePersistence {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRecentlyPlayedStorePersistence() = default;

    virtual ::Core::PathBuffer<::std::string> const& getSettingsDirectoryPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> const& getRecordFilePath() const = 0;

    virtual ::std::string const& getAccountKey() const = 0;

    virtual bool hasLoadedProfile() const = 0;

    virtual ::nonstd::expected<::World::RecentlyPlayedStoreLoadData, ::World::RecentlyPlayedLoadError>
    load(::Core::Path const& settingsDirectoryPath, ::std::string const& accountKey) = 0;

    virtual void clearLoadedProfile() = 0;

    virtual void persist(::gsl::span<::World::RecentlyPlayedEntry const> entries) = 0;
    // NOLINTEND
};

} // namespace World
