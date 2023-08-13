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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?_getPath\@FlatFile\@Core\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@XZ
     */
    virtual class Core::PathBuffer<std::string> _getPath() const;
    /**
     * @vftbl 2
     * @symbol ?_getBlockSize\@FlatFile\@Core\@\@UEBA_KXZ
     */
    virtual uint64_t _getBlockSize() const;
    /**
     * @vftbl 3
     * @symbol ?_isOpen\@FlatFile\@Core\@\@UEAA_NXZ
     */
    virtual bool _isOpen();
    /**
     * @vftbl 4
     * @symbol ?_close\@FlatFile\@Core\@\@UEAA?AVResult\@2\@XZ
     */
    virtual class Core::Result _close();
    /**
     * @vftbl 5
     * @symbol ?_read\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEAX_KPEA_K\@Z
     */
    virtual class Core::Result _read(void*, uint64_t, uint64_t*);
    /**
     * @vftbl 6
     * @symbol ?_readExactly\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEAX_K\@Z
     */
    virtual class Core::Result _readExactly(void*, uint64_t);
    /**
     * @vftbl 7
     * @symbol ?_skip\@FlatFile\@Core\@\@UEAA?AVResult\@2\@_K\@Z
     */
    virtual class Core::Result _skip(uint64_t);
    /**
     * @vftbl 8
     * @symbol ?_readAtPosition\@FlatFile\@Core\@\@UEAA?AVResult\@2\@_KPEAX0PEA_K\@Z
     */
    virtual class Core::Result _readAtPosition(uint64_t, void*, uint64_t, uint64_t*);
    /**
     * @vftbl 9
     * @symbol ?_getPosition\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getPosition(uint64_t*);
    /**
     * @vftbl 10
     * @symbol ?_setPosition\@FlatFile\@Core\@\@UEAA?AVResult\@2\@_K\@Z
     */
    virtual class Core::Result _setPosition(uint64_t);
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol ?_getSize\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getSize(uint64_t*);
    /**
     * @vftbl 14
     * @symbol ?_getRemainingSize\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getRemainingSize(uint64_t*);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_FLATFILE
    /**
     * @symbol ?_flush\@FlatFile\@Core\@\@UEAA?AVResult\@2\@XZ
     */
    MCVAPI class Core::Result _flush();
    /**
     * @symbol ?_write\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEBX_K\@Z
     */
    MCVAPI class Core::Result _write(void const*, uint64_t);
#endif
    /**
     * @symbol
     * ??0FlatFile\@Core\@\@QEAA\@PEAVFileSystemImpl\@1\@VFileOpenMode\@1\@V?$unique_ptr\@VFileImpl\@Core\@\@U?$default_delete\@VFileImpl\@Core\@\@\@std\@\@\@std\@\@AEBVPath\@1\@_K4\@Z
     */
    MCAPI FlatFile(
        class Core::FileSystemImpl*,
        class Core::FileOpenMode,
        std::unique_ptr<class Core::FileImpl>,
        class Core::Path const&,
        uint64_t,
        uint64_t
    );
    // NOLINTEND
};

}; // namespace Core
