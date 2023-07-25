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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_FILEIMPL
public:
    FileImpl& operator=(FileImpl const&) = delete;
    FileImpl(FileImpl const&)            = delete;
    FileImpl()                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2() = 0;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3() = 0;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4() = 0;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5() = 0;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6() = 0;
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7() = 0;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8() = 0;
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9() = 0;
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10() = 0;
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
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13() = 0;
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol ?_setInitialFileSize\@FileImpl\@Core\@\@MEAA?AVResult\@2\@_K\@Z
     */
    virtual class Core::Result _setInitialFileSize(unsigned __int64);
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
    MCAPI class Core::Result getPosition(unsigned __int64*);
    /**
     * @symbol ?getRemainingSize\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEA_K\@Z
     */
    MCAPI class Core::Result getRemainingSize(unsigned __int64*);
    /**
     * @symbol ?getSize\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEA_K\@Z
     */
    MCAPI class Core::Result getSize(unsigned __int64*);
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
    MCAPI class Core::Result read(void*, unsigned __int64, unsigned __int64*);
    /**
     * @symbol ?readAtPosition\@FileImpl\@Core\@\@QEAA?AVResult\@2\@_KPEAX0PEA_K\@Z
     */
    MCAPI class Core::Result readAtPosition(unsigned __int64, void*, unsigned __int64, unsigned __int64*);
    /**
     * @symbol ?readExactly\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEAX_K\@Z
     */
    MCAPI class Core::Result readExactly(void*, unsigned __int64);
    /**
     * @symbol ?setLoggingEnabled\@FileImpl\@Core\@\@QEAAX_N\@Z
     */
    MCAPI void setLoggingEnabled(bool);
    /**
     * @symbol ?setPosition\@FileImpl\@Core\@\@QEAA?AVResult\@2\@_K\@Z
     */
    MCAPI class Core::Result setPosition(unsigned __int64);
    /**
     * @symbol ?skip\@FileImpl\@Core\@\@QEAA?AVResult\@2\@_K\@Z
     */
    MCAPI class Core::Result skip(unsigned __int64);
    /**
     * @symbol ?write\@FileImpl\@Core\@\@QEAA?AVResult\@2\@PEBX_K\@Z
     */
    MCAPI class Core::Result write(void const*, unsigned __int64);

    // private:
    /**
     * @symbol ?_writeOperation\@FileImpl\@Core\@\@AEAA?AVResult\@2\@$$QEAV32\@_K\@Z
     */
    MCAPI class Core::Result _writeOperation(class Core::Result&&, unsigned __int64);

private:
    /**
     * @symbol
     * ?sAllFiles\@FileImpl\@Core\@\@0V?$vector\@PEAVFileImpl\@Core\@\@V?$allocator\@PEAVFileImpl\@Core\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<class Core::FileImpl*> sAllFiles;
    /**
     * @symbol ?sAllFilesLock\@FileImpl\@Core\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex sAllFilesLock;
};

}; // namespace Core
