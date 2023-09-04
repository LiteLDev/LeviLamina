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
    FlatFile& operator=(FlatFile const&) = delete;
    FlatFile(FlatFile const&)            = delete;
    FlatFile()                           = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

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
    virtual class Core::Result _read(void*, uint64, uint64*);

    // vIndex: 6, symbol: ?_readExactly@FlatFile@Core@@UEAA?AVResult@2@PEAX_K@Z
    virtual class Core::Result _readExactly(void*, uint64);

    // vIndex: 7, symbol: ?_skip@FlatFile@Core@@UEAA?AVResult@2@_K@Z
    virtual class Core::Result _skip(uint64);

    // vIndex: 8, symbol: ?_readAtPosition@FlatFile@Core@@UEAA?AVResult@2@_KPEAX0PEA_K@Z
    virtual class Core::Result _readAtPosition(uint64, void*, uint64, uint64*);

    // vIndex: 9, symbol: ?_getPosition@FlatFile@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getPosition(uint64*);

    // vIndex: 10, symbol: ?_setPosition@FlatFile@Core@@UEAA?AVResult@2@_K@Z
    virtual class Core::Result _setPosition(uint64);

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?_getSize@FlatFile@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getSize(uint64*);

    // vIndex: 14, symbol: ?_getRemainingSize@FlatFile@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result _getRemainingSize(uint64*);

    // symbol: ?_flush@FlatFile@Core@@UEAA?AVResult@2@XZ
    MCVAPI class Core::Result _flush();

    // symbol: ?_write@FlatFile@Core@@UEAA?AVResult@2@PEBX_K@Z
    MCVAPI class Core::Result _write(void const*, uint64);

    // symbol:
    // ??0FlatFile@Core@@QEAA@PEAVFileSystemImpl@1@VFileOpenMode@1@V?$unique_ptr@VFileImpl@Core@@U?$default_delete@VFileImpl@Core@@@std@@@std@@AEBVPath@1@_K4@Z
    MCAPI FlatFile(
        class Core::FileSystemImpl*,
        class Core::FileOpenMode,
        std::unique_ptr<class Core::FileImpl>,
        class Core::Path const&,
        uint64,
        uint64
    );

    // NOLINTEND
};

}; // namespace Core
