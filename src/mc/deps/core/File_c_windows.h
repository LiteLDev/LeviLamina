#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystem_windows; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { enum class FileBufferingMode; }
// clang-format on

namespace Core {

class File_c_windows {

public:
    // prevent constructor by default
    File_c_windows& operator=(File_c_windows const&) = delete;
    File_c_windows(File_c_windows const&)            = delete;
    File_c_windows()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?_getPath\@File_c_windows\@Core\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@XZ
     */
    virtual class Core::PathBuffer<std::string> _getPath() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?_getBlockSize\@File_c_windows\@Core\@\@UEBA_KXZ
     */
    virtual unsigned __int64 _getBlockSize() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?_isOpen\@File_c_windows\@Core\@\@UEAA_NXZ
     */
    virtual bool _isOpen(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?_close\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@XZ
     */
    virtual class Core::Result _close(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?_read\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@PEAX_KPEA_K\@Z
     */
    virtual class Core::Result _read(void*, unsigned __int64, unsigned __int64*); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?_readExactly\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@PEAX_K\@Z
     */
    virtual class Core::Result _readExactly(void*, unsigned __int64); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?_skip\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@_K\@Z
     */
    virtual class Core::Result _skip(unsigned __int64); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?_readAtPosition\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@_KPEAX0PEA_K\@Z
     */
    virtual class Core::Result _readAtPosition(unsigned __int64, void*, unsigned __int64, unsigned __int64*); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?_getPosition\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getPosition(unsigned __int64*); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?_setPosition\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@_K\@Z
     */
    virtual class Core::Result _setPosition(unsigned __int64); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?_write\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@PEBX_K\@Z
     */
    virtual class Core::Result _write(void const*, unsigned __int64); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?_flush\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@XZ
     */
    virtual class Core::Result _flush(); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?_getSize\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getSize(unsigned __int64*); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_getRemainingSize\@File_c_windows\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getRemainingSize(unsigned __int64*); // NOLINT
    /**
     * @symbol ?initialize\@File_c_windows\@Core\@\@SAXXZ
     */
    MCAPI static void initialize(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_open\@File_c_windows\@Core\@\@CA?AVResult\@2\@PEAVFileSystem_windows\@2\@AEAV?$unique_ptr\@VFileImpl\@Core\@\@U?$default_delete\@VFileImpl\@Core\@\@\@std\@\@\@std\@\@AEBVPath\@2\@VFileOpenMode\@2\@W4FileBufferingMode\@2\@\@Z
     */
    MCAPI static class Core::Result _open(
        class Core::FileSystem_windows*,
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::FileOpenMode,
        enum class Core::FileBufferingMode
    ); // NOLINT

private:
};

}; // namespace Core
