/**
 * @file  IFileAccess.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IFileAccess.
 *
 */
class IFileAccess {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFILEACCESS
public:
    class IFileAccess& operator=(class IFileAccess const &) = delete;
    IFileAccess(class IFileAccess const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fopen\@FileSystemFileAccess\@\@UEAAPEAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void * fopen(class Core::Path const &, std::string const &) = 0;
    /**
     * @vftbl 2
     * @symbol ?fclose\@FileSystemFileAccess\@\@UEAAHPEAX\@Z
     */
    virtual int fclose(void *) = 0;
    /**
     * @vftbl 3
     * @symbol ?fseek\@FileSystemFileAccess\@\@UEAAHPEAX_JH\@Z
     */
    virtual int fseek(void *, __int64, int) = 0;
    /**
     * @vftbl 4
     * @symbol ?ftell\@FileSystemFileAccess\@\@UEAA_JPEAX\@Z
     */
    virtual __int64 ftell(void *) = 0;
    /**
     * @vftbl 5
     * @symbol ?getReadInterface\@FileSystemFileAccess\@\@UEBAPEBVIFileReadAccess\@\@XZ
     */
    virtual class IFileReadAccess const * getReadInterface() const = 0;
    /**
     * @vftbl 6
     * @symbol ?getWriteInterface\@FileSystemFileAccess\@\@UEAAPEAVIFileWriteAccess\@\@XZ
     */
    virtual class IFileWriteAccess * getWriteInterface() = 0;
    /**
     * @vftbl 7
     * @symbol ?unload\@FileSystemFileAccess\@\@UEAAXXZ
     */
    virtual void unload() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IFILEACCESS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IFileAccess();
#endif
    /**
     * @symbol ??0IFileAccess\@\@QEAA\@XZ
     */
    MCAPI IFileAccess();

};
