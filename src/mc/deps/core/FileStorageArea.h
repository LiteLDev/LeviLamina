#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileAccessType.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/TransactionFlags.h"
#include "mc/deps/core/WriteOperation.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStats; }
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { class StorageAreasTree; }
// clang-format on

namespace Core {

class FileStorageArea {
public:
    // FileStorageArea inner types declare
    // clang-format off
    struct StorageAreaSpaceInfo;
    // clang-format on

    // FileStorageArea inner types define
    enum class FlushableLevelDbEnvType {};

    struct StorageAreaSpaceInfo {
    public:
        // prevent constructor by default
        StorageAreaSpaceInfo& operator=(StorageAreaSpaceInfo const&);
        StorageAreaSpaceInfo(StorageAreaSpaceInfo const&);
        StorageAreaSpaceInfo();
    };

public:
    // prevent constructor by default
    FileStorageArea& operator=(FileStorageArea const&);
    FileStorageArea(FileStorageArea const&);
    FileStorageArea();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?createTransaction@FileStorageArea@Core@@UEAA?AV?$unique_ptr@VFileSystemImpl@Core@@U?$default_delete@VFileSystemImpl@Core@@@std@@@std@@W4FileAccessType@2@W4TransactionFlags@2@@Z
    virtual std::unique_ptr<class Core::FileSystemImpl>
        createTransaction(::Core::FileAccessType, ::Core::TransactionFlags);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4() = 0;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5() = 0;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6() = 0;

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7() = 0;

    // vIndex: 8, symbol: ?notifyChangeInFileSize@FileStorageArea@Core@@UEAAX_J0@Z
    virtual void notifyChangeInFileSize(int64, int64);

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: ?resetCanAttemptExtendSize@FileStorageArea@Core@@UEAAXXZ
    virtual void resetCanAttemptExtendSize();

    // vIndex: 15, symbol: ?getExtendSizeThreshold@FileStorageArea@Core@@UEBA?AVResult@2@AEA_K@Z
    virtual class Core::Result getExtendSizeThreshold(uint64&) const;

    // vIndex: 16, symbol: ?attemptExtendSize@FileStorageArea@Core@@UEAAXAEB_JV?$function@$$A6AXXZ@std@@@Z
    virtual void attemptExtendSize(int64 const&, std::function<void(void)>);

    // vIndex: 17, symbol: ?preemptiveExtendSize@FileStorageArea@Core@@UEAAX_KV?$function@$$A6AXXZ@std@@1@Z
    virtual void preemptiveExtendSize(uint64, std::function<void(void)>, std::function<void(void)>);

    // vIndex: 18, symbol: ?getAvailableUserStorageSize@FileStorageArea@Core@@UEAA_KXZ
    virtual uint64 getAvailableUserStorageSize();

    // vIndex: 19, symbol: ?unloadFlatFileManifests@FileStorageArea@Core@@UEAAX_N@Z
    virtual void unloadFlatFileManifests(bool);

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 24, symbol: ?getFlushableLevelDbEnvType@FileStorageArea@Core@@UEBA?AW4FlushableLevelDbEnvType@12@XZ
    virtual ::Core::FileStorageArea::FlushableLevelDbEnvType getFlushableLevelDbEnvType() const;

    // vIndex: 25, symbol: ?getTransactionWriteSizeLimit@FileStorageArea@Core@@UEBA_KXZ
    virtual uint64 getTransactionWriteSizeLimit() const;

    // vIndex: 26, symbol: ?setSaveDataIcon@FileStorageArea@Core@@UEAA?AVResult@2@AEBVPath@2@@Z
    virtual class Core::Result setSaveDataIcon(class Core::Path const&);

    // vIndex: 27, symbol: ?shouldAllowCommit@FileStorageArea@Core@@UEBA_NXZ
    virtual bool shouldAllowCommit() const;

    // vIndex: 28, symbol: ?trackBytesWritten@FileStorageArea@Core@@UEAAXAEBVPath@2@_KW4WriteOperation@2@@Z
    virtual void trackBytesWritten(class Core::Path const&, uint64, ::Core::WriteOperation);

    // vIndex: 29, symbol: ?trackWriteOperation@FileStorageArea@Core@@UEAAXAEBVPath@2@W4WriteOperation@2@@Z
    virtual void trackWriteOperation(class Core::Path const&, ::Core::WriteOperation);

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: ?getStorageAreaSpaceInfo@FileStorageArea@Core@@UEAA?AUStorageAreaSpaceInfo@12@XZ
    virtual struct Core::FileStorageArea::StorageAreaSpaceInfo getStorageAreaSpaceInfo();

    // symbol: ?_commit@FileStorageArea@Core@@MEAA?AVResult@2@XZ
    MCVAPI class Core::Result _commit();

    // symbol: ?_onTeardown@FileStorageArea@Core@@MEAAXXZ
    MCVAPI void _onTeardown();

    // symbol: ?_onTransactionsEmpty@FileStorageArea@Core@@MEAA?AVResult@2@_N@Z
    MCVAPI class Core::Result _onTransactionsEmpty(bool);

    // symbol: ?canExtendSize@FileStorageArea@Core@@UEBA_NXZ
    MCVAPI bool canExtendSize() const;

    // symbol: ?checkCorrupt@FileStorageArea@Core@@UEAA_N_N@Z
    MCVAPI bool checkCorrupt(bool);

