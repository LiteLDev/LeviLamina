/**
 * @file  ChunkBuildOrderPolicyBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkBuildOrderPolicyBase.
 *
 */
class ChunkBuildOrderPolicyBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBUILDORDERPOLICYBASE
public:
    class ChunkBuildOrderPolicyBase& operator=(class ChunkBuildOrderPolicyBase const &) = delete;
    ChunkBuildOrderPolicyBase(class ChunkBuildOrderPolicyBase const &) = delete;
    ChunkBuildOrderPolicyBase() = delete;
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
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?registerForUpdates\@ChunkBuildOrderPolicyBase\@\@UEAAIXZ
     */
    virtual unsigned int registerForUpdates();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKBUILDORDERPOLICYBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChunkBuildOrderPolicyBase();
#endif

};
