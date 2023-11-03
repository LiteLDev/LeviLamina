#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/CrossStorageCopyMode.h"
#include "mc/deps/core/DirectoryIterationFlags.h"
#include "mc/deps/core/FileAccessType.h"
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/FileType.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/TransactionFlags.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStats; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
namespace Core { struct PendingWrite; }
// clang-format on

namespace Core {

class FileSystemImpl {
public:
    // prevent constructor by default
    FileSystemImpl& operator=(FileSystemImpl const&);
    FileSystemImpl(FileSystemImpl const&);
    FileSystemImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getLastModificationTime@FileSystemImpl@Core@@UEAA?AVResult@2@AEBVPath@2@PEA_J@Z
    virtual class Core::Result getLastModificationTime(class Core::Path const&, int64*);

    // vIndex: 2, symbol: ?copyTimeAndAccessRights@FileSystemImpl@Core@@UEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result copyTimeAndAccessRights(class Core::Path const&, class Core::Path const&);

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: ?shouldCommit@FileSystemImpl@Core@@UEAA_NXZ
    virtual bool shouldCommit();

    // vIndex: 5, symbol: ?getCrossStorageCopyMode@FileSystemImpl@Core@@UEAA?AW4CrossStorageCopyMode@2@XZ
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();

    // vIndex: 6, symbol: ?getTransactionWriteSizeLimit@FileSystemImpl@Core@@UEBA_KXZ
    virtual uint64 getTransactionWriteSizeLimit() const;

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7() = 0;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8() = 0;

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9() = 0;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10() = 0;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11() = 0;

    // vIndex: 12, symbol: ?_createEmptyFile@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _createEmptyFile(class Core::Path const&);

    // vIndex: 13, symbol: ?_copyFile@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result _copyFile(class Core::Path const&, class Core::Path const&);

    // vIndex: 14, symbol: ?_copyFileWithLimit@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0_KAEA_K2@Z
    virtual class Core::Result
    _copyFileWithLimit(class Core::Path const&, class Core::Path const&, uint64, uint64&, uint64&);

    // vIndex: 15, symbol:
    // ?_readFileData@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@AEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual class Core::Result _readFileData(class Core::Path const&, std::vector<uchar>&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16() = 0;

    // vIndex: 17, symbol: ?_createOneDirectoryIfNotExisting@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _createOneDirectoryIfNotExisting(class Core::Path const&);

    // vIndex: 18, symbol: ?_createDirectoryRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _createDirectoryRecursively(class Core::Path const&);

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19() = 0;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20() = 0;

    // vIndex: 21, symbol: ?_deleteDirectoryAndContentsRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _deleteDirectoryAndContentsRecursively(class Core::Path const&);

    // vIndex: 22, symbol: ?_deleteDirectoryContentsRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result _deleteDirectoryContentsRecursively(class Core::Path const&);

    // vIndex: 23, symbol: ?_deleteRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@W4FileType@2@@Z
    virtual class Core::Result _deleteRecursively(class Core::Path const&, ::Core::FileType);

    // vIndex: 24, symbol: __unk_vfn_24
    virtual void __unk_vfn_24() = 0;

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25() = 0;

    // vIndex: 26, symbol:
    // ?_getDirectoryFiles@FileSystemImpl@Core@@MEAA?AVResult@2@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    virtual class Core::Result
    _getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>&, class Core::Path const&);

    // vIndex: 27, symbol:
    // ?_getDirectoryFilesRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    virtual class Core::Result
    _getDirectoryFilesRecursively(std::vector<class Core::PathBuffer<std::string>>&, class Core::Path const&);

    // vIndex: 28, symbol: ?_getDirectoryFilesSizeRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEA_KAEBVPath@2@@Z
    virtual class Core::Result _getDirectoryFilesSizeRecursively(uint64&, class Core::Path const&);

