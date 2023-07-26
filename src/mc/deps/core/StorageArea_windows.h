#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class FileSystem_windows; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { enum class FileAccessType; }
namespace Core { enum class WriteOperation; }
// clang-format on

namespace Core {

class StorageArea_windows {

public:
    // prevent constructor by default
    StorageArea_windows& operator=(StorageArea_windows const&) = delete;
    StorageArea_windows(StorageArea_windows const&)            = delete;
    StorageArea_windows()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?createTransaction\@?$BasicDirectoryStorageArea\@VFileSystem_windows\@Core\@\@\@Core\@\@UEAA?AV?$unique_ptr\@VFileSystemImpl\@Core\@\@U?$default_delete\@VFileSystemImpl\@Core\@\@\@std\@\@\@std\@\@W4FileAccessType\@2\@\@Z
     */
    virtual std::unique_ptr<class Core::FileSystemImpl> createTransaction(enum class Core::FileAccessType); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?supportsSizeQuery\@StorageArea_windows\@Core\@\@UEBA_NXZ
     */
    virtual bool supportsSizeQuery() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getTotalSize\@StorageArea_windows\@Core\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getTotalSize() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getUsedSize\@StorageArea_windows\@Core\@\@UEAA?AVResult\@2\@AEA_K\@Z
     */
    virtual class Core::Result getUsedSize(unsigned __int64&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?setUsedSizeOverride\@StorageArea_windows\@Core\@\@UEAAX_K\@Z
     */
    virtual void setUsedSizeOverride(unsigned __int64); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?clearUsedSizeOverride\@StorageArea_windows\@Core\@\@UEAAXXZ
     */
    virtual void clearUsedSizeOverride(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?notifyChangeInFileSize\@FileStorageArea\@Core\@\@UEAAX_J0\@Z
     */
    virtual void notifyChangeInFileSize(__int64, __int64); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?supportsExtendSize\@StorageArea_windows\@Core\@\@UEBA_NXZ
     */
    virtual bool supportsExtendSize() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol ?canExtendSize\@StorageArea_windows\@Core\@\@UEBA_NXZ
     */
    virtual bool canExtendSize() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?resetCanAttemptExtendSize\@StorageArea_windows\@Core\@\@UEAAXXZ
     */
    virtual void resetCanAttemptExtendSize(); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?getExtendSizeThreshold\@StorageArea_windows\@Core\@\@UEBA?AVResult\@2\@AEA_K\@Z
     */
    virtual class Core::Result getExtendSizeThreshold(unsigned __int64&) const; // NOLINT
    /**
     * @vftbl 16
     * @symbol ?attemptExtendSize\@StorageArea_windows\@Core\@\@UEAAXAEB_JV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void attemptExtendSize(__int64 const&, class std::function<void(void)>); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?preemptiveExtendSize\@StorageArea_windows\@Core\@\@UEAAX_KV?$function\@$$A6AXXZ\@std\@\@1\@Z
     */
    virtual void
    preemptiveExtendSize(unsigned __int64, class std::function<void(void)>, class std::function<void(void)>); // NOLINT
    /**
     * @vftbl 18
     * @symbol ?unloadFlatFileManifests\@FileStorageArea\@Core\@\@UEAAX_N\@Z
     */
    virtual void unloadFlatFileManifests(bool); // NOLINT
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19(); // NOLINT
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20(); // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22(); // NOLINT
    /**
     * @vftbl 23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23(); // NOLINT
    /**
     * @vftbl 24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24(); // NOLINT
    /**
     * @vftbl 25
     * @symbol ?setSaveDataIcon\@FileStorageArea\@Core\@\@UEAA?AVResult\@2\@AEBVPath\@2\@\@Z
     */
    virtual class Core::Result setSaveDataIcon(class Core::Path const&); // NOLINT
    /**
     * @vftbl 26
     * @symbol ?shouldAllowCommit\@FileStorageArea\@Core\@\@UEBA_NXZ
     */
    virtual bool shouldAllowCommit() const; // NOLINT
    /**
     * @vftbl 27
     * @symbol ?trackBytesWritten\@FileStorageArea\@Core\@\@UEAAXAEBVPath\@2\@_KW4WriteOperation\@2\@\@Z
     */
    virtual void
    trackBytesWritten(class Core::Path const&, unsigned __int64, enum class Core::WriteOperation); // NOLINT
    /**
     * @vftbl 28
     * @symbol ?trackWriteOperation\@FileStorageArea\@Core\@\@UEAAXAEBVPath\@2\@W4WriteOperation\@2\@\@Z
     */
    virtual void trackWriteOperation(class Core::Path const&, enum class Core::WriteOperation); // NOLINT
    /**
     * @symbol ??0StorageArea_windows\@Core\@\@QEAA\@W4FileAccessType\@1\@AEBVPath\@1\@_N\@Z
     */
    MCAPI StorageArea_windows(enum class Core::FileAccessType, class Core::Path const&, bool); // NOLINT
};

}; // namespace Core
