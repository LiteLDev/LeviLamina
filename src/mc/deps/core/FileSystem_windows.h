#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/DirectoryIterationFlags.h"
#include "mc/deps/core/FileAccessType.h"
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/FileType.h"
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class FileSystem_windows {
public:
    // prevent constructor by default
    FileSystem_windows& operator=(FileSystem_windows const&);
    FileSystem_windows(FileSystem_windows const&);
    FileSystem_windows();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FileSystem_windows@Core@@UEAA@XZ
    virtual ~FileSystem_windows() = default;

    // vIndex: 1, symbol: ?getLastModificationTime@FileSystemImpl@Core@@UEAA?AVResult@2@AEBVPath@2@PEA_J@Z
    virtual class Core::Result getLastModificationTime(class Core::Path const& entryPath, int64* lastModificationTime);

    // vIndex: 2, symbol: ?copyTimeAndAccessRights@FileSystemImpl@Core@@UEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result
    copyTimeAndAccessRights(class Core::Path const& sourceFilePath, class Core::Path const& targetFilePath);

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol:
    // ?_openFile@FileSystem_windows@Core@@MEAA?AVResult@2@AEAV?$unique_ptr@VFileImpl@Core@@U?$default_delete@VFileImpl@Core@@@std@@@std@@AEBVPath@2@VFileOpenMode@2@W4FileBufferingMode@2@@Z
    virtual class Core::Result _openFile(
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::FileOpenMode,
        ::Core::FileBufferingMode
    );

    // vIndex: 8, symbol: ?_fileExists@FileSystem_windows@Core@@MEAA_NAEBVPath@2@@Z
    virtual bool _fileExists(class Core::Path const&);

    // vIndex: 9, symbol: ?_deleteFile@FileSystem_windows@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _deleteFile(class Core::Path const&);

    // vIndex: 10, symbol: ?_getFileSize@FileSystem_windows@Core@@MEAA?AVResult@2@AEBVPath@2@PEA_K@Z
    virtual class Core::Result _getFileSize(class Core::Path const&, uint64*);

    // vIndex: 11, symbol: ?_renameFile@FileSystem_windows@Core@@MEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result _renameFile(class Core::Path const&, class Core::Path const&);

    // vIndex: 12, symbol: ?_createEmptyFile@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _createEmptyFile(class Core::Path const& fileName);

    // vIndex: 13, symbol: ?_copyFile@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result
    _copyFile(class Core::Path const& sourceFileName, class Core::Path const& targetFileName);

    // vIndex: 14, symbol: ?_copyFileWithLimit@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0_KAEA_K2@Z
    virtual class Core::Result _copyFileWithLimit(
        class Core::Path const& sourceFileName,
        class Core::Path const& targetFileName,
        uint64                  startPosition,
        uint64&                 outBytesWritten,
        uint64&                 outBytesRemaining
    );

    // vIndex: 15, symbol:
    // ?_readFileData@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@AEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual class Core::Result _readFileData(class Core::Path const& filePath, std::vector<uchar>& data);

    // vIndex: 16, symbol: ?_createOneDirectory@FileSystem_windows@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _createOneDirectory(class Core::Path const&);

    // vIndex: 17, symbol: ?_createOneDirectoryIfNotExisting@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _createOneDirectoryIfNotExisting(class Core::Path const& directoryPath);

    // vIndex: 18, symbol: ?_createDirectoryRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _createDirectoryRecursively(class Core::Path const& directoryPath);

    // vIndex: 19, symbol: ?_directoryExists@FileSystem_windows@Core@@MEAA_NAEBVPath@2@@Z
    virtual bool _directoryExists(class Core::Path const&);

    // vIndex: 20, symbol: ?_deleteEmptyDirectory@FileSystem_windows@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _deleteEmptyDirectory(class Core::Path const&);

    // vIndex: 21, symbol: ?_deleteDirectoryAndContentsRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _deleteDirectoryAndContentsRecursively(class Core::Path const& directoryPath);

    // vIndex: 22, symbol: ?_deleteDirectoryContentsRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _deleteDirectoryContentsRecursively(class Core::Path const& directoryPath);

    // vIndex: 23, symbol: ?_deleteRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@W4FileType@2@@Z
    virtual class Core::Result
    _deleteRecursively(class Core::Path const& directoryPath, ::Core::FileType deleteFileType);

    // vIndex: 24, symbol: ?_renameDirectory@FileSystem_windows@Core@@MEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result _renameDirectory(class Core::Path const&, class Core::Path const&);

    // vIndex: 25, symbol:
    // ?_iterateOverDirectory@FileSystem_windows@Core@@MEAA?AVResult@2@AEBVPath@2@W4DirectoryIterationFlags@2@V?$function@$$A6A?AVResult@Core@@AEBUDirectoryIterationItem@2@@Z@std@@@Z
    virtual class Core::Result
    _iterateOverDirectory(class Core::Path const&, ::Core::DirectoryIterationFlags, std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);

    // vIndex: 26, symbol:
    // ?_getDirectoryFiles@FileSystemImpl@Core@@MEAA?AVResult@2@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    virtual class Core::Result
    _getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>& files, class Core::Path const& directoryPath);

    // vIndex: 27, symbol:
    // ?_getDirectoryFilesRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    virtual class Core::Result _getDirectoryFilesRecursively(
        std::vector<class Core::PathBuffer<std::string>>& filesOut,
        class Core::Path const&                           directoryPath
    );

    // vIndex: 28, symbol: ?_getDirectoryFilesSizeRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEA_KAEBVPath@2@@Z
    virtual class Core::Result
    _getDirectoryFilesSizeRecursively(uint64& totalSize, class Core::Path const& directoryPath);

    // vIndex: 29, symbol:
    // ?_getDirectoryFilesAllocatedSizeRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEA_K0AEBVPath@2@@Z
    virtual class Core::Result _getDirectoryFilesAllocatedSizeRecursively(
        uint64&                 totalSize,
        uint64&                 totalSizeAllocated,
        class Core::Path const& directoryPath
    );

    // vIndex: 30, symbol: ?_copyDirectoryAndContentsRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result _copyDirectoryAndContentsRecursively(
        class Core::Path const& sourceDirectoryPath,
        class Core::Path const& targetDirectoryPath
    );

    // vIndex: 31, symbol: ?_fileOrDirectoryExists@FileSystem_windows@Core@@MEAA_NAEBVPath@2@@Z
    virtual bool _fileOrDirectoryExists(class Core::Path const&);

    // vIndex: 32, symbol: ?_getFileOrDirectorySize@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@PEA_K@Z
    virtual class Core::Result _getFileOrDirectorySize(class Core::Path const& entryName, uint64* pFileSizeOut);

    // vIndex: 33, symbol: ?_getEntryType@FileSystem_windows@Core@@MEAA?AVResult@2@AEBVPath@2@AEAW4FileType@2@@Z
    virtual class Core::Result _getEntryType(class Core::Path const&, ::Core::FileType&);

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: ?_createFlatFile@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result
    _createFlatFile(class Core::Path const& sourceDirectoryPath, class Core::Path const& targetDirectoryPath);

    // vIndex: 37, symbol: ?_flatFileFileExists@FileSystemImpl@Core@@MEAA_NAEBVPath@2@0@Z
    virtual bool _flatFileFileExists(class Core::Path const& filePath, class Core::Path const& manifestPath);

    // vIndex: 38, symbol: ?_flatFileDirectoryExists@FileSystemImpl@Core@@MEAA_NAEBVPath@2@0@Z
    virtual bool _flatFileDirectoryExists(class Core::Path const& directoryPath, class Core::Path const& manifestPath);

    // vIndex: 39, symbol:
    // ?_flatFileIterateOverDirectory@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0W4DirectoryIterationFlags@2@V?$function@$$A6A?AVResult@Core@@AEBUDirectoryIterationItem@2@@Z@std@@@Z
    virtual class Core::Result _flatFileIterateOverDirectory(
        class Core::Path const&                                                       directoryPath,
        class Core::Path const&                                                       manifestPath,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    );

    // vIndex: 40, symbol: ?_isDirectoryPathAFlatFile@FileSystemImpl@Core@@MEAA_NAEBVPath@2@@Z
    virtual bool _isDirectoryPathAFlatFile(class Core::Path const& directoryPath);

    // vIndex: 41, symbol:
    // ?_copyFlatFile@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0AEBV?$vector@UExcludedPath@Core@@V?$allocator@UExcludedPath@Core@@@std@@@std@@1@Z
    virtual class Core::Result _copyFlatFile(
        class Core::Path const&                       sourceDirectoryPath,
        class Core::Path const&                       targetDirectoryPath,
        std::vector<struct Core::ExcludedPath> const& excludedDirectories,
        std::vector<struct Core::ExcludedPath> const& excludedFiles
    );

    // vIndex: 42, symbol: ?_flatFileDeleteFileOrDirectory@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0_N1@Z
    virtual class Core::Result _flatFileDeleteFileOrDirectory(
        class Core::Path const& fileOrDirectoryPath,
        class Core::Path const& manifestPath,
        bool                    directoryDeleteEnabled,
        bool                    deleteRecursively
    );

    // vIndex: 43, symbol: ?_flatFileGetFileSize@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0PEA_K@Z
    virtual class Core::Result
    _flatFileGetFileSize(class Core::Path const& filePath, class Core::Path const& manifestPath, uint64* pFileSize);

    // vIndex: 44, symbol: ?_getLastModificationTime@FileSystem_windows@Core@@MEAA?AVResult@2@AEBVPath@2@PEA_J@Z
    virtual class Core::Result _getLastModificationTime(class Core::Path const&, int64*);

    // vIndex: 45, symbol: ?_copyTimeAndAccessRights@FileSystem_windows@Core@@MEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result _copyTimeAndAccessRights(class Core::Path const&, class Core::Path const&);

    // vIndex: 46, symbol: ?_endTransaction@FileSystemImpl@Core@@MEAA?AVResult@2@XZ
    virtual class Core::Result _endTransaction();

    // vIndex: 47, symbol:
    // ?_writeOperation@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@$$QEAV32@V?$function@$$A6AXPEAVFileStorageArea@Core@@@Z@std@@_K@Z
    virtual class Core::Result _writeOperation(
        class Core::Path const&                           fullPath,
        class Core::Result&&                              result,
        std::function<void(class Core::FileStorageArea*)> observerCallOrNull,
        uint64                                            numBytesWritten
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0FileSystem_windows@Core@@AEAA@W4FileAccessType@1@V?$shared_ptr@VFileStorageArea@Core@@@std@@V?$shared_ptr@VFlatFileManifestTracker@Core@@@4@@Z
    MCAPI
    FileSystem_windows(::Core::FileAccessType, std::shared_ptr<class Core::FileStorageArea>, std::shared_ptr<class Core::FlatFileManifestTracker>);

    // symbol:
    // ?_iterateOverDirectoryWide@FileSystem_windows@Core@@AEAA?AVResult@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4DirectoryIterationFlags@2@V?$function@$$A6A?AVResult@Core@@AEBUDirectoryIterationItem@2@@Z@5@@Z
    MCAPI class Core::Result
    _iterateOverDirectoryWide(std::wstring const&, ::Core::DirectoryIterationFlags, std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);

    // symbol: ?_makeFailureFromFileSystemResult@FileSystem_windows@Core@@AEAA?AVResult@2@AEBVerror_code@std@@PEBD1@Z
    MCAPI class Core::Result _makeFailureFromFileSystemResult(std::error_code const&, char const*, char const*);

    // NOLINTEND
};

}; // namespace Core
