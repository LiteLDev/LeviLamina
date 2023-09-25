/**
 * @file  FlushableStorageAreaEnv.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FlushableEnv.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlushableStorageAreaEnv.
 *
 */
class FlushableStorageAreaEnv : public FlushableEnv {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLUSHABLESTORAGEAREAENV
public:
    class FlushableStorageAreaEnv& operator=(class FlushableStorageAreaEnv const &) = delete;
    FlushableStorageAreaEnv(class FlushableStorageAreaEnv const &) = delete;
    FlushableStorageAreaEnv() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 20
     * @symbol ?flushToPermanentStorage\@FlushableStorageAreaEnv\@\@UEAAXXZ
     */
    virtual void flushToPermanentStorage();

};
