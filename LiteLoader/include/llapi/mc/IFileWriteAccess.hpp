/**
 * @file  IFileWriteAccess.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IFileWriteAccess.
 *
 */
class IFileWriteAccess {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFILEWRITEACCESS
public:
    class IFileWriteAccess& operator=(class IFileWriteAccess const &) = delete;
    IFileWriteAccess(class IFileWriteAccess const &) = delete;
    IFileWriteAccess() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fwrite\@MemoryMappedFileWriteAccess\@MemoryMappedFileAccess\@\@UEAA_KPEBX_K1PEAX\@Z
     */
    virtual unsigned __int64 fwrite(void const *, unsigned __int64, unsigned __int64, void *) = 0;

};
