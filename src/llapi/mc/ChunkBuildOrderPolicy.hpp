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
     * @vftbl  1
     * @symbol  ?getChunkRebuildPriority\@ChunkBuildOrderPolicy\@\@UEBAHAEBVChunkPos\@\@\@Z
     */
    virtual int getChunkRebuildPriority(class ChunkPos const &) const;
    /**
     * @vftbl  2
     * @symbol  ?registerForUpdates\@ChunkBuildOrderPolicy\@\@UEAAIXZ
     */
    virtual unsigned int registerForUpdates();
    /**
     * @vftbl  3
     * @symbol  ?unregisterForUpdates\@ChunkBuildOrderPolicy\@\@UEAAXI\@Z
     */
    virtual void unregisterForUpdates(unsigned int);
    /**
     * @vftbl  4
     * @symbol  ?setPlayerInfluence\@ChunkBuildOrderPolicy\@\@UEAAXIAEBVChunkPos\@\@AEBVVec3\@\@\@Z
     */
    virtual void setPlayerInfluence(unsigned int, class ChunkPos const &, class Vec3 const &);
    /**
     * @vftbl  5
     * @symbol  ?setTickingAreaInfluence\@ChunkBuildOrderPolicy\@\@UEAAXIAEBVChunkPos\@\@HH_N1\@Z
     */
    virtual void setTickingAreaInfluence(unsigned int, class ChunkPos const &, int, int, bool, bool);
    /**
     * @vftbl  6
     * @symbol  ?updateInfluences\@ChunkBuildOrderPolicy\@\@UEAAXXZ
     */
    virtual void updateInfluences();
    /**
     * @symbol  ??0ChunkBuildOrderPolicy\@\@QEAA\@XZ
     */
    MCAPI ChunkBuildOrderPolicy();

};