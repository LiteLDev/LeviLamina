#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2() = 0; // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3() = 0; // NOLINT
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
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8() = 0; // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9() = 0; // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10() = 0; // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11() = 0; // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12() = 0; // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13() = 0; // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?_setInitialFileSize\@FileImpl\@Core\@\@MEAA?AVResult\@2\@_K\@Z
     */
    virtual class Core::Result _setInitialFileSize(unsigned __int64); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_FILEIMPL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FileImpl(); // NOLINT
#endif
    /**
     * @symbol ??0FileImpl\@Core\@\@QEAA\@PEAVFileSystemImpl\@1\@VFileOpenMode\@1\@\@Z
     */
    MCAPI FileImpl(class Core::FileSystemImpl*, class Core::FileOpenMode); // NOLINT
    /**
     * @symbol ?close\@FileImpl\@Core\@\@QEAA?AVResult\@2\@XZ
     */
    MCAPI class Core::Result close(); // NOLINT
    /**
     * @symbol ?flush\@FileImpl\@Core\@\@QEAA?AVResult\@2\@XZ
     */
    MCAPI class Core::Result flush(); // NOLINT
    /**
     * @symbol ?getPosition\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEA_K\@Z
     */
    MCAPI class Core::Result getPosition(unsigned __int64*); // NOLINT
    /**
     * @symbol ?getRemainingSize\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEA_K\@Z
     */
    MCAPI class Core::Result getRemainingSize(unsigned __int64*); // NOLINT
    /**
     * @symbol ?getSize\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEA_K\@Z
     */
    MCAPI class Core::Result getSize(unsigned __int64*); // NOLINT
    /**
     * @symbol ?getTransaction\@FileImpl\@Core\@\@QEAAPEAVFileSystemImpl\@2\@XZ
     */
    MCAPI class Core::FileSystemImpl* getTransaction(); // NOLINT
    /**
     * @symbol ?isOpen\@FileImpl\@Core\@\@QEAA_NXZ
     */
    MCAPI bool isOpen(); // NOLINT
    /**
     * @symbol ?read\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEAX_KPEA_K\@Z
     */
    MCAPI class Core::Result read(void*, unsigned __int64, unsigned __int64*); // NOLINT
    /**
     * @symbol ?readAtPosition\@FileImpl\@Core\@\@QEAA?AVResult\@2\@_KPEAX0PEA_K\@Z
     */
    MCAPI class Core::Result readAtPosition(unsigned __int64, void*, unsigned __int64, unsigned __int64*); // NOLINT
    /**
     * @symbol ?readExactly\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEAX_K\@Z
     */
    MCAPI class Core::Result readExactly(void*, unsigned __int64); // NOLINT
    /**
     * @symbol ?setLoggingEnabled\@FileImpl\@Core\@\@QEAAX_N\@Z
     */
    MCAPI void setLoggingEnabled(bool); // NOLINT
    /**
     * @symbol ?setPosition\@FileImpl\@Core\@\@QEAA?AVResult\@2\@_K\@Z
     */
    MCAPI class Core::Result setPosition(unsigned __int64); // NOLINT
    /**
     * @symbol ?skip\@FileImpl\@Core\@\@QEAA?AVResult\@2\@_K\@Z
     */
    MCAPI class Core::Result skip(unsigned __int64); // NOLINT
    /**
     * @symbol ?write\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEBX_K\@Z
     */
    MCAPI class Core::Result write(void const*, unsigned __int64); // NOLINT

    // private:
    /**
     * @symbol ?_writeOperation\@FileImpl\@Core\@\@AEAA?AVResult\@2\@$$QEAV32\@_K\@Z
     */
    MCAPI class Core::Result _writeOperation(class Core::Result&&, unsigned __int64); // NOLINT

private:
    /**
     * @symbol
     * ?sAllFiles\@FileImpl\@Core\@\@0V?$vector\@PEAVFileImpl\@Core\@\@V?$allocator\@PEAVFileImpl\@Core\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<class Core::FileImpl*> sAllFiles; // NOLINT
    /**
     * @symbol ?sAllFilesLock\@FileImpl\@Core\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sAllFilesLock; // NOLINT
};

}; // namespace Core
