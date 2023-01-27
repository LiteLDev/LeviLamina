/**
 * @file  ChunkBuildOrderPolicy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkBuildOrderPolicy.
 *
 */
class ChunkBuildOrderPolicy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBUILDORDERPOLICY
public:
    class ChunkBuildOrderPolicy& operator=(class ChunkBuildOrderPolicy const &) = delete;
    ChunkBuildOrderPolicy(class ChunkBuildOrderPolicy const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ChunkBuildOrderPolicy();
    /**
     * @hash   -368702156
     * @vftbl  1
     * @symbol  ?getChunkRebuildPriority\@ChunkBuildOrderPolicy\@\@UEBAHAEBVChunkPos\@\@\@Z
     */
    virtual int getChunkRebuildPriority(class ChunkPos const &) const;
    /**
     * @hash   -509789876
     * @vftbl  2
     * @symbol  ?registerForUpdates\@ChunkBuildOrderPolicy\@\@UEAAIXZ
     */
    virtual unsigned int registerForUpdates();
    /**
     * @hash   -696695579
     * @vftbl  3
     * @symbol  ?unregisterForUpdates\@ChunkBuildOrderPolicy\@\@UEAAXI\@Z
     */
    virtual void unregisterForUpdates(unsigned int);
    /**
     * @hash   175918632
     * @vftbl  4
     * @symbol  ?setPlayerInfluence\@ChunkBuildOrderPolicy\@\@UEAAXIAEBVChunkPos\@\@AEBVVec3\@\@\@Z
     */
    virtual void setPlayerInfluence(unsigned int, class ChunkPos const &, class Vec3 const &);
    /**
     * @hash   523421861
     * @vftbl  5
     * @symbol  ?setTickingAreaInfluence\@ChunkBuildOrderPolicy\@\@UEAAXIAEBVChunkPos\@\@HH_N1\@Z
     */
    virtual void setTickingAreaInfluence(unsigned int, class ChunkPos const &, int, int, bool, bool);
    /**
     * @hash   599801791
     * @vftbl  6
     * @symbol  ?updateInfluences\@ChunkBuildOrderPolicy\@\@UEAAXXZ
     */
    virtual void updateInfluences();
    /**
     * @hash   -80776421
     * @symbol  ??0ChunkBuildOrderPolicy\@\@QEAA\@XZ
     */
    MCAPI ChunkBuildOrderPolicy();

};