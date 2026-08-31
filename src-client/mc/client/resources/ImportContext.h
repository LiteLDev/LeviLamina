#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/ImportContextType.h"
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/resources/ImportSuccess.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/core/zip_utils/ZipProgressList.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackReport;
class ResourcePack;
namespace Core { class Path; }
// clang-format on

class ImportContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::Core::ZipUtils::ZipProgressList> mZipProgressList;
    ::ll::TypedStorage<8, 32, ::std::string>                      mSerializedGlobalStackPreUpdate;
    ::ll::TypedStorage<1, 1, bool>                                mSuppressImportStartedToast;
    ::ll::TypedStorage<1, 1, bool>                                mSuppressImportFinishedToast;
    ::ll::TypedStorage<1, 1, bool>                                mSuppressSelfToasts;
    ::ll::TypedStorage<1, 1, bool>                                mSuppressImportProgressScreen;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImportContext() = default;

    virtual ::Core::PathBuffer<::std::string> generatePackFolderName(::PackManifest const& manifest) = 0;

    virtual ::Core::PathBuffer<::std::string> getBehaviorPacksPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> getResourcePacksPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> getWorldTemplatePath() const = 0;

    virtual ::Core::PathBuffer<::std::string> getSkinPacksPath() const = 0;

    virtual ::Core::PathBuffer<::std::string> getPersonaPath() const = 0;

    virtual bool allowOverwrite() const = 0;

    virtual bool shouldUnzipToDestination(::PackManifest const& manifest) const = 0;

    virtual bool importAsFlatFile(::PackManifest const& manifest) const = 0;

    virtual ::ImportContextType getImportContextType() const = 0;

    virtual void notifyEarlyImportStarted(bool isWorld) = 0;

    virtual void notifyImportStarted(::PackManifest const& manifest) = 0;

    virtual void notifyMultiImportStarted(int pendingImportCount) = 0;

    virtual void notifyImportSucceeded(
        ::ResourcePack const* pack,
        ::ImportSuccess       success,
        ::PackManifest const& manifest,
        ::PackReport const&   packReport,
        ::Core::Path const&   packOutputFolder
    ) = 0;

    virtual void notifyImportFailed(
        ::ImportFailure       failure,
        ::PackManifest const* manifest,
        ::PackReport*         report,
        ::Core::Path const&   contentPath
    ) = 0;

    virtual bool modifyManifest(::PackManifest& manifest) = 0;
    // NOLINTEND
};
