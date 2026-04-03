#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ResourceLocation;
class TaskGroup;
namespace Core { class Path; }
namespace Core::ZipUtils { class IZipUtility; }
namespace Core::ZipUtils { struct ZipProgressList; }
// clang-format on

class PackMover {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void copyPack(
        ::TaskGroup&                        taskGroup,
        ::ResourceLocation const&           srcLocation,
        bool                                srcPackIsZipped,
        ::Core::Path const&                 destPath,
        bool                                zipDestination,
        ::std::vector<::std::string> const& excludeDirs,
        ::Core::ZipUtils::ZipProgressList*  progressList,
        ::std::function<void(bool)>         callback,
        bool                                unzipAsFlatFile,
        bool                                unzipInTransaction
    );

    MCNAPI_C static void copyPack(
        ::AppPlatform&                       appPlatform,
        ::TaskGroup&                         taskGroup,
        ::Core::ZipUtils::IZipUtility const& zipUtility,
        ::ResourceLocation const&            srcLocation,
        bool                                 srcPackIsZipped,
        ::Core::Path const&                  destPath,
        bool                                 zipDestination,
        ::std::vector<::std::string> const&  excludeDirs,
        ::Core::ZipUtils::ZipProgressList*   progressList,
        ::std::function<void(bool)>          callback,
        bool                                 unzipAsFlatFile,
        bool                                 unzipInTransaction
    );
    // NOLINTEND
};