    // vIndex: 29, symbol:
    // ?_getDirectoryFilesAllocatedSizeRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEA_K0AEBVPath@2@@Z
    virtual class Core::Result _getDirectoryFilesAllocatedSizeRecursively(uint64&, uint64&, class Core::Path const&);

    // vIndex: 30, symbol: ?_copyDirectoryAndContentsRecursively@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result _copyDirectoryAndContentsRecursively(class Core::Path const&, class Core::Path const&);

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31() = 0;

    // vIndex: 32, symbol: ?_getFileOrDirectorySize@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@PEA_K@Z
    virtual class Core::Result _getFileOrDirectorySize(class Core::Path const&, uint64*);

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35() = 0;

    // vIndex: 36, symbol: ?_createFlatFile@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0@Z
    virtual class Core::Result _createFlatFile(class Core::Path const&, class Core::Path const&);

    // vIndex: 37, symbol: ?_flatFileFileExists@FileSystemImpl@Core@@MEAA_NAEBVPath@2@0@Z
    virtual bool _flatFileFileExists(class Core::Path const&, class Core::Path const&);

    // vIndex: 38, symbol: ?_flatFileDirectoryExists@FileSystemImpl@Core@@MEAA_NAEBVPath@2@0@Z
    virtual bool _flatFileDirectoryExists(class Core::Path const&, class Core::Path const&);

    // vIndex: 39, symbol:
    // ?_flatFileIterateOverDirectory@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0W4DirectoryIterationFlags@2@V?$function@$$A6A?AVResult@Core@@AEBUDirectoryIterationItem@2@@Z@std@@@Z
    virtual class Core::Result
    _flatFileIterateOverDirectory(class Core::Path const&, class Core::Path const&, ::Core::DirectoryIterationFlags, std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);

    // vIndex: 40, symbol: ?_isDirectoryPathAFlatFile@FileSystemImpl@Core@@MEAA_NAEBVPath@2@@Z
    virtual bool _isDirectoryPathAFlatFile(class Core::Path const&);

    // vIndex: 41, symbol:
    // ?_copyFlatFile@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0AEBV?$vector@UExcludedPath@Core@@V?$allocator@UExcludedPath@Core@@@std@@@std@@1@Z
    virtual class Core::Result
    _copyFlatFile(class Core::Path const&, class Core::Path const&, std::vector<struct Core::ExcludedPath> const&, std::vector<struct Core::ExcludedPath> const&);

    // vIndex: 42, symbol: ?_flatFileDeleteFileOrDirectory@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0_N1@Z
    virtual class Core::Result
    _flatFileDeleteFileOrDirectory(class Core::Path const&, class Core::Path const&, bool, bool);

    // vIndex: 43, symbol: ?_flatFileGetFileSize@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@0PEA_K@Z
    virtual class Core::Result _flatFileGetFileSize(class Core::Path const&, class Core::Path const&, uint64*);

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44() = 0;

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45() = 0;

    // vIndex: 46, symbol: ?_endTransaction@FileSystemImpl@Core@@MEAA?AVResult@2@XZ
    virtual class Core::Result _endTransaction();

    // vIndex: 47, symbol:
    // ?_writeOperation@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@$$QEAV32@V?$function@$$A6AXPEAVFileStorageArea@Core@@@Z@std@@_K@Z
    virtual class Core::Result _writeOperation(
        class Core::Path const&,
        class Core::Result&&,
        std::function<void(class Core::FileStorageArea*)>,
        uint64
    );

    // symbol: ?_addIgnoredThrottlePath@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    MCVAPI class Core::Result _addIgnoredThrottlePath(class Core::Path const&);

    // symbol: ?_initializeInternal@FileSystemImpl@Core@@EEAAXXZ
    MCVAPI void _initializeInternal();

    // symbol: ?_removeIgnoredThrottlePath@FileSystemImpl@Core@@MEAA?AVResult@2@AEBVPath@2@@Z
    MCVAPI class Core::Result _removeIgnoredThrottlePath(class Core::Path const&);

