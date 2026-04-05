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

    virtual ::World::WorldPacks& loadPackContentForWorld(::LevelSummary const& levelSummary) = 0;

    virtual ::World::PackCollection getWorldPackCollection(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        bool const            isEduMode
    ) = 0;

    virtual ::std::optional<::World::PackActionError> activatePack(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        bool const            isEduMode,
        bool const            force
    ) = 0;

    virtual ::std::optional<::World::PackActionError> deactivatePack(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        bool const            isEduMode,
        bool const            force
    ) = 0;

    virtual ::std::optional<::World::PackActionError> continuePackActivation(::LevelSummary const& levelSummary) = 0;

    virtual ::std::optional<::World::PackActionError> continuePackDeactivation(::LevelSummary const& levelSummary) = 0;

    virtual void downloadPacks(
        ::LevelSummary const&                             levelSummary,
        ::std::vector<::std::string> const&               packIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    ) = 0;

    virtual void getPackSizes(
        ::LevelSummary const&                           levelSummary,
        ::std::vector<::std::string> const&             packIds,
        ::std::function<void(uint64)>                   onCompleteCallback,
        ::std::function<void(::World::PackActionError)> onErrorCallback
    ) = 0;

    virtual ::World::PackDownloadProgressInfo getDownloadPackProgress() = 0;

    virtual void getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)> packTitlesCallback) = 0;

    virtual void cancelDownloadPack() = 0;

    virtual void savePacksData() = 0;

    virtual bool hasNonAddonBehaviorPacks(::LevelSummary const& levelSummary) = 0;

    virtual bool hasBehaviorPacks(::LevelSummary const& levelSummary) = 0;

    virtual bool hasLockedPacks(::LevelSummary const& levelSummary) const = 0;

    virtual ::std::optional<::World::PackActionError> changePackPriority(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        int const             fromIndex,
        int const             toIndex
    ) = 0;

    virtual ::World::PackCheckResult
    checkDlc(::std::string const& levelId, ::PackIdVersion const& packIdVersion, bool const isForRealms) = 0;

    virtual ::std::vector<::World::PackDetails>
    getPackDetailsForWorld(::LevelSummary const& levelSummary, ::std::vector<::std::string> const& packIds) = 0;

    virtual bool getResourcePacksDirty() = 0;

    virtual void refreshPacksData() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
