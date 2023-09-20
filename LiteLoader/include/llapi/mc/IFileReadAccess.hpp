/**
 * @file  IFileReadAccess.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IFileReadAccess.
 *
 */
class IFileReadAccess {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFILEREADACCESS
public:
    class IFileReadAccess& operator=(class IFileReadAccess const &) = delete;
    IFileReadAccess(class IFileReadAccess const &) = delete;
    IFileReadAccess() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fread\@MemoryMappedFileReadAccess\@MemoryMappedFileAccess\@\@UEBA_KPEAX_K10\@Z
     */
    virtual unsigned __int64 fread(void *, unsigned __int64, unsigned __int64, void *) const = 0;

};
