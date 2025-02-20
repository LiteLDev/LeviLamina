#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct PendingWrite; }
// clang-format on

namespace Core {

class ThrottledAccessFileSystem : public ::Core::FileSystemImpl {
public:
    // ThrottledAccessFileSystem inner types declare
    // clang-format off
    struct DirectoryItem;
    // clang-format on

    // ThrottledAccessFileSystem inner types define
    struct DirectoryItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032> mUnk3d65e9;
        ::ll::UntypedStorage<8, 8>    mUnkc99017;
        ::ll::UntypedStorage<4, 4>    mUnk71c502;
        ::ll::UntypedStorage<8, 1032> mUnk165055;
        // NOLINTEND

    public:
        // prevent constructor by default
        DirectoryItem& operator=(DirectoryItem const&);
        DirectoryItem(DirectoryItem const&);
        DirectoryItem();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk533b41;
    ::ll::UntypedStorage<8, 8>  mUnk1b0f29;
    ::ll::UntypedStorage<8, 8>  mUnk7dc5e1;
    ::ll::UntypedStorage<1, 1>  mUnk8de552;
    ::ll::UntypedStorage<8, 16> mUnkd74289;
    ::ll::UntypedStorage<8, 8>  mUnkfd8d65;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledAccessFileSystem& operator=(ThrottledAccessFileSystem const&);
    ThrottledAccessFileSystem(ThrottledAccessFileSystem const&);
    ThrottledAccessFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThrottledAccessFileSystem() /*override*/ = default;

    // vIndex: 7
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::PathView,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) /*override*/;

    // vIndex: 8
    virtual bool _fileExists(::Core::PathView) /*override*/;

    // vIndex: 9
    virtual ::Core::Result _deleteFile(::Core::PathView) /*override*/;

    // vIndex: 10
    virtual ::Core::Result _getFileSize(::Core::PathView, uint64*) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) /*override*/;

    // vIndex: 12
    virtual ::Core::Result _createEmptyFile(::Core::PathView fileName) /*override*/;

    // vIndex: 16
    virtual ::Core::Result _createOneDirectory(::Core::PathView) /*override*/;

    // vIndex: 17
    virtual ::Core::Result _createOneDirectoryIfNotExisting(::Core::PathView directoryPath) /*override*/;

    // vIndex: 18
    virtual ::Core::Result _createDirectoryRecursively(::Core::PathView directoryPath) /*override*/;

    // vIndex: 19
    virtual bool _directoryExists(::Core::PathView) /*override*/;

    // vIndex: 20
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) /*override*/;

    // vIndex: 21
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath) /*override*/;

    // vIndex: 22
    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::PathView directoryPath) /*override*/;

    // vIndex: 24
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) /*override*/;

    // vIndex: 25
    virtual ::Core::Result
        _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>) /*override*/
        ;

    // vIndex: 31
    virtual bool _fileOrDirectoryExists(::Core::PathView) /*override*/;

    // vIndex: 33
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) /*override*/;

    // vIndex: 44
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, int64*) /*override*/;

    // vIndex: 45
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) /*override*/;

    // vIndex: 34
    virtual ::Core::Result _addIgnoredThrottlePath(::Core::PathView) /*override*/;

    // vIndex: 35
    virtual ::Core::Result _removeIgnoredThrottlePath(::Core::PathView) /*override*/;

    // vIndex: 36
    virtual ::Core::Result
    _createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath) /*override*/;

    // vIndex: 3
    virtual void requestFlush(::std::vector<::Core::PendingWrite> const& writeRequests) /*override*/;

    // vIndex: 4
    virtual bool shouldCommit() /*override*/;

    // vIndex: 5
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode() /*override*/;

    // vIndex: 48
    virtual void _initializeInternal() /*override*/;
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

} // namespace Core