    // symbol:
    // ?requestFlush@FileSystemImpl@Core@@UEAAXAEBV?$vector@UPendingWrite@Core@@V?$allocator@UPendingWrite@Core@@@std@@@std@@@Z
    MCVAPI void requestFlush(std::vector<struct Core::PendingWrite> const&);

    // symbol: ??1FileSystemImpl@Core@@UEAA@XZ
    MCVAPI ~FileSystemImpl();

    // symbol:
    // ??0FileSystemImpl@Core@@QEAA@W4FileAccessType@1@V?$shared_ptr@VFileStorageArea@Core@@@std@@W4TransactionFlags@1@V?$shared_ptr@VFlatFileManifestTracker@Core@@@4@@Z
    MCAPI
    FileSystemImpl(::Core::FileAccessType, std::shared_ptr<class Core::FileStorageArea>, ::Core::TransactionFlags, std::shared_ptr<class Core::FlatFileManifestTracker>);

    // symbol: ?commit@FileSystemImpl@Core@@QEAA?AVResult@2@XZ
    MCAPI class Core::Result commit();

    // symbol: ?copyDirectoryAndContentsRecursively@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@0@Z
    MCAPI class Core::Result copyDirectoryAndContentsRecursively(class Core::Path const&, class Core::Path const&);

    // symbol: ?copyFile@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@0@Z
    MCAPI class Core::Result copyFile(class Core::Path const&, class Core::Path const&);

    // symbol: ?createDirectoryRecursively@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@@Z
    MCAPI class Core::Result createDirectoryRecursively(class Core::Path const&);

    // symbol: ?createOneDirectory@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@@Z
    MCAPI class Core::Result createOneDirectory(class Core::Path const&);

    // symbol: ?deleteDirectoryAndContentsRecursively@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@@Z
    MCAPI class Core::Result deleteDirectoryAndContentsRecursively(class Core::Path const&);

    // symbol: ?deleteDirectoryContentsRecursively@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@@Z
    MCAPI class Core::Result deleteDirectoryContentsRecursively(class Core::Path const&);

    // symbol: ?deleteEmptyDirectory@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@@Z
    MCAPI class Core::Result deleteEmptyDirectory(class Core::Path const&);

    // symbol: ?deleteFile@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@@Z
    MCAPI class Core::Result deleteFile(class Core::Path const&);

    // symbol: ?directoryExists@FileSystemImpl@Core@@QEAA_NAEBVPath@2@@Z
    MCAPI bool directoryExists(class Core::Path const&);

    // symbol: ?enumerateFiles@FileSystemImpl@Core@@QEAAXAEBV?$function@$$A6AXPEAVFileImpl@Core@@@Z@std@@@Z
    MCAPI void enumerateFiles(std::function<void(class Core::FileImpl*)> const&);

    // symbol: ?fileExists@FileSystemImpl@Core@@QEAA_NAEBVPath@2@@Z
    MCAPI bool fileExists(class Core::Path const&);

    // symbol: ?fileOrDirectoryExists@FileSystemImpl@Core@@QEAA_NAEBVPath@2@@Z
    MCAPI bool fileOrDirectoryExists(class Core::Path const&);

    // symbol: ?getAccessType@FileSystemImpl@Core@@QEBA?AW4FileAccessType@2@XZ
    MCAPI ::Core::FileAccessType getAccessType() const;