    // symbol: ?clearUsedSizeOverride@FileStorageArea@Core@@UEAAXXZ
    MCVAPI void clearUsedSizeOverride();

    // symbol: ?enableFlushToDisk@FileStorageArea@Core@@UEAAX_N@Z
    MCVAPI void enableFlushToDisk(bool);

    // symbol: ?flushImmediately@FileStorageArea@Core@@UEAAXXZ
    MCVAPI void flushImmediately();

    // symbol: ?handlesPendingWrites@FileStorageArea@Core@@UEBA_NXZ
    MCVAPI bool handlesPendingWrites() const;

    // symbol: ?informPendingWriteSize@FileStorageArea@Core@@UEAAX_K_N@Z
    MCVAPI void informPendingWriteSize(uint64, bool);

    // symbol: ?informStorageAreaCopy@FileStorageArea@Core@@UEAAX_K@Z
    MCVAPI void informStorageAreaCopy(uint64);

    // symbol: ?setInitialSize@FileStorageArea@Core@@UEAAXAEBVPath@2@_K@Z
    MCVAPI void setInitialSize(class Core::Path const&, uint64);

    // symbol: ?setUsedSizeOverride@FileStorageArea@Core@@UEAAX_K@Z
    MCVAPI void setUsedSizeOverride(uint64);

    // symbol: ?supportsExtendSize@FileStorageArea@Core@@UEBA_NXZ
    MCVAPI bool supportsExtendSize() const;

    // symbol: ?tick@FileStorageArea@Core@@UEAAXXZ
    MCVAPI void tick();

    // symbol: ??1FileStorageArea@Core@@UEAA@XZ
    MCVAPI ~FileStorageArea();

    // symbol: ?checkUserStorage@FileStorageArea@Core@@QEAAXXZ
    MCAPI void checkUserStorage();

    // symbol:
    // ?getRootPath@FileStorageArea@Core@@QEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@XZ
    MCAPI class Core::PathBuffer<std::string> const& getRootPath() const;

    // symbol:
    // ?getStorageAreaForPath@FileStorageArea@Core@@SA?AVResult@2@AEAV?$shared_ptr@VFileStorageArea@Core@@@std@@AEBVPath@2@@Z
    MCAPI static class Core::Result
    getStorageAreaForPath(std::shared_ptr<class Core::FileStorageArea>&, class Core::Path const&);

    // symbol: ?teardown@FileStorageArea@Core@@SAXXZ
    MCAPI static void teardown();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0FileStorageArea@Core@@IEAA@W4FileAccessType@1@AEBVPath@1@_N2V?$shared_ptr@VFileStorageArea@Core@@@std@@@Z
    MCAPI
    FileStorageArea(::Core::FileAccessType, class Core::Path const&, bool, bool, std::shared_ptr<class Core::FileStorageArea>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addReadOperation@FileStorageArea@Core@@AEAAX_N_K@Z
    MCAPI void _addReadOperation(bool, uint64);

    // symbol: ?_addReadWriteOperation@FileStorageArea@Core@@AEAAX_N_K1@Z
    MCAPI void _addReadWriteOperation(bool, uint64, uint64);

    // symbol: ?_addWriteOperation@FileStorageArea@Core@@AEAAX_N_K@Z
    MCAPI void _addWriteOperation(bool, uint64);

    // symbol: ?_beginTransaction@FileStorageArea@Core@@AEAAXPEAVFileSystemImpl@2@_N@Z
    MCAPI void _beginTransaction(class Core::FileSystemImpl*, bool);

    // symbol: ?_endTransaction@FileStorageArea@Core@@AEAA?AVResult@2@PEAVFileSystemImpl@2@_N@Z
    MCAPI class Core::Result _endTransaction(class Core::FileSystemImpl*, bool);

    // symbol: ?_onDeleteFile@FileStorageArea@Core@@AEAAXAEBVPath@2@@Z
    MCAPI void _onDeleteFile(class Core::Path const&);

    // symbol: ?_onWriteFile@FileStorageArea@Core@@AEAAXAEBVPath@2@@Z
    MCAPI void _onWriteFile(class Core::Path const&);

    // symbol:
    // ?_getStorageAreaForPathImpl@FileStorageArea@Core@@CA?AVResult@2@AEAV?$shared_ptr@VFileStorageArea@Core@@@std@@AEBVPath@2@@Z
    MCAPI static class Core::Result
    _getStorageAreaForPathImpl(std::shared_ptr<class Core::FileStorageArea>&, class Core::Path const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?sStorageAreaFileStats@FileStorageArea@Core@@0V?$vector@PEAVFileStats@Core@@V?$allocator@PEAVFileStats@Core@@@std@@@std@@A
    MCAPI static std::vector<class Core::FileStats*> sStorageAreaFileStats;

    // symbol: ?sStorageAreaLock@FileStorageArea@Core@@0Vrecursive_mutex@std@@A
    MCAPI static std::recursive_mutex sStorageAreaLock;

    // symbol: ?sStorageAreas@FileStorageArea@Core@@0VStorageAreasTree@2@A
    MCAPI static class Core::StorageAreasTree sStorageAreas;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $sStorageAreaFileStats() { return sStorageAreaFileStats; }

    static auto& $sStorageAreaLock() { return sStorageAreaLock; }

    static auto& $sStorageAreas() { return sStorageAreas; }

    // NOLINTEND
};

}; // namespace Core
