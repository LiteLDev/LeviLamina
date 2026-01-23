#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSizePresetToken; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class FileSystem : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FileSystem inner types declare
    // clang-format off
    struct BasicFileData;
    struct FileTransferProgress;
    // clang-format on

    // FileSystem inner types define
    struct BasicFileData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk698b95;
        ::ll::UntypedStorage<8, 8>  mUnk7ec39a;
        // NOLINTEND

    public:
        // prevent constructor by default
        BasicFileData& operator=(BasicFileData const&);
        BasicFileData(BasicFileData const&);
        BasicFileData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BasicFileData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct FileTransferProgress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1ae043;
        ::ll::UntypedStorage<8, 8> mUnkd6dcba;
        ::ll::UntypedStorage<8, 8> mUnke8d3af;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileTransferProgress& operator=(FileTransferProgress const&);
        FileTransferProgress(FileTransferProgress const&);
        FileTransferProgress();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Core::Result
    openFile(::Core::PathView, ::Core::File&, ::Core::FileOpenMode, ::Core::FileBufferingMode) = 0;

    virtual bool fileExists(::Core::PathView) = 0;

    virtual ::Core::Result deleteFile(::Core::PathView) = 0;

    virtual ::Core::Result deleteFilePriority(::Core::PathView) = 0;

    virtual ::Core::Result getFileSize(::Core::PathView, uint64*) = 0;

    virtual ::Core::Result renameFile(::Core::PathView, ::Core::PathView) = 0;

    virtual ::Core::Result createEmptyFile(::Core::PathView) = 0;

    virtual ::Core::Result copyFile(::Core::PathView, ::Core::PathView) = 0;

    virtual ::Core::Result copyFileWithLimit(::Core::PathView, ::Core::PathView) = 0;

    virtual ::Core::Result readFileData(::Core::PathView, ::std::vector<uchar>&) = 0;

    virtual ::Core::Result createOneDirectory(::Core::PathView) = 0;

    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView) = 0;

    virtual ::Core::Result createDirectoryRecursively(::Core::PathView) = 0;

    virtual bool directoryExists(::Core::PathView) = 0;

    virtual ::Core::Result deleteEmptyDirectory(::Core::PathView) = 0;

    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView) = 0;

    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView) = 0;

    virtual ::Core::Result renameDirectory(::Core::PathView, ::Core::PathView) = 0;

    virtual ::Core::Result iterateOverDirectory(
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>
    ) = 0;

    virtual ::Core::Result getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>&, ::Core::PathView) = 0;

    virtual ::Core::Result
    getDirectoryFilesAndSizes(::std::vector<::Core::FileSystem::BasicFileData>&, ::Core::PathView) = 0;

    virtual ::Core::Result
    getDirectoryFilesRecursively(::std::vector<::Core::PathBuffer<::std::string>>&, ::Core::PathView) = 0;

    virtual ::Core::Result getDirectoryFilesSizeRecursively(uint64&, ::Core::PathView) = 0;

    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(uint64&, uint64&, ::Core::PathView) = 0;

    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView, ::Core::PathView) = 0;

    virtual ::Core::Result copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView, ::Core::PathView) = 0;

    virtual bool isDirectoryPartiallyCopied(::Core::PathView) = 0;

    virtual bool fileOrDirectoryExists(::Core::PathView) = 0;

    virtual ::Core::Result getFileOrDirectorySize(::Core::PathView, uint64*) = 0;

    virtual ::Core::Result addIgnoredThrottlePath(::Core::PathView) = 0;

    virtual ::Core::Result removeIgnoredThrottlePath(::Core::PathView) = 0;

    virtual ::Core::Result isValidPath(::Core::PathView) = 0;

    virtual ::Core::Result getLastModificationTime(::Core::PathView, int64*) = 0;

    virtual ::Core::Result copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) = 0;

    virtual ::Core::Result createFlatFile(::Core::PathView, ::Core::PathView) = 0;

    virtual bool isDirectoryPathAFlatFile(::Core::PathView) = 0;

    virtual ::Core::Result copyFlatFile(
        ::Core::PathView,
        ::Core::PathView,
        ::std::vector<::Core::ExcludedPath> const&,
        ::std::vector<::Core::ExcludedPath> const&
    ) = 0;

    virtual ::Core::Result createDirectoryForFile(::Core::PathView) = 0;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> getUniqueFilePathForFile(::Core::PathView) = 0;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
        getUniqueFilePathForDirectory(::Core::PathView) = 0;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
        createUniquePathFromSeed(::Core::PathView, ::std::function<::std::string(int)>) = 0;

    virtual ::std::vector<::Core::PathBuffer<::std::string>> splitPathIntoFullPathSegments(::Core::PathView) = 0;

    virtual ::Core::Result readFileDataExt(::Core::PathView, uint64, uint64, ::std::vector<uchar>&, uint64&) = 0;

    virtual ::Core::Result
    cleanPath_deprecated(::Core::PathBuffer<::Core::BasicStackString<char, 1024>>&, ::Core::PathView) = 0;

    virtual ::Core::Result
    cleanPathSeparators_deprecated(::Core::PathBuffer<::Core::BasicStackString<char, 1024>>&, ::Core::PathView) = 0;

    virtual bool checkStorageCorrupt(::Core::PathView) = 0;

    virtual ::std::unique_ptr<::Core::FileSizePresetToken> presetFileInitialSize(::Core::PathView, uint64) = 0;

    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(
        ::Core::PathView,
        ::std::vector<::Core::PathBuffer<::std::string>>&,
        ::std::vector<::Core::FileSystem::BasicFileData>&
    ) = 0;

    virtual ::Core::Result _copyDirectoryStructure(
        ::Core::PathView,
        ::Core::PathView,
        ::std::vector<::Core::PathBuffer<::std::string>> const&,
        ::Core::FileSystemImpl*
    ) = 0;

    virtual ::Core::Result _copyFilesWithLimit(
        ::Core::PathView,
        ::Core::PathView,
        ::std::vector<::Core::FileSystem::BasicFileData>&,
        uint64&,
        uint64 const,
        ::std::function<
            ::Core::Result(::Core::PathView, ::Core::PathView, ::Core::FileSystem::FileTransferProgress&)> const&
    ) = 0;

    virtual ::Core::Result _copyFlatFile(
        ::Core::PathView,
        ::Core::PathView,
        ::std::vector<::Core::ExcludedPath> const&,
        ::std::vector<::Core::ExcludedPath> const&
    ) = 0;

    virtual ::std::optional<uint64> _checkFileInitialSize(::Core::PathView) = 0;

    virtual ~FileSystem() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::FileSystem& get();
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

} // namespace Core
