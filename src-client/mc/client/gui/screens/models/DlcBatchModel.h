#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/IContentAcquisition.h"
#include "mc/client/services/download/IDlcBatchModel.h"
#include "mc/client/services/download/InitiatorCategory.h"
#include "mc/client/store/ItemInstallState.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IContentAcquisition;
class IStoreCatalogRepository;
struct PackIdVersion;
// clang-format on

class DlcBatchModel : public ::IDlcBatchModel {
public:
    // DlcBatchModel inner types define
    enum class DlcProductIdSearch : int {
        Unknown   = 0,
        Searching = 1,
        Done      = 2,
    };

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

    virtual void searchForProductIds(::std::function<void()> searchCompleteCallback) /*override*/;

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

    virtual bool isImportComplete() const /*override*/;

    virtual bool isImportWaiting() const /*override*/;

    virtual uint64 getImportTotal() const /*override*/;

    virtual uint64 getImportedCount() const /*override*/;

    virtual float getImportProgress() const /*override*/;

    virtual ::std::optional<int> getIndexOfActiveImport() const /*override*/;

    virtual ::std::vector<::DlcId> const& getDlcIds() const /*override*/;

    virtual ::std::vector<::PackIdVersion> const& getPackIds() const /*override*/;

    virtual ::std::vector<::std::string> getProductIdList() const /*override*/;

    virtual ::ItemInstallState getDlcInstalledState() const /*override*/;

    virtual bool isContentSearchComplete() /*override*/;

    virtual bool isContentSearchInProgress() const /*override*/;

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
    MCNAPI DlcBatchModel(::DlcBatchModel const&);

    MCNAPI explicit DlcBatchModel(::IDlcBatchModel const& ref);

    MCNAPI DlcBatchModel(
        ::IContentAcquisition&              contentAcquisition,
        ::IStoreCatalogRepository&          storeCatalog,
        ::std::vector<::std::string> const& productIds
    );

    MCNAPI DlcBatchModel(
        ::IContentAcquisition&         contentAcquisition,
        ::IStoreCatalogRepository&     storeCatalog,
        ::std::vector<::DlcId>         dlcIds,
        ::std::vector<::PackIdVersion> packIds
    );

    MCNAPI bool _canBeginDownload() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DlcBatchModel const&);

    MCNAPI void* $ctor(::IDlcBatchModel const& ref);

    MCNAPI void* $ctor(
        ::IContentAcquisition&              contentAcquisition,
        ::IStoreCatalogRepository&          storeCatalog,
        ::std::vector<::std::string> const& productIds
    );

    MCNAPI void* $ctor(
        ::IContentAcquisition&         contentAcquisition,
        ::IStoreCatalogRepository&     storeCatalog,
        ::std::vector<::DlcId>         dlcIds,
        ::std::vector<::PackIdVersion> packIds
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $containsProductId(::std::string const& productId) const;

    MCNAPI void $searchForProductIds(::std::function<void()> searchCompleteCallback);

    MCNAPI void $beginExclusiveDownload();

    MCNAPI void $beginPackDownload();

    MCNAPI void $beginPackDownloadWithPossibleThrottleWarning();

    MCNAPI void $beginAutoDownload();

    MCNAPI void $beginWorldPackDownload();

    MCNAPI void $cancelInactiveDownloads();

    MCNAPI void $cancelDownload();

    MCNAPI void $cancelPendingDownload();

    MCNAPI void $cancelPendingImport();

    MCNAPI void $pauseDownload();

    MCNAPI void $resumeDownload();

    MCNAPI bool $isDownloadingOrImporting() const;

    MCNAPI bool $isDownloading() const;

    MCNAPI bool $isDownloadComplete() const;

    MCNAPI uint64 $getDownloadSize() const;

    MCNAPI uint64 $getDownloadedBytes() const;

    MCNAPI float $getDownloadProgress() const;

    MCNAPI uint64 $getDownloadedCount() const;

    MCNAPI ::std::optional<int> $getIndexOfActiveDownload() const;

    MCNAPI bool $isImporting() const;

    MCNAPI bool $isImportComplete() const;

    MCNAPI bool $isImportWaiting() const;

    MCNAPI uint64 $getImportTotal() const;

    MCNAPI uint64 $getImportedCount() const;

    MCNAPI float $getImportProgress() const;

    MCNAPI ::std::optional<int> $getIndexOfActiveImport() const;

    MCNAPI ::std::vector<::DlcId> const& $getDlcIds() const;

    MCNAPI ::std::vector<::PackIdVersion> const& $getPackIds() const;

    MCNAPI ::std::vector<::std::string> $getProductIdList() const;

    MCNAPI ::ItemInstallState $getDlcInstalledState() const;

    MCNAPI bool $isContentSearchComplete();

    MCNAPI bool $isContentSearchInProgress() const;

    MCNAPI bool $isFailed() const;

    MCNAPI bool $isCancelled() const;

    MCNAPI void $setSilent(bool newSilent);

    MCNAPI bool $isSilent() const;

    MCNAPI ::IContentAcquisition& $contentAcquisition() const;

    MCNAPI ::IStoreCatalogRepository& $storeCatalog() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
