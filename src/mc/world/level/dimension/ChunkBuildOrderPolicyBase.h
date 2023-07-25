#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkBuildOrderPolicyBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBUILDORDERPOLICYBASE
public:
    ChunkBuildOrderPolicyBase& operator=(ChunkBuildOrderPolicyBase const&) = delete;
    ChunkBuildOrderPolicyBase(ChunkBuildOrderPolicyBase const&)            = delete;
    ChunkBuildOrderPolicyBase()                                            = delete;
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
