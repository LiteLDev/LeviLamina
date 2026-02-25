#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldResourcePackDownloader.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IDlcBatchModel;
class IDlcBatcher;
class ILevelListCache;
struct DlcValidationState;
struct IContentAcquisition;
struct IDlcValidation;
struct IEntitlementManager;
struct IStoreCatalogRepository;
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
        ::std::vector<::std::string> const&               productIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    ) /*override*/;

    virtual ::World::PackDownloadProgressInfo getProgress() /*override*/;

    virtual void
    getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)> packTitlesCallback) /*override*/;

    virtual void cancelDownloadPack() /*override*/;

    virtual void getPackSizes(
        ::std::vector<::std::string> const& productIds,
        ::std::function<void(uint64)>       onCompleteCallback
    ) /*override*/;

    virtual ::World::PackCheckResult
    checkDlc(::std::string const& levelId, ::PackIdVersion const& packIdVersion, bool const isForRealms) const
        /*override*/;

    virtual ~WorldResourcePackDownloader() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldResourcePackDownloader(
        ::IDlcValidation&                                    dlcValidation,
        ::IContentAcquisition&                               contentAcquisition,
        ::IStoreCatalogRepository&                           storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        ::IClientInstance&                                   clientInstance,
        ::ILevelListCache&                                   levelListCache
    );

    MCAPI void _checkPacks();

    MCFOLD bool
    _hasExpiredRealmsPlusSubscription(::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IDlcValidation&                                    dlcValidation,
        ::IContentAcquisition&                               contentAcquisition,
        ::IStoreCatalogRepository&                           storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager,
        ::IClientInstance&                                   clientInstance,
        ::ILevelListCache&                                   levelListCache
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $downloadPacks(
        ::std::vector<::std::string> const&               productIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    );

    MCAPI ::World::PackDownloadProgressInfo $getProgress();

    MCAPI void $getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)> packTitlesCallback);

    MCAPI void $cancelDownloadPack();

    MCAPI void
    $getPackSizes(::std::vector<::std::string> const& productIds, ::std::function<void(uint64)> onCompleteCallback);

    MCAPI ::World::PackCheckResult
    $checkDlc(::std::string const& levelId, ::PackIdVersion const& packIdVersion, bool const isForRealms) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
