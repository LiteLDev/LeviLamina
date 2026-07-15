#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PackDownloadError.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
struct PackIdVersion;
namespace World { struct PackCheckResult; }
namespace World { struct PackCollection; }
namespace World { struct PackDetails; }
namespace World { struct PackDownloadProgressInfo; }
namespace World { struct PackViewAndItem; }
namespace World { struct WorldPacks; }
// clang-format on

namespace World {

class IWorldResourcePackHandler {
public:
    // IWorldResourcePackHandler inner types define
    using FindPackResult = ::std::variant<::World::PackActionError, ::World::PackViewAndItem>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldResourcePackHandler() = default;

    virtual ::World::WorldPacks& loadPackContentForWorld(::LevelSummary const&) = 0;

    virtual ::World::PackCollection getWorldPackCollection(::LevelSummary const&, ::ContentType const, bool const) = 0;

    virtual ::std::optional<::World::PackActionError>
    activatePack(::LevelSummary const&, ::ContentType const, ::std::string const&, bool const, bool const) = 0;

    virtual ::std::optional<::World::PackActionError>
    deactivatePack(::LevelSummary const&, ::ContentType const, ::std::string const&, bool const, bool const) = 0;

    virtual ::std::optional<::World::PackActionError> continuePackActivation(::LevelSummary const&) = 0;

    virtual ::std::optional<::World::PackActionError> continuePackDeactivation(::LevelSummary const&) = 0;

    virtual void downloadPacks(
        ::LevelSummary const&,
        ::std::vector<::std::string> const&,
        ::std::function<void()>,
        ::std::function<void(::World::PackDownloadError)>
    ) = 0;

    virtual void getPackSizes(
        ::LevelSummary const&,
        ::std::vector<::std::string> const&,
        ::std::function<void(uint64)>,
        ::std::function<void(::World::PackActionError)>
    ) = 0;

    virtual ::World::PackDownloadProgressInfo getDownloadPackProgress() = 0;

    virtual void getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)>) = 0;

    virtual void cancelDownloadPack() = 0;

    virtual void savePacksData() = 0;

    virtual bool hasNonAddonBehaviorPacks(::LevelSummary const&) = 0;

    virtual bool hasBehaviorPacks(::LevelSummary const&) = 0;

    virtual bool hasLockedPacks(::LevelSummary const&) const = 0;

    virtual ::std::optional<::World::PackActionError>
    changePackPriority(::LevelSummary const&, ::ContentType const, ::std::string const&, int const, int const) = 0;

    virtual ::World::PackCheckResult checkDlc(::std::string const&, ::PackIdVersion const&, bool const) = 0;

    virtual ::std::vector<::World::PackDetails>
    getPackDetailsForWorld(::LevelSummary const&, ::std::vector<::std::string> const&) = 0;

    virtual bool getResourcePacksDirty() = 0;

    virtual void refreshPacksData() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
