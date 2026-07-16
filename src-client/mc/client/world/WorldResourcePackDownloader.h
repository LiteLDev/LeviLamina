#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldResourcePackDownloader.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IContentAcquisition;
class IDlcBatchModel;
class IDlcBatcher;
class IDlcValidation;
class IEntitlementManager;
class ILevelListCache;
class IStoreCatalogRepository;
struct DlcValidationState;
struct PackIdVersion;
namespace World { struct PackCheckResult; }
namespace World { struct PackDownloadProgressInfo; }
// clang-format on

namespace World {

class WorldResourcePackDownloader : public ::World::IWorldResourcePackDownloader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IDlcBatcher>>                      mDlcBatcher;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>                                     mDlcValidation;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                                mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                            mStoreCatalogRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>> mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                    mClientInstance;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                    mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IDlcBatchModel*>                                     mDlcBatchModel;
    ::ll::TypedStorage<8, 8, uint64>                                                mDlcSizeToDownload;
    ::ll::TypedStorage<8, 8, uint64>                                                mDlcIdsToDownload;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DlcValidationState>>              mDlcState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                              mExistenceTracker;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::optional<::World::PackDownloadError>)>> mOnCheckPackComplete;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>       mOnDownloadCompleteCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(uint64)>> mOnGetPackSizeCompleteCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldResourcePackDownloader& operator=(WorldResourcePackDownloader const&);
    WorldResourcePackDownloader(WorldResourcePackDownloader const&);
    WorldResourcePackDownloader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void downloadPacks(
        ::std::vector<::std::string> const&,
        ::std::function<void()>,
        ::std::function<void(::World::PackDownloadError)>
    ) /*override*/;

    virtual ::World::PackDownloadProgressInfo getProgress() /*override*/;

    virtual void getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)>) /*override*/;

    virtual void cancelDownloadPack() /*override*/;

    virtual void getPackSizes(::std::vector<::std::string> const&, ::std::function<void(uint64)>) /*override*/;

    virtual ::World::PackCheckResult checkDlc(::std::string const&, ::PackIdVersion const&, bool const) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
