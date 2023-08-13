#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileImpl {

public:
    // prevent constructor by default
    FileImpl& operator=(FileImpl const&) = delete;
    FileImpl(FileImpl const&)            = delete;
    FileImpl()                           = delete;

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
    virtual class Core::PathBuffer<std::string> _getPath() const = 0;
    /**
     * @vftbl 2
     * @symbol ?_getBlockSize\@FlatFile\@Core\@\@UEBA_KXZ
     */
    virtual uint64_t _getBlockSize() const = 0;
    /**
     * @vftbl 3
     * @symbol ?_isOpen\@FlatFile\@Core\@\@UEAA_NXZ
     */
    virtual bool _isOpen() = 0;
    /**
     * @vftbl 4
     * @symbol ?_close\@FlatFile\@Core\@\@UEAA?AVResult\@2\@XZ
     */
    virtual class Core::Result _close() = 0;
    /**
     * @vftbl 5
     * @symbol ?_read\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEAX_KPEA_K\@Z
     */
    virtual class Core::Result _read(void*, uint64_t, uint64_t*) = 0;
    /**
     * @vftbl 6
     * @symbol ?_readExactly\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEAX_K\@Z
     */
    virtual class Core::Result _readExactly(void*, uint64_t) = 0;
    /**
     * @vftbl 7
     * @symbol ?_skip\@FlatFile\@Core\@\@UEAA?AVResult\@2\@_K\@Z
     */
    virtual class Core::Result _skip(uint64_t) = 0;
    /**
     * @vftbl 8
     * @symbol ?_readAtPosition\@FlatFile\@Core\@\@UEAA?AVResult\@2\@_KPEAX0PEA_K\@Z
     */
    virtual class Core::Result _readAtPosition(uint64_t, void*, uint64_t, uint64_t*) = 0;
    /**
     * @vftbl 9
     * @symbol ?_getPosition\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getPosition(uint64_t*) = 0;
    /**
     * @vftbl 10
     * @symbol ?_setPosition\@FlatFile\@Core\@\@UEAA?AVResult\@2\@_K\@Z
     */
    virtual class Core::Result _setPosition(uint64_t) = 0;
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11() = 0;
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12() = 0;
    /**
     * @vftbl 13
     * @symbol ?_getSize\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getSize(uint64_t*) = 0;
    /**
     * @vftbl 14
     * @symbol ?_getRemainingSize\@FlatFile\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result _getRemainingSize(uint64_t*) = 0;
    /**
     * @vftbl 15
     * @symbol ?_setInitialFileSize\@FileImpl\@Core\@\@MEAA?AVResult\@2\@_K\@Z
     */
    virtual class Core::Result _setInitialFileSize(uint64_t);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_FILEIMPL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FileImpl();
#endif
    /**
     * @symbol ??0FileImpl\@Core\@\@QEAA\@PEAVFileSystemImpl\@1\@VFileOpenMode\@1\@\@Z
     */
    MCAPI FileImpl(class Core::FileSystemImpl*, class Core::FileOpenMode);
    /**
     * @symbol ?close\@FileImpl\@Core\@\@QEAA?AVResult\@2\@XZ
     */
    MCAPI class Core::Result close();
    /**
     * @symbol ?flush\@FileImpl\@Core\@\@QEAA?AVResult\@2\@XZ
     */
    MCAPI class Core::Result flush();
    /**
     * @symbol ?getPosition\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEA_K\@Z
     */
    MCAPI class Core::Result getPosition(uint64_t*);
    /**
     * @symbol ?getRemainingSize\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEA_K\@Z
     */
    MCAPI class Core::Result getRemainingSize(uint64_t*);
    /**
     * @symbol ?getSize\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEA_K\@Z
     */
    MCAPI class Core::Result getSize(uint64_t*);
    /**
     * @symbol ?getTransaction\@FileImpl\@Core\@\@QEAAPEAVFileSystemImpl\@2\@XZ
     */
    MCAPI class Core::FileSystemImpl* getTransaction();
    /**
     * @symbol ?isOpen\@FileImpl\@Core\@\@QEAA_NXZ
     */
    MCAPI bool isOpen();
    /**
     * @symbol ?read\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEAX_KPEA_K\@Z
     */
    MCAPI class Core::Result read(void*, uint64_t, uint64_t*);
    /**
     * @symbol ?readAtPosition\@FileImpl\@Core\@\@QEAA?AVResult\@2\@_KPEAX0PEA_K\@Z
     */
    MCAPI class Core::Result readAtPosition(uint64_t, void*, uint64_t, uint64_t*);
    /**
     * @symbol ?readExactly\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEAX_K\@Z
     */
    MCAPI class Core::Result readExactly(void*, uint64_t);
    /**
     * @symbol ?setLoggingEnabled\@FileImpl\@Core\@\@QEAAX_N\@Z
     */
    MCAPI void setLoggingEnabled(bool);
    /**
     * @symbol ?setPosition\@FileImpl\@Core\@\@QEAA?AVResult\@2\@_K\@Z
     */
    MCAPI class Core::Result setPosition(uint64_t);
    /**
     * @symbol ?skip\@FileImpl\@Core\@\@QEAA?AVResult\@2\@_K\@Z
     */
    MCAPI class Core::Result skip(uint64_t);
    /**
     * @symbol ?write\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEBX_K\@Z
     */
    MCAPI class Core::Result write(void const*, uint64_t);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_writeOperation\@FileImpl\@Core\@\@AEAA?AVResult\@2\@$$QEAV32\@_K\@Z
     */
    MCAPI class Core::Result _writeOperation(class Core::Result&&, uint64_t);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?sAllFiles\@FileImpl\@Core\@\@0V?$vector\@PEAVFileImpl\@Core\@\@V?$allocator\@PEAVFileImpl\@Core\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<class Core::FileImpl*> sAllFiles;
    /**
     * @symbol ?sAllFilesLock\@FileImpl\@Core\@\@0Vmutex\@std\@\@A
     */
    MCAPI static std::mutex sAllFilesLock;
    // NOLINTEND
};

}; // namespace Core
