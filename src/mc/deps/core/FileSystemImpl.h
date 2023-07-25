#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStats; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { enum class CrossStorageCopyMode; }
namespace Core { enum class DirectoryIterationFlags; }
namespace Core { enum class FileAccessType; }
namespace Core { enum class FileBufferingMode; }
namespace Core { enum class FileType; }
namespace Core { enum class TransactionFlags; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
namespace Core { struct PendingWrite; }
// clang-format on

namespace Core {

class FileSystemImpl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_FILESYSTEMIMPL
public:
    FileSystemImpl& operator=(FileSystemImpl const&) = delete;
    FileSystemImpl(FileSystemImpl const&)            = delete;
    FileSystemImpl()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getLastModificationTime\@FileSystemImpl\@Core\@\@UEAA?AVResult\@2\@AEBVPath\@2\@PEA_J\@Z
     */
    virtual class Core::Result getLastModificationTime(class Core::Path const&, __int64*);
    /**
     * @vftbl 2
     * @symbol ?copyTimeAndAccessRights\@FileSystemImpl\@Core\@\@UEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    virtual class Core::Result copyTimeAndAccessRights(class Core::Path const&, class Core::Path const&);
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?shouldCommit\@FileSystemImpl\@Core\@\@UEAA_NXZ
     */
    virtual bool shouldCommit();
    /**
     * @vftbl 5
     * @symbol ?getCrossStorageCopyMode\@FileSystemImpl\@Core\@\@UEAA?AW4CrossStorageCopyMode\@2\@XZ
     */
    virtual enum class Core::CrossStorageCopyMode getCrossStorageCopyMode();
    /**
     * @vftbl 6
     * @symbol ?getTransactionWriteSizeLimit\@FileSystemImpl\@Core\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getTransactionWriteSizeLimit() const;
    /**
     * @vftbl 7
     * @symbol
     * ?_openFile\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEAV?$unique_ptr\@VFileImpl\@Core\@\@U?$default_delete\@VFileImpl\@Core\@\@\@std\@\@\@std\@\@AEBVPath\@2\@VFileOpenMode\@2\@W4FileBufferingMode\@2\@\@Z
     */
    virtual class Core::Result _openFile(
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::FileOpenMode,
        enum class Core::FileBufferingMode
    ) = 0;
    /**
     * @vftbl 8
     * @symbol ?_fileExists\@FileSystem_windows\@Core\@\@MEAA_NAEBVPath\@2\@\@Z
     */
    virtual bool _fileExists(class Core::Path const&) = 0;
    /**
     * @vftbl 9
     * @symbol ?_deleteFile\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _deleteFile(class Core::Path const&) = 0;
    /**
     * @vftbl 10
     * @symbol ?_getFileSize\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getFileSize(class Core::Path const&, unsigned __int64*) = 0;
    /**
     * @vftbl 11
     * @symbol ?_renameFile\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    virtual class Core::Result _renameFile(class Core::Path const&, class Core::Path const&) = 0;
    /**
     * @vftbl 12
     * @symbol ?_createEmptyFile\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _createEmptyFile(class Core::Path const&);
    /**
     * @vftbl 13
     * @symbol ?_copyFile\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    virtual class Core::Result _copyFile(class Core::Path const&, class Core::Path const&);
    /**
     * @vftbl 14
     * @symbol ?_copyFileWithLimit\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0_KAEA_K2\@Z
     */
    virtual class Core::Result
    _copyFileWithLimit(class Core::Path const&, class Core::Path const&, unsigned __int64, unsigned __int64&, unsigned __int64&);
    /**
     * @vftbl 15
     * @symbol
     * ?_readFileData\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@AEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual class Core::Result _readFileData(class Core::Path const&, std::vector<unsigned char>&);
    /**
     * @vftbl 16
     * @symbol ?_createOneDirectory\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _createOneDirectory(class Core::Path const&) = 0;
    /**
     * @vftbl 17
     * @symbol ?_createOneDirectoryIfNotExisting\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _createOneDirectoryIfNotExisting(class Core::Path const&);
    /**
     * @vftbl 18
     * @symbol ?_createDirectoryRecursively\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _createDirectoryRecursively(class Core::Path const&);
    /**
     * @vftbl 19
     * @symbol ?_directoryExists\@FileSystem_windows\@Core\@\@MEAA_NAEBVPath\@2\@\@Z
     */
    virtual bool _directoryExists(class Core::Path const&) = 0;
    /**
     * @vftbl 20
     * @symbol ?_deleteEmptyDirectory\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _deleteEmptyDirectory(class Core::Path const&) = 0;
    /**
     * @vftbl 21
     * @symbol ?_deleteDirectoryAndContentsRecursively\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _deleteDirectoryAndContentsRecursively(class Core::Path const&);
    /**
     * @vftbl 22
     * @symbol ?_deleteDirectoryContentsRecursively\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _deleteDirectoryContentsRecursively(class Core::Path const&);
    /**
     * @vftbl 23
     * @symbol ?_deleteRecursively\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@W4FileType\@2\@\@Z
     */
    virtual class Core::Result _deleteRecursively(class Core::Path const&, enum class Core::FileType);
    /**
     * @vftbl 24
     * @symbol ?_renameDirectory\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    virtual class Core::Result _renameDirectory(class Core::Path const&, class Core::Path const&) = 0;
    /**
     * @vftbl 25
     * @symbol
     * ?_iterateOverDirectory\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@W4DirectoryIterationFlags\@2\@V?$function\@$$A6A?AVResult\@Core\@\@AEBUDirectoryIterationItem\@2\@\@Z\@std\@\@\@Z
     */
    virtual class Core::Result
    _iterateOverDirectory(class Core::Path const&, enum class Core::DirectoryIterationFlags, class std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>) = 0;
    /**
     * @vftbl 26
     * @symbol
     * ?_getDirectoryFiles\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEAV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@std\@\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result
    _getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>&, class Core::Path const&);
    /**
     * @vftbl 27
     * @symbol
     * ?_getDirectoryFilesRecursively\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEAV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@std\@\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result
    _getDirectoryFilesRecursively(std::vector<class Core::PathBuffer<std::string>>&, class Core::Path const&);
    /**
     * @vftbl 28
     * @symbol ?_getDirectoryFilesSizeRecursively\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEA_KAEBVPath\@2\@\@Z
     */
    virtual class Core::Result _getDirectoryFilesSizeRecursively(unsigned __int64&, class Core::Path const&);
    /**
     * @vftbl 29
     * @symbol
     * ?_getDirectoryFilesAllocatedSizeRecursively\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEA_K0AEBVPath\@2\@\@Z
     */
    virtual class Core::Result
    _getDirectoryFilesAllocatedSizeRecursively(unsigned __int64&, unsigned __int64&, class Core::Path const&);
    /**
     * @vftbl 30
     * @symbol ?_copyDirectoryAndContentsRecursively\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    virtual class Core::Result _copyDirectoryAndContentsRecursively(class Core::Path const&, class Core::Path const&);
    /**
     * @vftbl 31
     * @symbol ?_fileOrDirectoryExists\@FileSystem_windows\@Core\@\@MEAA_NAEBVPath\@2\@\@Z
     */
    virtual bool _fileOrDirectoryExists(class Core::Path const&) = 0;
    /**
     * @vftbl 32
     * @symbol ?_getFileOrDirectorySize\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getFileOrDirectorySize(class Core::Path const&, unsigned __int64*);
    /**
     * @vftbl 33
     * @symbol ?_getEntryType\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@AEAW4FileType\@2\@\@Z
     */
    virtual class Core::Result _getEntryType(class Core::Path const&, enum class Core::FileType&) = 0;
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol ?_createFlatFile\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    virtual class Core::Result _createFlatFile(class Core::Path const&, class Core::Path const&);
    /**
     * @vftbl 37
     * @symbol ?_flatFileFileExists\@FileSystemImpl\@Core\@\@MEAA_NAEBVPath\@2\@0\@Z
     */
    virtual bool _flatFileFileExists(class Core::Path const&, class Core::Path const&);
    /**
     * @vftbl 38
     * @symbol ?_flatFileDirectoryExists\@FileSystemImpl\@Core\@\@MEAA_NAEBVPath\@2\@0\@Z
     */
    virtual bool _flatFileDirectoryExists(class Core::Path const&, class Core::Path const&);
    /**
     * @vftbl 39
     * @symbol
     * ?_flatFileIterateOverDirectory\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0W4DirectoryIterationFlags\@2\@V?$function\@$$A6A?AVResult\@Core\@\@AEBUDirectoryIterationItem\@2\@\@Z\@std\@\@\@Z
     */
    virtual class Core::Result
    _flatFileIterateOverDirectory(class Core::Path const&, class Core::Path const&, enum class Core::DirectoryIterationFlags, class std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);
    /**
     * @vftbl 40
     * @symbol ?_isDirectoryPathAFlatFile\@FileSystemImpl\@Core\@\@MEAA_NAEBVPath\@2\@\@Z
     */
    virtual bool _isDirectoryPathAFlatFile(class Core::Path const&);
    /**
     * @vftbl 41
     * @symbol
     * ?_copyFlatFile\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0AEBV?$vector\@UExcludedPath\@Core\@\@V?$allocator\@UExcludedPath\@Core\@\@\@std\@\@\@std\@\@1\@Z
     */
    virtual class Core::Result
    _copyFlatFile(class Core::Path const&, class Core::Path const&, std::vector<struct Core::ExcludedPath> const&, std::vector<struct Core::ExcludedPath> const&);
    /**
     * @vftbl 42
     * @symbol ?_flatFileDeleteFileOrDirectory\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0_N1\@Z
     */
    virtual class Core::Result
    _flatFileDeleteFileOrDirectory(class Core::Path const&, class Core::Path const&, bool, bool);
    /**
     * @vftbl 43
     * @symbol ?_flatFileGetFileSize\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0PEA_K\@Z
     */
    virtual class Core::Result
    _flatFileGetFileSize(class Core::Path const&, class Core::Path const&, unsigned __int64*);
    /**
     * @vftbl 44
     * @symbol ?_getLastModificationTime\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@PEA_J\@Z
     */
    virtual class Core::Result _getLastModificationTime(class Core::Path const&, __int64*) = 0;
    /**
     * @vftbl 45
     * @symbol ?_copyTimeAndAccessRights\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    virtual class Core::Result _copyTimeAndAccessRights(class Core::Path const&, class Core::Path const&) = 0;
    /**
     * @vftbl 46
     * @symbol ?_endTransaction\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@XZ
     */
    virtual class Core::Result _endTransaction();
    /**
     * @vftbl 47
     * @symbol
     * ?_writeOperation\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@$$QEAV32\@V?$function\@$$A6AXPEAVFileStorageArea\@Core\@\@\@Z\@std\@\@_K\@Z
     */
    virtual class Core::Result _writeOperation(
        class Core::Path const&,
        class Core::Result&&,
        class std::function<void(class Core::FileStorageArea*)>,
        unsigned __int64
    );
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_FILESYSTEMIMPL
    /**
     * @symbol ?_addIgnoredThrottlePath\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    MCVAPI class Core::Result _addIgnoredThrottlePath(class Core::Path const&);
    /**
     * @symbol ?_initializeInternal\@FileSystemImpl\@Core\@\@EEAAXXZ
     */
    MCVAPI void _initializeInternal();
    /**
     * @symbol ?_removeIgnoredThrottlePath\@FileSystemImpl\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    MCVAPI class Core::Result _removeIgnoredThrottlePath(class Core::Path const&);
    /**
     * @symbol
     * ?requestFlush\@FileSystemImpl\@Core\@\@UEAAXAEBV?$vector\@UPendingWrite\@Core\@\@V?$allocator\@UPendingWrite\@Core\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void requestFlush(std::vector<struct Core::PendingWrite> const&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FileSystemImpl();
#endif
    /**
     * @symbol
     * ??0FileSystemImpl\@Core\@\@QEAA\@W4FileAccessType\@1\@V?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@W4TransactionFlags\@1\@V?$shared_ptr\@VFlatFileManifestTracker\@Core\@\@\@4\@\@Z
     */
    MCAPI
        FileSystemImpl(enum class Core::FileAccessType, class std::shared_ptr<class Core::FileStorageArea>, enum class Core::TransactionFlags, class std::shared_ptr<class Core::FlatFileManifestTracker>);
    /**
     * @symbol ?commit\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@XZ
     */
    MCAPI class Core::Result commit();
    /**
     * @symbol ?copyDirectoryAndContentsRecursively\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    MCAPI class Core::Result copyDirectoryAndContentsRecursively(class Core::Path const&, class Core::Path const&);
    /**
     * @symbol ?copyFile\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    MCAPI class Core::Result copyFile(class Core::Path const&, class Core::Path const&);
    /**
     * @symbol ?createDirectoryRecursively\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI class Core::Result createDirectoryRecursively(class Core::Path const&);
    /**
     * @symbol ?createOneDirectory\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI class Core::Result createOneDirectory(class Core::Path const&);
    /**
     * @symbol ?deleteDirectoryAndContentsRecursively\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI class Core::Result deleteDirectoryAndContentsRecursively(class Core::Path const&);
    /**
     * @symbol ?deleteDirectoryContentsRecursively\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI class Core::Result deleteDirectoryContentsRecursively(class Core::Path const&);
    /**
     * @symbol ?deleteEmptyDirectory\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI class Core::Result deleteEmptyDirectory(class Core::Path const&);
    /**
     * @symbol ?deleteFile\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI class Core::Result deleteFile(class Core::Path const&);
    /**
     * @symbol ?directoryExists\@FileSystemImpl\@Core\@\@QEAA_NAEBVPath\@2\@\@Z
     */
    MCAPI bool directoryExists(class Core::Path const&);
    /**
     * @symbol ?fileExists\@FileSystemImpl\@Core\@\@QEAA_NAEBVPath\@2\@\@Z
     */
    MCAPI bool fileExists(class Core::Path const&);
    /**
     * @symbol ?fileOrDirectoryExists\@FileSystemImpl\@Core\@\@QEAA_NAEBVPath\@2\@\@Z
     */
    MCAPI bool fileOrDirectoryExists(class Core::Path const&);
    /**
     * @symbol ?getFileSize\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@PEA_K\@Z
     */
    MCAPI class Core::Result getFileSize(class Core::Path const&, unsigned __int64*);
    /**
     * @symbol ?getStorageArea\@FileSystemImpl\@Core\@\@QEAA?AV?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class Core::FileStorageArea> getStorageArea();
    /**
     * @symbol ?isDirectoryPathAFlatFile\@FileSystemImpl\@Core\@\@QEAA_NAEBVPath\@2\@\@Z
     */
    MCAPI bool isDirectoryPathAFlatFile(class Core::Path const&);
    /**
     * @symbol
     * ?iterateOverDirectory\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@W4DirectoryIterationFlags\@2\@V?$function\@$$A6A?AVResult\@Core\@\@AEBUDirectoryIterationItem\@2\@\@Z\@std\@\@\@Z
     */
    MCAPI class Core::Result
    iterateOverDirectory(class Core::Path const&, enum class Core::DirectoryIterationFlags, class std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);
    /**
     * @symbol
     * ?openFile\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEAV?$unique_ptr\@VFileImpl\@Core\@\@U?$default_delete\@VFileImpl\@Core\@\@\@std\@\@\@std\@\@AEBVPath\@2\@VFileOpenMode\@2\@W4FileBufferingMode\@2\@\@Z
     */
    MCAPI class Core::Result openFile(
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::FileOpenMode,
        enum class Core::FileBufferingMode
    );
    /**
     * @symbol ?renameFile\@FileSystemImpl\@Core\@\@QEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    MCAPI class Core::Result renameFile(class Core::Path const&, class Core::Path const&);
    /**
     * @symbol ?isValidPath\@FileSystemImpl\@Core\@\@SA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI static class Core::Result isValidPath(class Core::Path const&);

    // protected:
    /**
     * @symbol ?_flatFileUnloadManifest\@FileSystemImpl\@Core\@\@IEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI class Core::Result _flatFileUnloadManifest(class Core::Path const&);

    // private:
    /**
     * @symbol
     * ?_flatFileOpenFlatFile\@FileSystemImpl\@Core\@\@AEAA?AVResult\@2\@AEAV?$unique_ptr\@VFileImpl\@Core\@\@U?$default_delete\@VFileImpl\@Core\@\@\@std\@\@\@std\@\@AEBVPath\@2\@1VFileOpenMode\@2\@W4FileBufferingMode\@2\@\@Z
     */
    MCAPI class Core::Result _flatFileOpenFlatFile(
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::Path const&,
        class Core::FileOpenMode,
        enum class Core::FileBufferingMode
    );
    /**
     * @symbol ?_initialize\@FileSystemImpl\@Core\@\@AEAAXXZ
     */
    MCAPI void _initialize();
    /**
     * @symbol ?_readOperation\@FileSystemImpl\@Core\@\@AEAA?AVResult\@2\@$$QEAV32\@_K\@Z
     */
    MCAPI class Core::Result _readOperation(class Core::Result&&, unsigned __int64);
    /**
     * @symbol
     * ?_readWriteOperation\@FileSystemImpl\@Core\@\@AEAA?AVResult\@2\@$$QEAV32\@V?$function\@$$A6AXPEAVFileStorageArea\@Core\@\@\@Z\@std\@\@_K2\@Z
     */
    MCAPI class Core::Result _readWriteOperation(
        class Core::Result&&,
        class std::function<void(class Core::FileStorageArea*)>,
        unsigned __int64,
        unsigned __int64
    );

protected:
    /**
     * @symbol ?sStats\@FileSystemImpl\@Core\@\@1VFileStats\@2\@A
     */
    MCAPI static class Core::FileStats sStats;

private:
};

}; // namespace Core
