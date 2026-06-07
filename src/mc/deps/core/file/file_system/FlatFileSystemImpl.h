#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class FlatFileSearchResult; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class FlatFileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke799e3;
    ::ll::UntypedStorage<8, 16> mUnkf2e326;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileSystemImpl& operator=(FlatFileSystemImpl const&);
    FlatFileSystemImpl(FlatFileSystemImpl const&);
    FlatFileSystemImpl();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlatFileSystemImpl(
        ::Core::FileSystemImpl&                            fileSystemImplementation,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
    );

    MCNAPI ::Core::FlatFileSearchResult
    _findFileOrDirectoryEntry(::Core::PathView filePath, ::Core::PathView manifestPath, bool skipDeleted);

    MCNAPI ::Core::Result _getSeekPositionAndSize(
        ::Core::PathView filePath,
        ::Core::PathView manifestPath,
        uint64&          seekPositionOut,
        uint64&          fileSizeOut
    );

    MCNAPI ::Core::Result copyFlatFile(
        ::Core::PathView                           sourceDirectoryPath,
        ::Core::PathView                           targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCNAPI ::Core::Result createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCNAPI ::Core::Result deleteFileOrDirectory(
        ::Core::PathView fileOrDirectoryPath,
        ::Core::PathView manifestPath,
        bool             directoryDeleteEnabled,
        bool             deleteRecursively
    );

    MCNAPI bool directoryExists(::Core::PathView directoryPath, ::Core::PathView manifestPath);

    MCNAPI bool fileExists(::Core::PathView filePath, ::Core::PathView manifestPath);

    MCNAPI bool fileOrDirectoryExists(::Core::PathView path, ::Core::PathView manifestPath);

    MCNAPI ::Core::Result getFileSize(::Core::PathView filePath, ::Core::PathView manifestPath, uint64* pFileSize);

    MCNAPI bool isDirectoryPathAFlatFile(::Core::PathView directoryPath);

    MCNAPI ::Core::Result iterateOverDirectory(
        ::Core::PathView                                                             directoryPath,
        ::Core::PathView                                                             manifestPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCNAPI ::Core::Result openFlatFile(
        ::std::unique_ptr<::Core::FileImpl>& fileOut,
        ::Core::PathView                     filePath,
        ::Core::PathView                     manifestPath,
        ::Core::FileOpenMode                 openMode,
        ::Core::FileBufferingMode            fileBufferingMode
    );

    MCNAPI bool shouldAccessFlatFile(
        ::Core::PathView                   path,
        ::Core::PathBuffer<::std::string>& manifestFilePath,
        bool                               shouldIncludeParentDir
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::FileSystemImpl&                            fileSystemImplementation,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
    );
    // NOLINTEND
};

} // namespace Core
