#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileSystemImpl.h"
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { enum class CrossStorageCopyMode; }
namespace Core { enum class DirectoryIterationFlags; }
namespace Core { enum class FileAccessType; }
namespace Core { enum class FileBufferingMode; }
namespace Core { enum class FileType; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class FileSystem_windows : public ::Core::FileSystemImpl {

public:
    // prevent constructor by default
    FileSystem_windows& operator=(FileSystem_windows const&) = delete;
    FileSystem_windows(FileSystem_windows const&)            = delete;
    FileSystem_windows()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
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
    ); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?_fileExists\@FileSystem_windows\@Core\@\@MEAA_NAEBVPath\@2\@\@Z
     */
    virtual bool _fileExists(class Core::Path const&); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?_deleteFile\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _deleteFile(class Core::Path const&); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?_getFileSize\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getFileSize(class Core::Path const&, unsigned __int64*); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?_renameFile\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    virtual class Core::Result _renameFile(class Core::Path const&, class Core::Path const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?_createOneDirectory\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _createOneDirectory(class Core::Path const&); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?_directoryExists\@FileSystem_windows\@Core\@\@MEAA_NAEBVPath\@2\@\@Z
     */
    virtual bool _directoryExists(class Core::Path const&); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?_deleteEmptyDirectory\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result _deleteEmptyDirectory(class Core::Path const&); // NOLINT
    /**
     * @vftbl 24
     * @symbol ?_renameDirectory\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    virtual class Core::Result _renameDirectory(class Core::Path const&, class Core::Path const&); // NOLINT
    /**
     * @vftbl 25
     * @symbol
     * ?_iterateOverDirectory\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@W4DirectoryIterationFlags\@2\@V?$function\@$$A6A?AVResult\@Core\@\@AEBUDirectoryIterationItem\@2\@\@Z\@std\@\@\@Z
     */
    virtual class Core::Result
    _iterateOverDirectory(class Core::Path const&, enum class Core::DirectoryIterationFlags, class std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>); // NOLINT
    /**
     * @vftbl 31
     * @symbol ?_fileOrDirectoryExists\@FileSystem_windows\@Core\@\@MEAA_NAEBVPath\@2\@\@Z
     */
    virtual bool _fileOrDirectoryExists(class Core::Path const&); // NOLINT
    /**
     * @vftbl 33
     * @symbol ?_getEntryType\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@AEAW4FileType\@2\@\@Z
     */
    virtual class Core::Result _getEntryType(class Core::Path const&, enum class Core::FileType&); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 44
     * @symbol ?_getLastModificationTime\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@PEA_J\@Z
     */
    virtual class Core::Result _getLastModificationTime(class Core::Path const&, __int64*); // NOLINT
    /**
     * @vftbl 45
     * @symbol ?_copyTimeAndAccessRights\@FileSystem_windows\@Core\@\@MEAA?AVResult\@2\@AEBVPath\@2\@0\@Z
     */
    virtual class Core::Result _copyTimeAndAccessRights(class Core::Path const&, class Core::Path const&); // NOLINT

    // private:
    /**
     * @symbol
     * ??0FileSystem_windows\@Core\@\@AEAA\@W4FileAccessType\@1\@V?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@V?$shared_ptr\@VFlatFileManifestTracker\@Core\@\@\@4\@\@Z
     */
    MCAPI
        FileSystem_windows(enum class Core::FileAccessType, class std::shared_ptr<class Core::FileStorageArea>, class std::shared_ptr<class Core::FlatFileManifestTracker>); // NOLINT
    /**
     * @symbol
     * ?_iterateOverDirectoryWide\@FileSystem_windows\@Core\@\@AEAA?AVResult\@2\@AEBV?$basic_string\@_WU?$char_traits\@_W\@std\@\@V?$allocator\@_W\@2\@\@std\@\@W4DirectoryIterationFlags\@2\@V?$function\@$$A6A?AVResult\@Core\@\@AEBUDirectoryIterationItem\@2\@\@Z\@5\@\@Z
     */
    MCAPI class Core::Result
    _iterateOverDirectoryWide(class std::basic_string<wchar_t, struct std::char_traits<wchar_t>, class std::allocator<wchar_t>> const&, enum class Core::DirectoryIterationFlags, class std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>); // NOLINT

private:
};

}; // namespace Core
