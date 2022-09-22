/**
 * @file  BlockActorLevelListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockActorLevelListener.
 *
 */
class BlockActorLevelListener : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTORLEVELLISTENER
public:
    class BlockActorLevelListener& operator=(class BlockActorLevelListener const &) = delete;
    BlockActorLevelListener(class BlockActorLevelListener const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockActorLevelListener();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @hash   -2016134441
     * @vftbl  11
     * @symbol ?addParticle@LevelListener@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
     */
    virtual class Particle * addParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @hash   1204495377
     * @vftbl  22
     * @symbol ?onChunkLoaded@BlockActorLevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    virtual void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @vftbl  23
     * @symbol __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @hash   1724847672
     * @vftbl  25
     * @symbol ?onChunkUnloaded@BlockActorLevelListener@@UEAAXAEAVLevelChunk@@@Z
     */
    virtual void onChunkUnloaded(class LevelChunk &);
    /**
     * @hash   -972242084
     * @symbol ??0BlockActorLevelListener@@QEAA@XZ
     */
    MCAPI BlockActorLevelListener();

};