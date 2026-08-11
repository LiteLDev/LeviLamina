#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/PackDownloadError.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
namespace World { struct PackCheckResult; }
namespace World { struct PackDownloadProgressInfo; }
// clang-format on

namespace World {

class IWorldResourcePackDownloader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldResourcePackDownloader() = default;

    virtual void downloadPacks(
        ::std::vector<::std::string> const&               productIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    ) = 0;

    virtual ::World::PackDownloadProgressInfo getProgress() = 0;

    virtual void cancelDownloadPack() = 0;

    virtual void
    getPackSizes(::std::vector<::std::string> const& productIds, ::std::function<void(uint64)> onCompleteCallback) = 0;

    virtual void getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)> packTitlesCallback) = 0;

    virtual ::World::PackCheckResult
    checkDlc(::std::string const& levelId, ::PackIdVersion const& packIdVersion, bool const isForRealms) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