    // symbol:
    // ?getDirectoryFiles@FileSystemImpl@Core@@QEAA?AVResult@2@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    MCAPI class Core::Result
    getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>&, class Core::Path const&);

    // symbol:
    // ?getDirectoryFilesRecursively@FileSystemImpl@Core@@QEAA?AVResult@2@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    MCAPI class Core::Result
    getDirectoryFilesRecursively(std::vector<class Core::PathBuffer<std::string>>&, class Core::Path const&);

    // symbol: ?getFileOrDirectorySize@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@PEA_K@Z
    MCAPI class Core::Result getFileOrDirectorySize(class Core::Path const&, uint64*);

    // symbol: ?getFileSize@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@PEA_K@Z
    MCAPI class Core::Result getFileSize(class Core::Path const&, uint64*);

    // symbol: ?getStorageArea@FileSystemImpl@Core@@QEAA?AV?$shared_ptr@VFileStorageArea@Core@@@std@@XZ
    MCAPI std::shared_ptr<class Core::FileStorageArea> getStorageArea();

    // symbol: ?isDirectoryPathAFlatFile@FileSystemImpl@Core@@QEAA_NAEBVPath@2@@Z
    MCAPI bool isDirectoryPathAFlatFile(class Core::Path const&);

    // symbol:
    // ?iterateOverDirectory@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@W4DirectoryIterationFlags@2@V?$function@$$A6A?AVResult@Core@@AEBUDirectoryIterationItem@2@@Z@std@@@Z
    MCAPI class Core::Result
    iterateOverDirectory(class Core::Path const&, ::Core::DirectoryIterationFlags, std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);

    // symbol:
    // ?openFile@FileSystemImpl@Core@@QEAA?AVResult@2@AEAV?$unique_ptr@VFileImpl@Core@@U?$default_delete@VFileImpl@Core@@@std@@@std@@AEBVPath@2@VFileOpenMode@2@W4FileBufferingMode@2@@Z
    MCAPI class Core::Result openFile(
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::FileOpenMode,
        ::Core::FileBufferingMode
    );

    // symbol: ?readFileData@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@AEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    MCAPI class Core::Result readFileData(class Core::Path const&, std::vector<uchar>&);

    // symbol: ?removeIgnoredThrottlePath@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@@Z
    MCAPI class Core::Result removeIgnoredThrottlePath(class Core::Path const&);

    // symbol: ?renameFile@FileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@0@Z
    MCAPI class Core::Result renameFile(class Core::Path const&, class Core::Path const&);

    // symbol: ?isValidPath@FileSystemImpl@Core@@SA?AVResult@2@AEBVPath@2@@Z
    MCAPI static class Core::Result isValidPath(class Core::Path const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_flatFileUnloadManifest@FileSystemImpl@Core@@IEAA?AVResult@2@AEBVPath@2@@Z
    MCAPI class Core::Result _flatFileUnloadManifest(class Core::Path const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_flatFileOpenFlatFile@FileSystemImpl@Core@@AEAA?AVResult@2@AEAV?$unique_ptr@VFileImpl@Core@@U?$default_delete@VFileImpl@Core@@@std@@@std@@AEBVPath@2@1VFileOpenMode@2@W4FileBufferingMode@2@@Z
    MCAPI class Core::Result _flatFileOpenFlatFile(
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::Path const&,
        class Core::FileOpenMode,
        ::Core::FileBufferingMode
    );

    // symbol: ?_initialize@FileSystemImpl@Core@@AEAAXXZ
    MCAPI void _initialize();

    // symbol: ?_readOperation@FileSystemImpl@Core@@AEAA?AVResult@2@$$QEAV32@_K@Z
    MCAPI class Core::Result _readOperation(class Core::Result&&, uint64);

    // symbol:
    // ?_readWriteOperation@FileSystemImpl@Core@@AEAA?AVResult@2@$$QEAV32@V?$function@$$A6AXPEAVFileStorageArea@Core@@@Z@std@@_K2@Z
    MCAPI class Core::Result
    _readWriteOperation(class Core::Result&&, std::function<void(class Core::FileStorageArea*)>, uint64, uint64);

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?sStats@FileSystemImpl@Core@@1VFileStats@2@A
    MCAPI static class Core::FileStats sStats;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $sStats() { return sStats; }

    // NOLINTEND
};

}; // namespace Core
