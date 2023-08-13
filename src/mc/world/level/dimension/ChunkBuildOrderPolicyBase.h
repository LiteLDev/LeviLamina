#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkBuildOrderPolicyBase {

public:
    // prevent constructor by default
    ChunkBuildOrderPolicyBase& operator=(ChunkBuildOrderPolicyBase const&) = delete;
    ChunkBuildOrderPolicyBase(ChunkBuildOrderPolicyBase const&)            = delete;
    ChunkBuildOrderPolicyBase()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getChunkRebuildPriority\@ChunkBuildOrderPolicy\@\@UEBAHAEBVChunkPos\@\@\@Z
     */
    virtual int getChunkRebuildPriority(class ChunkPos const&) const = 0;
    /**
     * @vftbl 2
     * @symbol ?registerForUpdates\@ChunkBuildOrderPolicyBase\@\@UEAAIXZ
     */
    virtual unsigned int registerForUpdates();
    /**
     * @vftbl 3
     * @symbol ?unregisterForUpdates\@ChunkBuildOrderPolicy\@\@UEAAXI\@Z
     */
    virtual void unregisterForUpdates(unsigned int) = 0;
    /**
     * @vftbl 4
     * @symbol ?setPlayerInfluence\@ChunkBuildOrderPolicy\@\@UEAAXIAEBVChunkPos\@\@AEBVVec3\@\@\@Z
     */
    virtual void setPlayerInfluence(unsigned int, class ChunkPos const&, class Vec3 const&) = 0;
    /**
     * @vftbl 5
     * @symbol ?setTickingAreaInfluence\@ChunkBuildOrderPolicy\@\@UEAAXIAEBVChunkPos\@\@HH_N1\@Z
     */
    virtual void setTickingAreaInfluence(unsigned int, class ChunkPos const&, int, int, bool, bool) = 0;
    /**
     * @vftbl 6
     * @symbol ?updateInfluences\@ChunkBuildOrderPolicy\@\@UEAAXXZ
     */
    virtual void updateInfluences() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKBUILDORDERPOLICYBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChunkBuildOrderPolicyBase();
#endif
    // NOLINTEND
};
