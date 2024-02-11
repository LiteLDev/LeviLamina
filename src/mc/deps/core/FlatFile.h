#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileImpl.h"
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FlatFile : public ::Core::FileImpl {
public:
    // prevent constructor by default
    FlatFile& operator=(FlatFile const&);
    FlatFile(FlatFile const&);
    FlatFile();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FlatFile@Core@@UEAA@XZ
    virtual ~FlatFile() = default;

    // vIndex: 1, symbol:
    // ?_getPath@FlatFile@Core@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@XZ
    virtual class Core::PathBuffer<std::string> _getPath() const;

    // vIndex: 2, symbol: ?_getBlockSize@FlatFile@Core@@UEBA_KXZ
    virtual uint64 _getBlockSize() const;

    // vIndex: 3, symbol: ?_isOpen@FlatFile@Core@@UEAA_NXZ
    virtual bool _isOpen();

    // vIndex: 4, symbol: ?_close@FlatFile@Core@@UEAA?AVResult@2@XZ
    virtual class Core::Result _close();

    // vIndex: 5, symbol: ?_read@FlatFile@Core@@UEAA?AVResult@2@PEAX_KPEA_K@Z
    virtual class Core::Result _read(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead);

    // vIndex: 6, symbol: ?_readExactly@FlatFile@Core@@UEAA?AVResult@2@PEAX_K@Z
    virtual class Core::Result _readExactly(void* buf, uint64 numBytes);

    // vIndex: 7, symbol: ?_skip@FlatFile@Core@@UEAA?AVResult@2@_K@Z
    virtual class Core::Result _skip(uint64 numBytes);

    // vIndex: 8, symbol: ?_readAtPosition@FlatFile@Core@@UEAA?AVResult@2@_KPEAX0PEA_K@Z
    virtual class Core::Result _readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead);

    // vIndex: 9, symbol: ?_getPosition@FlatFile@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getPosition(uint64* pPosition);

    // vIndex: 10, symbol: ?_setPosition@FlatFile@Core@@UEAA?AVResult@2@_K@Z
    virtual class Core::Result _setPosition(uint64 position);

    // vIndex: 11, symbol: ?_write@FlatFile@Core@@UEAA?AVResult@2@PEBX_K@Z
    virtual class Core::Result _write(void const* pBuf, uint64 numBytes);

    // vIndex: 12, symbol: ?_flush@FlatFile@Core@@UEAA?AVResult@2@XZ
    virtual class Core::Result _flush();

    // vIndex: 13, symbol: ?_getSize@FlatFile@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getSize(uint64* pSize);

    // vIndex: 14, symbol: ?_getRemainingSize@FlatFile@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getRemainingSize(uint64* pFileSize);

    // symbol:
    // ??0FlatFile@Core@@QEAA@PEAVFileSystemImpl@1@VFileOpenMode@1@V?$unique_ptr@VFileImpl@Core@@U?$default_delete@VFileImpl@Core@@@std@@@std@@AEBVPath@1@_K4@Z
    MCAPI FlatFile(
        class Core::FileSystemImpl*           pTransaction,
        class Core::FileOpenMode              fileOpenMode,
        std::unique_ptr<class Core::FileImpl> baseFile,
        class Core::Path const&               path,
        uint64                                seekPos,
        uint64                                fileSize
    );

    // NOLINTEND
};

}; // namespace Core
