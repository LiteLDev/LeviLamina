#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStats; }
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { class StorageAreaStateListener; }
namespace Core { class StorageAreasTree; }
namespace Core { enum class FileAccessType; }
namespace Core { enum class TransactionFlags; }
namespace Core { enum class WriteOperation; }
// clang-format on

namespace Core {

class FileStorageArea {
public:
    // FileStorageArea inner types declare
    // clang-format off

    // clang-format on

    // FileStorageArea inner types define
    enum class FlushableLevelDbEnvType {};

public:
    // prevent constructor by default
    FileStorageArea& operator=(FileStorageArea const&) = delete;
    FileStorageArea(FileStorageArea const&)            = delete;
    FileStorageArea()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?createTransaction\@FileStorageArea\@Core\@\@UEAA?AV?$unique_ptr\@VFileSystemImpl\@Core\@\@U?$default_delete\@VFileSystemImpl\@Core\@\@\@std\@\@\@std\@\@W4FileAccessType\@2\@W4TransactionFlags\@2\@\@Z
     */
    virtual std::unique_ptr<class Core::FileSystemImpl>
        createTransaction(enum class Core::FileAccessType, enum class Core::TransactionFlags); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4() = 0; // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5() = 0; // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6() = 0; // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7() = 0; // NOLINT
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
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?resetCanAttemptExtendSize\@FileStorageArea\@Core\@\@UEAAXXZ
     */
    virtual void resetCanAttemptExtendSize(); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?getExtendSizeThreshold\@FileStorageArea\@Core\@\@UEBA?AVResult\@2\@AEA_K\@Z
     */
    virtual class Core::Result getExtendSizeThreshold(unsigned __int64&) const; // NOLINT
    /**
     * @vftbl 16
     * @symbol ?attemptExtendSize\@FileStorageArea\@Core\@\@UEAAXAEB_JV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void attemptExtendSize(__int64 const&, class std::function<void(void)>); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?preemptiveExtendSize\@FileStorageArea\@Core\@\@UEAAX_KV?$function\@$$A6AXXZ\@std\@\@1\@Z
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
     * @symbol ?getFlushableLevelDbEnvType\@FileStorageArea\@Core\@\@UEBA?AW4FlushableLevelDbEnvType\@12\@XZ
     */
    virtual enum class Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const; // NOLINT
    /**
     * @vftbl 24
     * @symbol ?getTransactionWriteSizeLimit\@FileStorageArea\@Core\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getTransactionWriteSizeLimit() const; // NOLINT
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_FILESTORAGEAREA
    /**
     * @symbol ?_commit\@FileStorageArea\@Core\@\@MEAA?AVResult\@2\@XZ
     */
    MCVAPI class Core::Result _commit(); // NOLINT
    /**
     * @symbol ?_onTeardown\@FileStorageArea\@Core\@\@MEAAXXZ
     */
    MCVAPI void _onTeardown(); // NOLINT
    /**
     * @symbol ?_onTransactionsEmpty\@FileStorageArea\@Core\@\@MEAA?AVResult\@2\@_N\@Z
     */
    MCVAPI class Core::Result _onTransactionsEmpty(bool); // NOLINT
    /**
     * @symbol ?canExtendSize\@FileStorageArea\@Core\@\@UEBA_NXZ
     */
    MCVAPI bool canExtendSize() const; // NOLINT
    /**
     * @symbol ?checkCorrupt\@FileStorageArea\@Core\@\@UEAA_N_N\@Z
     */
    MCVAPI bool checkCorrupt(bool); // NOLINT
    /**
     * @symbol ?clearUsedSizeOverride\@FileStorageArea\@Core\@\@UEAAXXZ
     */
    MCVAPI void clearUsedSizeOverride(); // NOLINT
    /**
     * @symbol ?enableFlushToDisk\@FileStorageArea\@Core\@\@UEAAX_N\@Z
     */
    MCVAPI void enableFlushToDisk(bool); // NOLINT
    /**
     * @symbol ?flushImmediately\@FileStorageArea\@Core\@\@UEAAXXZ
     */
    MCVAPI void flushImmediately(); // NOLINT
    /**
     * @symbol ?handlesPendingWrites\@FileStorageArea\@Core\@\@UEBA_NXZ
     */
    MCVAPI bool handlesPendingWrites() const; // NOLINT
    /**
     * @symbol ?informPendingWriteSize\@FileStorageArea\@Core\@\@UEAAX_K_N\@Z
     */
    MCVAPI void informPendingWriteSize(unsigned __int64, bool); // NOLINT
    /**
     * @symbol ?informStorageAreaCopy\@FileStorageArea\@Core\@\@UEAAX_K\@Z
     */
    MCVAPI void informStorageAreaCopy(unsigned __int64); // NOLINT
    /**
     * @symbol ?setInitialSize\@FileStorageArea\@Core\@\@UEAAXAEBVPath\@2\@_K\@Z
     */
    MCVAPI void setInitialSize(class Core::Path const&, unsigned __int64); // NOLINT
    /**
     * @symbol ?setUsedSizeOverride\@FileStorageArea\@Core\@\@UEAAX_K\@Z
     */
    MCVAPI void setUsedSizeOverride(unsigned __int64); // NOLINT
    /**
     * @symbol ?supportsExtendSize\@FileStorageArea\@Core\@\@UEBA_NXZ
     */
    MCVAPI bool supportsExtendSize() const; // NOLINT
    /**
     * @symbol ?tick\@FileStorageArea\@Core\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FileStorageArea(); // NOLINT
#endif
    /**
     * @symbol ?checkUserStorage\@FileStorageArea\@Core\@\@QEAAXXZ
     */
    MCAPI void checkUserStorage(); // NOLINT
    /**
     * @symbol
     * ?getRootPath\@FileStorageArea\@Core\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const& getRootPath() const; // NOLINT
    /**
     * @symbol ?removeStateListener\@FileStorageArea\@Core\@\@QEAAXPEAVStorageAreaStateListener\@2\@\@Z
     */
    MCAPI void removeStateListener(class Core::StorageAreaStateListener*); // NOLINT
    /**
     * @symbol
     * ?getStorageAreaForPath\@FileStorageArea\@Core\@\@SA?AVResult\@2\@AEAV?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@AEBVPath\@2\@\@Z
     */
    MCAPI static class Core::Result
    getStorageAreaForPath(class std::shared_ptr<class Core::FileStorageArea>&, class Core::Path const&); // NOLINT
    /**
     * @symbol ?teardown\@FileStorageArea\@Core\@\@SAXXZ
     */
    MCAPI static void teardown(); // NOLINT

