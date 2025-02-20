#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/InitiatorCategory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/NewType.h"

// auto generated forward declare list
// clang-format off
class DlcBatchThrottleBridge;
class DlcId;
class IContentTracker;
struct DownloadStateObject;
struct DurableDocument;
struct PackIdVersion;
struct PackImportStateObject;
// clang-format on

class IContentAcquisition {
public:
    // IContentAcquisition inner types declare
    // clang-format off
    struct ImportCallbackId;
    // clang-format on

    // IContentAcquisition inner types define
    struct ImportCallbackId : public ::NewType<uint64> {};

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IContentAcquisition() = default;

    // vIndex: 1
    virtual void triggerBlockingPendingImports() = 0;

    // vIndex: 2
    virtual void triggerPendingImportsFor(::PackIdVersion const&) = 0;

    // vIndex: 3
    virtual ::std::vector<::DlcId> getPendingImports() const = 0;

    // vIndex: 4
    virtual ::std::vector<::DlcId> getPendingAndActiveImports() const = 0;

    // vIndex: 5
    virtual void
    searchForDlcIdsByPackIds(::std::vector<::PackIdVersion> const&, ::std::function<void(::std::vector<::DlcId> const&)>) = 0;

    // vIndex: 6
    virtual void checkStorageRequirements(::std::vector<::DlcId> const&, ::std::function<void(bool, uint64)>) = 0;

    // vIndex: 7
    virtual void
    getTitles(::std::vector<::DlcId> const&, ::std::function<void(::std::vector<::std::string> const&)>) = 0;

    // vIndex: 8
    virtual ::IContentTracker& createContentTrackerFor(::DlcId const&) = 0;

    // vIndex: 9
    virtual void beginPackDownload(::DlcId const&, ::InitiatorCategory, bool) = 0;

    // vIndex: 10
    virtual void beginTreatmentPackDownload(::DlcId const&) = 0;

    // vIndex: 11
    virtual void beginSystemServicePackDownload(::DlcId const&) = 0;

    // vIndex: 12
    virtual void beginWorldPackDownload(::DlcId const&) = 0;

    // vIndex: 13
    virtual void interruptAllDownloads() = 0;

    // vIndex: 14
    virtual void pauseAllDownloads() = 0;

    // vIndex: 15
    virtual void pauseDownload(::DlcId const&) = 0;

    // vIndex: 16
    virtual void resumeAllDownloads() = 0;

    // vIndex: 17
    virtual void resumeDownload(::DlcId const&) = 0;

    // vIndex: 18
    virtual void cancelAllDownloads() = 0;

    // vIndex: 19
    virtual void cancelDownload(::DlcId const&) = 0;

    // vIndex: 20
    virtual void cancelInactiveDownload(::DlcId const&) = 0;

    // vIndex: 21
    virtual void cancelPendingDownload(::DlcId const&) = 0;

    // vIndex: 22
    virtual void cancelPendingImport(::DlcId const&) = 0;

    // vIndex: 23
    virtual void addDownloadCallback(::std::weak_ptr<bool>, ::std::function<void(::DownloadStateObject&)>) = 0;

    // vIndex: 24
    virtual void addUpdateFoundCallback(::std::function<void(::std::string const&, ::DurableDocument const&)>) = 0;

    // vIndex: 25
    virtual ::IContentAcquisition::ImportCallbackId
        addPackImportCallback(::std::weak_ptr<bool>, ::std::function<void(::PackImportStateObject&)>) = 0;

    // vIndex: 26
    virtual void removePackImportCallback(::IContentAcquisition::ImportCallbackId) = 0;

    // vIndex: 27
    virtual bool areAnyDownloadsActive() const = 0;

    // vIndex: 28
    virtual bool isDownloadActiveForAny(::std::vector<::DlcId> const&) const = 0;

    // vIndex: 29
    virtual bool isDownloadActiveFor(::DlcId const&) const = 0;

    // vIndex: 30
    virtual uint64 getDownloadSize(::DlcId const&) const = 0;

    // vIndex: 31
    virtual uint64 getDownloadedBytes(::DlcId const&) const = 0;

    // vIndex: 32
    virtual float getDownloadProgress(::DlcId const&) const = 0;

    // vIndex: 33
    virtual float getAllDownloadProgress() const = 0;

    // vIndex: 34
    virtual bool isDownloadComplete(::DlcId const&) const = 0;

    // vIndex: 35
    virtual bool isContentTrackerDownloadComplete(::DlcId const&) const = 0;

    // vIndex: 36
    virtual void clearCompletedDownloads() = 0;

    // vIndex: 37
    virtual bool hasDownloadFailedForAny(::std::vector<::DlcId> const&) const = 0;

    // vIndex: 38
    virtual bool hasDownloadCancelledForAny(::std::vector<::DlcId> const&) const = 0;

    // vIndex: 39
    virtual void removeFromCancelledDownloads(::std::vector<::DlcId> const&) = 0;

    // vIndex: 40
    virtual bool hasDownloadFailedFor(::DlcId const&) const = 0;

    // vIndex: 41
    virtual bool areAnyImportsWaiting() const = 0;

    // vIndex: 42
    virtual bool areAnyImportsActive() const = 0;

    // vIndex: 43
    virtual bool areAnyBlockingImportsWaiting() const = 0;

    // vIndex: 44
    virtual bool areAnyBlockingImportsActive() const = 0;

    // vIndex: 45
    virtual bool isImportActiveForAny(::std::vector<::DlcId> const&) const = 0;

    // vIndex: 46
    virtual bool isImportActiveFor(::DlcId const&) const = 0;

    // vIndex: 47
    virtual bool isImportWaitingFor(::DlcId const&) const = 0;

    // vIndex: 48
    virtual uint64 getImportTotal(::DlcId const&) const = 0;

    // vIndex: 49
    virtual uint64 getImportedCount(::DlcId const&) const = 0;

    // vIndex: 50
    virtual float getImportProgress(::DlcId const&) const = 0;

    // vIndex: 51
    virtual float getAllImportProgress() const = 0;

    // vIndex: 52
    virtual bool isDownloadOrImportInProgressFor(::DlcId const&) const = 0;

    // vIndex: 53
    virtual bool isDownloadOrImportInProgressForAny(::std::vector<::DlcId> const&) const = 0;

    // vIndex: 54
    virtual ::Bedrock::NotNullNonOwnerPtr<::DlcBatchThrottleBridge> getThrottleBridge() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
