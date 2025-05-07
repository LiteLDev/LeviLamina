#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/ItemInstallState.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IContentAcquisition;
class IStoreCatalogRepository;
// clang-format on

class IDlcBatchModel {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDlcBatchModel() = default;

    // vIndex: 1
    virtual void searchForProductIds(::std::function<void(bool)>) = 0;

    // vIndex: 2
    virtual void beginExclusiveDownload() = 0;

    // vIndex: 3
    virtual void beginPackDownload() = 0;

    // vIndex: 4
    virtual void beginPackDownloadWithPossibleThrottleWarning() = 0;

    // vIndex: 5
    virtual void beginAutoDownload() = 0;

    // vIndex: 6
    virtual void beginWorldPackDownload() = 0;

    // vIndex: 7
    virtual void cancelDownload() = 0;

    // vIndex: 8
    virtual void cancelPendingDownload() = 0;

    // vIndex: 9
    virtual void cancelPendingImport() = 0;

    // vIndex: 10
    virtual void pauseDownload() = 0;

    // vIndex: 11
    virtual void resumeDownload() = 0;

    // vIndex: 12
    virtual bool isDownloadingOrImporting() const = 0;

    // vIndex: 13
    virtual bool isDownloading() const = 0;

    // vIndex: 14
    virtual bool isDownloadComplete() const = 0;

    // vIndex: 15
    virtual uint64 getDownloadSize() const = 0;

    // vIndex: 16
    virtual uint64 getDownloadedBytes() const = 0;

    // vIndex: 17
    virtual float getDownloadProgress() const = 0;

    // vIndex: 18
    virtual uint64 getDownloadedCount() const = 0;

    // vIndex: 19
    virtual ::std::optional<int> getIndexOfActiveDownload() const = 0;

    // vIndex: 20
    virtual bool isImporting() const = 0;

    // vIndex: 21
    virtual bool isImportWaiting() const = 0;

    // vIndex: 22
    virtual uint64 getImportTotal() const = 0;

    // vIndex: 23
    virtual uint64 getImportedCount() const = 0;

    // vIndex: 24
    virtual float getImportProgress() const = 0;

    // vIndex: 25
    virtual int getIndexOfActiveImport() const = 0;

    // vIndex: 26
    virtual ::std::vector<::DlcId> const& getDlcIds() const = 0;

    // vIndex: 27
    virtual ::ItemInstallState getDlcInstalledState() const = 0;

    // vIndex: 28
    virtual bool isContentSearchComplete() = 0;

    // vIndex: 29
    virtual bool isFailed() const = 0;

    // vIndex: 30
    virtual bool isCancelled() const = 0;

    // vIndex: 31
    virtual ::IContentAcquisition& contentAcquisition() const = 0;

    // vIndex: 32
    virtual ::IStoreCatalogRepository& storeCatalog() const = 0;

    // vIndex: 33
    virtual void setSilent(bool) = 0;

    // vIndex: 34
    virtual bool isSilent() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
