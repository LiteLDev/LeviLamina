#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/ItemInstallState.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct DlcId;
struct IContentAcquisition;
struct IStoreCatalogRepository;
// clang-format on

class IDlcBatchModel : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDlcBatchModel() /*override*/;

    virtual void searchForProductIds(::std::function<void(bool)>) = 0;

    virtual void beginExclusiveDownload() = 0;

    virtual void beginPackDownload() = 0;

    virtual void beginPackDownloadWithPossibleThrottleWarning() = 0;

    virtual void beginAutoDownload() = 0;

    virtual void beginWorldPackDownload() = 0;

    virtual void cancelDownload() = 0;

    virtual void cancelInactiveDownloads() = 0;

    virtual void cancelPendingDownload() = 0;

    virtual void cancelPendingImport() = 0;

    virtual bool containsProductId(::std::string const&) const = 0;

    virtual void pauseDownload() = 0;

    virtual void resumeDownload() = 0;

    virtual bool isDownloadingOrImporting() const = 0;

    virtual bool isDownloading() const = 0;

    virtual bool isDownloadComplete() const = 0;

    virtual uint64 getDownloadSize() const = 0;

    virtual uint64 getDownloadedBytes() const = 0;

    virtual float getDownloadProgress() const = 0;

    virtual uint64 getDownloadedCount() const = 0;

    virtual ::std::optional<int> getIndexOfActiveDownload() const = 0;

    virtual bool isImporting() const = 0;

    virtual bool isImportWaiting() const = 0;

    virtual uint64 getImportTotal() const = 0;

    virtual uint64 getImportedCount() const = 0;

    virtual float getImportProgress() const = 0;

    virtual int getIndexOfActiveImport() const = 0;

    virtual ::std::vector<::DlcId> const& getDlcIds() const = 0;

    virtual ::ItemInstallState getDlcInstalledState() const = 0;

    virtual bool isContentSearchComplete() = 0;

    virtual bool isFailed() const = 0;

    virtual bool isCancelled() const = 0;

    virtual ::IContentAcquisition& contentAcquisition() const = 0;

    virtual ::IStoreCatalogRepository& storeCatalog() const = 0;

    virtual void setSilent(bool) = 0;

    virtual bool isSilent() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
