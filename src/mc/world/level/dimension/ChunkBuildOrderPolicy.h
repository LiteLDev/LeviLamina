#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkBuildOrderPolicy {

public:
    // prevent constructor by default
    ChunkBuildOrderPolicy& operator=(ChunkBuildOrderPolicy const&) = delete;
    ChunkBuildOrderPolicy(ChunkBuildOrderPolicy const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getChunkRebuildPriority\@ChunkBuildOrderPolicy\@\@UEBAHAEBVChunkPos\@\@\@Z
     */
    virtual int getChunkRebuildPriority(class ChunkPos const&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?registerForUpdates\@ChunkBuildOrderPolicy\@\@UEAAIXZ
     */
    virtual unsigned int registerForUpdates(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?unregisterForUpdates\@ChunkBuildOrderPolicy\@\@UEAAXI\@Z
     */
    virtual void unregisterForUpdates(unsigned int); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?setPlayerInfluence\@ChunkBuildOrderPolicy\@\@UEAAXIAEBVChunkPos\@\@AEBVVec3\@\@\@Z
     */
    virtual void setPlayerInfluence(unsigned int, class ChunkPos const&, class Vec3 const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?setTickingAreaInfluence\@ChunkBuildOrderPolicy\@\@UEAAXIAEBVChunkPos\@\@HH_N1\@Z
     */
    virtual void setTickingAreaInfluence(unsigned int, class ChunkPos const&, int, int, bool, bool); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?updateInfluences\@ChunkBuildOrderPolicy\@\@UEAAXXZ
     */
    virtual void updateInfluences(); // NOLINT
    /**
     * @symbol ??0ChunkBuildOrderPolicy\@\@QEAA\@XZ
     */
    MCAPI ChunkBuildOrderPolicy(); // NOLINT
};