    // protected:
    /**
     * @symbol
     * ??0FileStorageArea\@Core\@\@IEAA\@W4FileAccessType\@1\@AEBVPath\@1\@_N2V?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@\@Z
     */
    MCAPI
    FileStorageArea(enum class Core::FileAccessType, class Core::Path const&, bool, bool, class std::shared_ptr<class Core::FileStorageArea>); // NOLINT

    // private:
    /**
     * @symbol ?_addReadOperation\@FileStorageArea\@Core\@\@AEAAX_N_K\@Z
     */
    MCAPI void _addReadOperation(bool, unsigned __int64); // NOLINT
    /**
     * @symbol ?_addWriteOperation\@FileStorageArea\@Core\@\@AEAAX_N_K\@Z
     */
    MCAPI void _addWriteOperation(bool, unsigned __int64); // NOLINT
    /**
     * @symbol ?_beginTransaction\@FileStorageArea\@Core\@\@AEAAXPEAVFileSystemImpl\@2\@_N\@Z
     */
    MCAPI void _beginTransaction(class Core::FileSystemImpl*, bool); // NOLINT
    /**
     * @symbol ?_endTransaction\@FileStorageArea\@Core\@\@AEAA?AVResult\@2\@PEAVFileSystemImpl\@2\@_N\@Z
     */
    MCAPI class Core::Result _endTransaction(class Core::FileSystemImpl*, bool); // NOLINT
    /**
     * @symbol ?_onDeleteFile\@FileStorageArea\@Core\@\@AEAAXAEBVPath\@2\@\@Z
     */
    MCAPI void _onDeleteFile(class Core::Path const&); // NOLINT
    /**
     * @symbol ?_onWriteFile\@FileStorageArea\@Core\@\@AEAAXAEBVPath\@2\@\@Z
     */
    MCAPI void _onWriteFile(class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?_getStorageAreaForPathImpl\@FileStorageArea\@Core\@\@CA?AVResult\@2\@AEAV?$shared_ptr\@VFileStorageArea\@Core\@\@\@std\@\@AEBVPath\@2\@\@Z
     */
    MCAPI static class Core::Result
    _getStorageAreaForPathImpl(class std::shared_ptr<class Core::FileStorageArea>&, class Core::Path const&); // NOLINT

protected:
private:
    /**
     * @symbol
     * ?sStorageAreaFileStats\@FileStorageArea\@Core\@\@0V?$vector\@PEAVFileStats\@Core\@\@V?$allocator\@PEAVFileStats\@Core\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<class Core::FileStats*> sStorageAreaFileStats; // NOLINT
    /**
     * @symbol ?sStorageAreaLock\@FileStorageArea\@Core\@\@0Vrecursive_mutex\@std\@\@A
     */
    MCAPI static class std::recursive_mutex sStorageAreaLock; // NOLINT
    /**
     * @symbol ?sStorageAreas\@FileStorageArea\@Core\@\@0VStorageAreasTree\@2\@A
     */
    MCAPI static class Core::StorageAreasTree sStorageAreas; // NOLINT
};

}; // namespace Core
