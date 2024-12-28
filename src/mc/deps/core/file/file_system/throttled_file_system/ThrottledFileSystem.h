#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class ThrottledFileSystem : public ::Core::FileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8fe63a;
    ::ll::UntypedStorage<8, 8>  mUnka1d3a3;
    ::ll::UntypedStorage<8, 16> mUnke52853;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledFileSystem& operator=(ThrottledFileSystem const&);
    ThrottledFileSystem(ThrottledFileSystem const&);
    ThrottledFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThrottledFileSystem() /*override*/;

    // vIndex: 7
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::Path const&,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) /*override*/;

    // vIndex: 8
    virtual bool _fileExists(::Core::Path const&) /*override*/;

    // vIndex: 9
    virtual ::Core::Result _deleteFile(::Core::Path const&) /*override*/;

    // vIndex: 10
    virtual ::Core::Result _getFileSize(::Core::Path const&, uint64*) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _renameFile(::Core::Path const&, ::Core::Path const&) /*override*/;

    // vIndex: 12
    virtual ::Core::Result _createEmptyFile(::Core::Path const& fileName) /*override*/;

    // vIndex: 16
    virtual ::Core::Result _createOneDirectory(::Core::Path const&) /*override*/;

    // vIndex: 18
    virtual ::Core::Result _createDirectoryRecursively(::Core::Path const& directoryPath) /*override*/;

    // vIndex: 19
    virtual bool _directoryExists(::Core::Path const&) /*override*/;

    // vIndex: 20
    virtual ::Core::Result _deleteEmptyDirectory(::Core::Path const&) /*override*/;

    // vIndex: 24
    virtual ::Core::Result _renameDirectory(::Core::Path const&, ::Core::Path const&) /*override*/;

    // vIndex: 25
    virtual ::Core::Result
    _iterateOverDirectory(::Core::Path const&, ::Core::DirectoryIterationFlags, ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>) /*override*/
        ;

    // vIndex: 31
    virtual bool _fileOrDirectoryExists(::Core::Path const&) /*override*/;

    // vIndex: 33
    virtual ::Core::Result _getEntryType(::Core::Path const&, ::Core::FileType&) /*override*/;

    // vIndex: 44
    virtual ::Core::Result _getLastModificationTime(::Core::Path const&, int64*) /*override*/;

    // vIndex: 45
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::Path const&, ::Core::Path const&) /*override*/;

    // vIndex: 34
    virtual ::Core::Result _addIgnoredThrottlePath(::Core::Path const&) /*override*/;

    // vIndex: 35
    virtual ::Core::Result _removeIgnoredThrottlePath(::Core::Path const&) /*override*/;

    // vIndex: 46
    virtual ::Core::Result _endTransaction() /*override*/;

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Core::Result $_openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::Path const&,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    );

    MCAPI bool $_fileExists(::Core::Path const&);

    MCAPI ::Core::Result $_deleteFile(::Core::Path const&);

    MCAPI ::Core::Result $_getFileSize(::Core::Path const&, uint64*);

    MCAPI ::Core::Result $_renameFile(::Core::Path const&, ::Core::Path const&);

    MCAPI ::Core::Result $_createEmptyFile(::Core::Path const& fileName);

    MCAPI ::Core::Result $_createOneDirectory(::Core::Path const&);

    MCAPI ::Core::Result $_createDirectoryRecursively(::Core::Path const& directoryPath);

    MCAPI bool $_directoryExists(::Core::Path const&);

    MCAPI ::Core::Result $_deleteEmptyDirectory(::Core::Path const&);

    MCAPI ::Core::Result $_renameDirectory(::Core::Path const&, ::Core::Path const&);

    MCAPI ::Core::Result
    $_iterateOverDirectory(::Core::Path const&, ::Core::DirectoryIterationFlags, ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>);

    MCAPI bool $_fileOrDirectoryExists(::Core::Path const&);

    MCAPI ::Core::Result $_getEntryType(::Core::Path const&, ::Core::FileType&);

    MCAPI ::Core::Result $_getLastModificationTime(::Core::Path const&, int64*);

    MCAPI ::Core::Result $_copyTimeAndAccessRights(::Core::Path const&, ::Core::Path const&);

    MCAPI ::Core::Result $_addIgnoredThrottlePath(::Core::Path const&);

    MCAPI ::Core::Result $_removeIgnoredThrottlePath(::Core::Path const&);

    MCAPI ::Core::Result $_endTransaction();

    MCAPI bool $shouldCommit();

    MCAPI ::Core::CrossStorageCopyMode $getCrossStorageCopyMode();

    MCAPI void $_initializeInternal();
    // NOLINTEND
};

} // namespace Core
