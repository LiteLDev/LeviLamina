#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/ImportContextType.h"
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/resources/ImportSuccess.h"
#include "mc/deps/core/file/PathBuffer.h"

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
    ::ll::UntypedStorage<8, 104> mUnk28cf96;
    ::ll::UntypedStorage<8, 32>  mUnk2cca68;
    ::ll::UntypedStorage<1, 1>   mUnkc32d77;
    ::ll::UntypedStorage<1, 1>   mUnk8feed2;
    ::ll::UntypedStorage<1, 1>   mUnk74baac;
    ::ll::UntypedStorage<1, 1>   mUnk7a7261;
    // NOLINTEND

public:
    // prevent constructor by default
    ImportContext& operator=(ImportContext const&);
    ImportContext(ImportContext const&);
    ImportContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ImportContext();

    // vIndex: 1
    virtual ::Core::PathBuffer<::std::string> generatePackFolderName(::PackManifest const&) = 0;

    // vIndex: 2
    virtual ::Core::PathBuffer<::std::string> getBehaviorPacksPath() const = 0;

    // vIndex: 3
    virtual ::Core::PathBuffer<::std::string> getResourcePacksPath() const = 0;

    // vIndex: 4
    virtual ::Core::PathBuffer<::std::string> getWorldTemplatePath() const = 0;

    // vIndex: 5
    virtual ::Core::PathBuffer<::std::string> getSkinPacksPath() const = 0;

    // vIndex: 6
    virtual ::Core::PathBuffer<::std::string> getPersonaPath() const = 0;

    // vIndex: 7
    virtual bool allowOverwrite() const = 0;

    // vIndex: 8
    virtual bool shouldUnzipToDestination(::PackManifest const&) const = 0;

    // vIndex: 9
    virtual bool importAsFlatFile(::PackManifest const&) const = 0;

    // vIndex: 10
    virtual ::ImportContextType getImportContextType() const = 0;

    // vIndex: 11
    virtual void notifyEarlyImportStarted(bool) = 0;

    // vIndex: 12
    virtual void notifyImportStarted(::PackManifest const&) = 0;

    // vIndex: 13
    virtual void notifyMultiImportStarted(int) = 0;

    // vIndex: 14
    virtual void
    notifyImportSucceeded(::ResourcePack const*, ::ImportSuccess, ::PackManifest const&, ::PackReport const&, ::Core::Path const&) = 0;

    // vIndex: 15
    virtual void notifyImportFailed(::ImportFailure, ::PackManifest const*, ::PackReport*, ::Core::Path const&) = 0;

    // vIndex: 16
    virtual bool modifyManifest(::PackManifest&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
