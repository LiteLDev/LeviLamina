#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkBuildOrderPolicyBase {

public:
    // prevent constructor by default
    ChunkBuildOrderPolicyBase& operator=(ChunkBuildOrderPolicyBase const&) = delete;
    ChunkBuildOrderPolicyBase(ChunkBuildOrderPolicyBase const&)            = delete;
    ChunkBuildOrderPolicyBase()                                            = delete;

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
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?registerForUpdates\@ChunkBuildOrderPolicyBase\@\@UEAAIXZ
     */
    virtual unsigned int registerForUpdates(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKBUILDORDERPOLICYBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChunkBuildOrderPolicyBase(); // NOLINT
#endif
};
