#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/IContentAcquisition.h"
#include "mc/client/services/download/IDlcBatchModel.h"
#include "mc/client/services/download/InitiatorCategory.h"
#include "mc/client/store/ItemInstallState.h"

// auto generated forward declare list
// clang-format off
struct DlcId;
struct IContentAcquisition;
struct IStoreCatalogRepository;
struct PackIdVersion;
// clang-format on

class DlcBatchModel : public ::IDlcBatchModel {
public:
    // DlcBatchModel inner types define
    enum class DlcProductIdSearch : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                                    mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                                mStoreCatalog;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                  mDlcBatchExistenceTracker;
    ::ll::TypedStorage<8, 24, ::std::vector<::DlcId>>                                   mDlcIds;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>                           mPackIds;
    ::ll::TypedStorage<4, 4, ::DlcBatchModel::DlcProductIdSearch>                       mDlcProductIdSearch;
    ::ll::TypedStorage<4, 4, ::InitiatorCategory>                                       mInitiatorCategory;
    ::ll::TypedStorage<1, 1, bool>                                                      mSilent;
    ::ll::TypedStorage<8, 16, ::std::optional<::IContentAcquisition::ImportCallbackId>> mBatchId;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcBatchModel& operator=(DlcBatchModel const&);
    DlcBatchModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DlcBatchModel() /*override*/;

    virtual bool containsProductId(::std::string const& productId) const /*override*/;

    virtual void searchForProductIds(::std::function<void(bool)> searchCompleteCallback) /*override*/;

    virtual void beginExclusiveDownload() /*override*/;

    virtual void beginPackDownload() /*override*/;

    virtual void beginPackDownloadWithPossibleThrottleWarning() /*override*/;

    virtual void beginAutoDownload() /*override*/;

    virtual void beginWorldPackDownload() /*override*/;

    virtual void cancelInactiveDownloads() /*override*/;

    virtual void cancelDownload() /*override*/;

    virtual void cancelPendingDownload() /*override*/;

    virtual void cancelPendingImport() /*override*/;

    virtual void pauseDownload() /*override*/;

    virtual void resumeDownload() /*override*/;

    virtual bool isDownloadingOrImporting() const /*override*/;

    virtual bool isDownloading() const /*override*/;

    virtual bool isDownloadComplete() const /*override*/;

    virtual uint64 getDownloadSize() const /*override*/;

    virtual uint64 getDownloadedBytes() const /*override*/;

    virtual float getDownloadProgress() const /*override*/;

    virtual uint64 getDownloadedCount() const /*override*/;

    virtual ::std::optional<int> getIndexOfActiveDownload() const /*override*/;

    virtual bool isImporting() const /*override*/;

    virtual bool isImportWaiting() const /*override*/;

    virtual uint64 getImportTotal() const /*override*/;

    virtual uint64 getImportedCount() const /*override*/;

    virtual float getImportProgress() const /*override*/;

    virtual int getIndexOfActiveImport() const /*override*/;

    virtual ::std::vector<::DlcId> const& getDlcIds() const /*override*/;

    virtual ::ItemInstallState getDlcInstalledState() const /*override*/;

    virtual bool isContentSearchComplete() /*override*/;

    virtual bool isFailed() const /*override*/;

    virtual bool isCancelled() const /*override*/;

    virtual void setSilent(bool newSilent) /*override*/;

    virtual bool isSilent() const /*override*/;

    virtual ::IContentAcquisition& contentAcquisition() const /*override*/;

    virtual ::IStoreCatalogRepository& storeCatalog() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DlcBatchModel(::DlcBatchModel const&);

    MCAPI explicit DlcBatchModel(::IDlcBatchModel const& ref);

    MCAPI DlcBatchModel(
        ::IContentAcquisition&        contentAcquisition,
        ::IStoreCatalogRepository&    storeCatalog,
        ::std::vector<::DlcId> const& dlcIds
    );

    MCAPI DlcBatchModel(
        ::IContentAcquisition&                contentAcquisition,
        ::IStoreCatalogRepository&            storeCatalog,
        ::std::vector<::PackIdVersion> const& packIds
    );

    MCAPI DlcBatchModel(
        ::IContentAcquisition&              contentAcquisition,
        ::IStoreCatalogRepository&          storeCatalog,
        ::std::vector<::std::string> const& productIds
    );

    MCAPI bool _canBeginDownload() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DlcBatchModel const&);

    MCAPI void* $ctor(::IDlcBatchModel const& ref);

    MCAPI void* $ctor(
        ::IContentAcquisition&        contentAcquisition,
        ::IStoreCatalogRepository&    storeCatalog,
        ::std::vector<::DlcId> const& dlcIds
    );

    MCAPI void* $ctor(
        ::IContentAcquisition&                contentAcquisition,
        ::IStoreCatalogRepository&            storeCatalog,
        ::std::vector<::PackIdVersion> const& packIds
    );

    MCAPI void* $ctor(
        ::IContentAcquisition&              contentAcquisition,
        ::IStoreCatalogRepository&          storeCatalog,
        ::std::vector<::std::string> const& productIds
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
    MCAPI bool $containsProductId(::std::string const& productId) const;

    MCAPI void $searchForProductIds(::std::function<void(bool)> searchCompleteCallback);

    MCAPI void $beginExclusiveDownload();

    MCAPI void $beginPackDownload();

    MCAPI void $beginPackDownloadWithPossibleThrottleWarning();

    MCAPI void $beginAutoDownload();

    MCAPI void $beginWorldPackDownload();

    MCAPI void $cancelInactiveDownloads();

    MCAPI void $cancelDownload();

    MCAPI void $cancelPendingDownload();

    MCAPI void $cancelPendingImport();

    MCAPI void $pauseDownload();

    MCAPI void $resumeDownload();

    MCAPI bool $isDownloadingOrImporting() const;

    MCAPI bool $isDownloading() const;

    MCAPI bool $isDownloadComplete() const;

    MCAPI uint64 $getDownloadSize() const;

    MCAPI uint64 $getDownloadedBytes() const;

    MCAPI float $getDownloadProgress() const;

    MCAPI uint64 $getDownloadedCount() const;

    MCAPI ::std::optional<int> $getIndexOfActiveDownload() const;

    MCAPI bool $isImporting() const;

    MCAPI bool $isImportWaiting() const;

    MCAPI uint64 $getImportTotal() const;

    MCAPI uint64 $getImportedCount() const;

    MCAPI float $getImportProgress() const;

    MCAPI int $getIndexOfActiveImport() const;

    MCFOLD ::std::vector<::DlcId> const& $getDlcIds() const;

    MCAPI ::ItemInstallState $getDlcInstalledState() const;

    MCFOLD bool $isContentSearchComplete();

    MCAPI bool $isFailed() const;

    MCAPI bool $isCancelled() const;

    MCAPI void $setSilent(bool newSilent);

    MCFOLD bool $isSilent() const;

    MCFOLD ::IContentAcquisition& $contentAcquisition() const;

    MCFOLD ::IStoreCatalogRepository& $storeCatalog() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
