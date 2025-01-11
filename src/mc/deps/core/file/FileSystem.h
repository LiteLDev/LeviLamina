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
namespace Core { class Path; }
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
        MCAPI ~BasicFileData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    // vIndex: 1
    virtual ::Core::Result
    openFile(::Core::Path const&, ::Core::File&, ::Core::FileOpenMode, ::Core::FileBufferingMode) = 0;

    // vIndex: 2
    virtual bool fileExists(::Core::Path const&) = 0;

    // vIndex: 3
    virtual ::Core::Result deleteFile(::Core::Path const&) = 0;

    // vIndex: 4
    virtual ::Core::Result getFileSize(::Core::Path const&, uint64*) = 0;

    // vIndex: 5
    virtual ::Core::Result renameFile(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 6
    virtual ::Core::Result createEmptyFile(::Core::Path const&) = 0;

    // vIndex: 7
    virtual ::Core::Result copyFile(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 8
    virtual ::Core::Result copyFileWithLimit(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 9
    virtual ::Core::Result readFileData(::Core::Path const&, ::std::vector<uchar>&) = 0;

    // vIndex: 10
    virtual ::Core::Result createOneDirectory(::Core::Path const&) = 0;

    // vIndex: 11
    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::Path const&) = 0;

    // vIndex: 12
    virtual ::Core::Result createDirectoryRecursively(::Core::Path const&) = 0;

    // vIndex: 13
    virtual bool directoryExists(::Core::Path const&) = 0;

    // vIndex: 14
    virtual ::Core::Result deleteEmptyDirectory(::Core::Path const&) = 0;

    // vIndex: 15
    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::Path const&) = 0;

    // vIndex: 16
    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::Path const&) = 0;

    // vIndex: 17
    virtual ::Core::Result renameDirectory(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 18
    virtual ::Core::Result
    iterateOverDirectory(::Core::Path const&, ::Core::DirectoryIterationFlags, ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>) = 0;

    // vIndex: 19
    virtual ::Core::Result
    getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>&, ::Core::Path const&) = 0;

    // vIndex: 20
    virtual ::Core::Result
    getDirectoryFilesAndSizes(::std::vector<::Core::FileSystem::BasicFileData>&, ::Core::Path const&) = 0;

    // vIndex: 21
    virtual ::Core::Result
    getDirectoryFilesRecursively(::std::vector<::Core::PathBuffer<::std::string>>&, ::Core::Path const&) = 0;

    // vIndex: 22
    virtual ::Core::Result getDirectoryFilesSizeRecursively(uint64&, ::Core::Path const&) = 0;

    // vIndex: 23
    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(uint64&, uint64&, ::Core::Path const&) = 0;

    // vIndex: 24
    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 25
    virtual ::Core::Result copyDirectoryAndContentsRecursivelyWithLimit(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 26
    virtual bool isDirectoryPartiallyCopied(::Core::Path const&) = 0;

    // vIndex: 27
    virtual bool fileOrDirectoryExists(::Core::Path const&) = 0;

    // vIndex: 28
    virtual ::Core::Result getFileOrDirectorySize(::Core::Path const&, uint64*) = 0;

    // vIndex: 29
    virtual ::Core::Result addIgnoredThrottlePath(::Core::Path const&) = 0;

    // vIndex: 30
    virtual ::Core::Result removeIgnoredThrottlePath(::Core::Path const&) = 0;

    // vIndex: 31
    virtual ::Core::Result isValidPath(::Core::Path const&) = 0;

    // vIndex: 32
    virtual ::Core::Result getLastModificationTime(::Core::Path const&, int64*) = 0;

    // vIndex: 33
    virtual ::Core::Result copyTimeAndAccessRights(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 34
    virtual ::Core::Result createFlatFile(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 35
    virtual bool isDirectoryPathAFlatFile(::Core::Path const&) = 0;

    // vIndex: 36
    virtual ::Core::Result
    copyFlatFile(::Core::Path const&, ::Core::Path const&, ::std::vector<::Core::ExcludedPath> const&, ::std::vector<::Core::ExcludedPath> const&) = 0;

    // vIndex: 37
    virtual ::Core::Result createDirectoryForFile(::Core::Path const&) = 0;

    // vIndex: 38
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> getUniqueFilePathForFile(::Core::Path const&) = 0;

    // vIndex: 39
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForDirectory(::Core::Path const&) = 0;

    // vIndex: 40
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    createUniquePathFromSeed(::Core::Path const&, ::std::function<::std::string(int)>) = 0;

    // vIndex: 41
    virtual ::std::vector<::Core::PathBuffer<::std::string>> splitPathIntoFullPathSegments(::Core::Path const&) = 0;

    // vIndex: 42
    virtual ::Core::Result readFileDataExt(::Core::Path const&, uint64, uint64, ::std::vector<uchar>&, uint64&) = 0;

    // vIndex: 43
    virtual ::Core::Result
    cleanPath_deprecated(::Core::PathBuffer<::Core::BasicStackString<char, 1024>>&, ::Core::Path const&) = 0;

    // vIndex: 44
    virtual ::Core::Result
    cleanPathSeparators_deprecated(::Core::PathBuffer<::Core::BasicStackString<char, 1024>>&, ::Core::Path const&) = 0;

    // vIndex: 45
    virtual bool checkStorageCorrupt(::Core::Path const&) = 0;

    // vIndex: 46
    virtual ::std::unique_ptr<::Core::FileSizePresetToken> presetFileInitialSize(::Core::Path const&, uint64) = 0;

    // vIndex: 47
    virtual ::Core::Result
    _getDirectoriesAndFileSizesRecursively(::Core::Path const&, ::std::vector<::Core::PathBuffer<::std::string>>&, ::std::vector<::Core::FileSystem::BasicFileData>&) = 0;

    // vIndex: 48
    virtual ::Core::Result
    _copyDirectoryStructure(::Core::Path const&, ::Core::Path const&, ::std::vector<::Core::PathBuffer<::std::string>> const&, ::Core::FileSystemImpl*) = 0;

    // vIndex: 49
    virtual ::Core::Result
    _copyFilesWithLimit(::Core::Path const&, ::Core::Path const&, ::std::vector<::Core::FileSystem::BasicFileData>&, uint64&, uint64 const, ::std::function<::Core::Result(::Core::Path const&, ::Core::Path const&, ::Core::FileSystem::FileTransferProgress&)> const&) = 0;

    // vIndex: 50
    virtual ::Core::Result
    _copyFlatFile(::Core::Path const&, ::Core::Path const&, ::std::vector<::Core::ExcludedPath> const&, ::std::vector<::Core::ExcludedPath> const&) = 0;

    // vIndex: 51
    virtual ::std::optional<uint64> _checkFileInitialSize(::Core::Path const&) = 0;

    // vIndex: 0
    virtual ~FileSystem() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::FileSystem& get();
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

} // namespace Core
