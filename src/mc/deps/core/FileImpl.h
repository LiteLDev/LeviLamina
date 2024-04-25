#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileImpl {
public:
    // prevent constructor by default
    FileImpl& operator=(FileImpl const&);
    FileImpl(FileImpl const&);
    FileImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FileImpl@Core@@UEAA@XZ
    virtual ~FileImpl();

    // vIndex: 1, symbol:
    // ?_getPath@FlatFile@Core@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@XZ
    virtual class Core::PathBuffer<std::string> _getPath() const = 0;

    // vIndex: 2, symbol: ?_getBlockSize@FlatFile@Core@@UEBA_KXZ
    virtual uint64 _getBlockSize() const = 0;

    // vIndex: 3, symbol: ?_isOpen@FlatFile@Core@@UEAA_NXZ
    virtual bool _isOpen() = 0;

    // vIndex: 4, symbol: ?_close@FlatFile@Core@@UEAA?AVResult@2@XZ
    virtual class Core::Result _close() = 0;

    // vIndex: 5, symbol: ?_read@FlatFile@Core@@UEAA?AVResult@2@PEAX_KPEA_K@Z
    virtual class Core::Result _read(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead) = 0;

    // vIndex: 6, symbol: ?_readExactly@FlatFile@Core@@UEAA?AVResult@2@PEAX_K@Z
    virtual class Core::Result _readExactly(void* buf, uint64 numBytes) = 0;

    // vIndex: 7, symbol: ?_skip@FlatFile@Core@@UEAA?AVResult@2@_K@Z
    virtual class Core::Result _skip(uint64 numBytes) = 0;

    // vIndex: 8, symbol: ?_readAtPosition@FlatFile@Core@@UEAA?AVResult@2@_KPEAX0PEA_K@Z
    virtual class Core::Result _readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead) = 0;

    // vIndex: 9, symbol: ?_getPosition@FlatFile@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getPosition(uint64* pPosition) = 0;

    // vIndex: 10, symbol: ?_setPosition@FlatFile@Core@@UEAA?AVResult@2@_K@Z
    virtual class Core::Result _setPosition(uint64 position) = 0;

    // vIndex: 11, symbol: ?_write@FlatFile@Core@@UEAA?AVResult@2@PEBX_K@Z
    virtual class Core::Result _write(void const* pBuf, uint64 numBytes) = 0;

    // vIndex: 12, symbol: ?_flush@FlatFile@Core@@UEAA?AVResult@2@XZ
    virtual class Core::Result _flush() = 0;

    // vIndex: 13, symbol: ?_getSize@FlatFile@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getSize(uint64* pSize) = 0;

    // vIndex: 14, symbol: ?_getRemainingSize@FlatFile@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getRemainingSize(uint64* pFileSize) = 0;

    // symbol: ??0FileImpl@Core@@QEAA@PEAVFileSystemImpl@1@VFileOpenMode@1@@Z
    MCAPI FileImpl(class Core::FileSystemImpl* pTransaction, class Core::FileOpenMode openMode);

    // symbol: ?close@FileImpl@Core@@QEAA?AVResult@2@XZ
    MCAPI class Core::Result close();

    // symbol: ?flush@FileImpl@Core@@QEAA?AVResult@2@XZ
    MCAPI class Core::Result flush();

    // symbol: ?getBlockSize@FileImpl@Core@@QEBA_KXZ
    MCAPI uint64 getBlockSize() const;

    // symbol: ?getOpenMode@FileImpl@Core@@QEBAAEBVFileOpenMode@2@XZ
    MCAPI class Core::FileOpenMode const& getOpenMode() const;

    // symbol:
    // ?getPath@FileImpl@Core@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@XZ
    MCAPI class Core::PathBuffer<std::string> getPath() const;

    // symbol: ?getPosition@FileImpl@Core@@QEAA?AVResult@2@PEA_K@Z
    MCAPI class Core::Result getPosition(uint64* pPosition);

    // symbol: ?getRemainingSize@FileImpl@Core@@QEAA?AVResult@2@PEA_K@Z
    MCAPI class Core::Result getRemainingSize(uint64* pSize);

    // symbol: ?getSize@FileImpl@Core@@QEAA?AVResult@2@PEA_K@Z
    MCAPI class Core::Result getSize(uint64* pSize);

    // symbol: ?getTransaction@FileImpl@Core@@QEAAPEAVFileSystemImpl@2@XZ
    MCAPI class Core::FileSystemImpl* getTransaction();

    // symbol: ?isOpen@FileImpl@Core@@QEAA_NXZ
    MCAPI bool isOpen();

    // symbol: ?read@FileImpl@Core@@QEAA?AVResult@2@PEAX_KPEA_K@Z
    MCAPI class Core::Result read(void* buf, uint64 numBytes, uint64* pNumBytesRead);

    // symbol: ?readAtPosition@FileImpl@Core@@QEAA?AVResult@2@_KPEAX0PEA_K@Z
    MCAPI class Core::Result readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead);

    // symbol: ?readExactly@FileImpl@Core@@QEAA?AVResult@2@PEAX_K@Z
    MCAPI class Core::Result readExactly(void* buf, uint64 numBytes);

    // symbol: ?setLoggingEnabled@FileImpl@Core@@QEAAX_N@Z
    MCAPI void setLoggingEnabled(bool loggingEnabled);

    // symbol: ?setPosition@FileImpl@Core@@QEAA?AVResult@2@_K@Z
    MCAPI class Core::Result setPosition(uint64 position);

    // symbol: ?skip@FileImpl@Core@@QEAA?AVResult@2@_K@Z
    MCAPI class Core::Result skip(uint64 numBytes);

    // symbol: ?write@FileImpl@Core@@QEAA?AVResult@2@PEBX_K@Z
    MCAPI class Core::Result write(void const* pBuf, uint64 numBytes);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_lockIfWriteBuffered@FileImpl@Core@@AEAA?AV?$UniqueLock@Vrecursive_mutex@std@@@Threading@Bedrock@@_N@Z
    MCAPI class Bedrock::Threading::UniqueLock<std::recursive_mutex> _lockIfWriteBuffered(bool);

    // symbol: ?_writeOperation@FileImpl@Core@@AEAA?AVResult@2@$$QEAV32@_K@Z
    MCAPI class Core::Result _writeOperation(class Core::Result&& result, uint64 numBytesWritten);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?sAllFiles@FileImpl@Core@@0V?$vector@PEAVFileImpl@Core@@V?$allocator@PEAVFileImpl@Core@@@std@@@std@@A
    MCAPI static std::vector<class Core::FileImpl*> sAllFiles;

    // symbol: ?sAllFilesLock@FileImpl@Core@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex sAllFilesLock;

    // NOLINTEND
};

}; // namespace Core
