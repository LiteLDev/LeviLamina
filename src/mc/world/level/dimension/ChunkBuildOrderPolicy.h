#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/ChunkBuildOrderPolicyBase.h"

class ChunkBuildOrderPolicy : public ::ChunkBuildOrderPolicyBase {

public:
    // prevent constructor by default
    ChunkBuildOrderPolicy& operator=(ChunkBuildOrderPolicy const&) = delete;
    ChunkBuildOrderPolicy(ChunkBuildOrderPolicy const&)            = delete;

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
    virtual int getChunkRebuildPriority(class ChunkPos const&) const;
    /**
     * @vftbl 2
     * @symbol ?registerForUpdates\@ChunkBuildOrderPolicy\@\@UEAAIXZ
     */
    virtual unsigned int registerForUpdates();
    /**
     * @vftbl 3
     * @symbol ?unregisterForUpdates\@ChunkBuildOrderPolicy\@\@UEAAXI\@Z
     */
    virtual void unregisterForUpdates(unsigned int);
    /**
     * @vftbl 4
     * @symbol ?setPlayerInfluence\@ChunkBuildOrderPolicy\@\@UEAAXIAEBVChunkPos\@\@AEBVVec3\@\@\@Z
     */
    virtual void setPlayerInfluence(unsigned int, class ChunkPos const&, class Vec3 const&);
    /**
     * @vftbl 5
     * @symbol ?setTickingAreaInfluence\@ChunkBuildOrderPolicy\@\@UEAAXIAEBVChunkPos\@\@HH_N1\@Z
     */
    virtual void setTickingAreaInfluence(unsigned int, class ChunkPos const&, int, int, bool, bool);
    /**
     * @vftbl 6
     * @symbol ?updateInfluences\@ChunkBuildOrderPolicy\@\@UEAAXXZ
     */
    virtual void updateInfluences();
    /**
     * @symbol ??0ChunkBuildOrderPolicy\@\@QEAA\@XZ
     */
    MCAPI ChunkBuildOrderPolicy();
    // NOLINTEND
};
