#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestInfo; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class FlatFileOperations {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result copyFlatFile(
        ::Core::FileSystemImpl*                    sourceTransaction,
        ::Core::PathView                           sourceDirectoryPath,
        ::Core::FileSystemImpl*                    targetTransaction,
        ::Core::PathView                           targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& exclusionDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCNAPI static ::Core::Result createFlatFile(
        ::Core::FileSystemImpl*                    sourceTransaction,
        ::Core::PathView                           sourceDirectoryPath,
        ::Core::FileSystemImpl*                    targetTransaction,
        ::Core::PathView                           targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& exclusionPaths,
        bool                                       deleteSourceDirectory
    );

    MCNAPI static ::Core::Result createFlatFileManifest(
        ::Core::FileSystemImpl&                            transaction,
        ::Core::PathView                                   flatFileManifestPath,
        ::std::vector<::Core::FlatFileManifestInfo> const& manifestInfoVector
    );

    MCNAPI static ::Core::Result replaceFlatFileManifest(
        ::Core::FileSystemImpl&                            transaction,
        ::Core::PathView                                   flatFileManifestPath,
        ::std::vector<::Core::FlatFileManifestInfo> const& manifestInfoVector,
        bool                                               keepCached
    );

    MCNAPI static ::Core::Result transferFlatFileDirectory(
        ::Core::FileSystemImpl* sourceTransaction,
        ::Core::PathView        sourceDirectoryPath,
        ::Core::FileSystemImpl* targetTransaction,
        ::Core::PathView        targetDirectoryPath
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& FLAT_FILE_CURRENT_VERSION();

    MCAPI static ::std::string const& FLAT_FILE_EMPTY_MANIFEST_FILE();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& FLAT_FILE_EXTENSION();

    MCAPI static uint64 const& FLAT_FILE_INVALID_VERSION();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& FLAT_FILE_MANIFEST_EXTENSION();
    // NOLINTEND
};

} // namespace Core
