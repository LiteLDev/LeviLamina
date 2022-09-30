/**
 * @file  ClassroomModeListener.hpp
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
 * @brief MC class ClassroomModeListener.
 *
 */
class ClassroomModeListener : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLASSROOMMODELISTENER
public:
    class ClassroomModeListener& operator=(class ClassroomModeListener const &) = delete;
    ClassroomModeListener(class ClassroomModeListener const &) = delete;
    ClassroomModeListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ClassroomModeListener();
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
     * @hash   -1826822915
     * @vftbl  11
     * @symbol ?addParticle@LevelListener@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
     */
    virtual class Particle * addParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLASSROOMMODELISTENER
    /**
     * @hash   -146685737
     * @symbol ?onAreaChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    MCVAPI void onAreaChanged(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   625755827
     * @symbol ?onBlockChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
     */
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, enum class BlockChangedEventTarget, class Actor *);
    /**
     * @hash   1669327175
     * @symbol ?onChunkLoaded@ClassroomModeListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   1972315522
     * @symbol ?onChunkUnloaded@ClassroomModeListener@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    /**
     * @hash   -1235781316
     * @symbol ?onEntityAdded@ClassroomModeListener@@UEAAXAEAVActor@@@Z
     */
    MCVAPI void onEntityAdded(class Actor &);
    /**
     * @hash   472467804
     * @symbol ?onEntityRemoved@ClassroomModeListener@@UEAAXAEAVActor@@@Z
     */
    MCVAPI void onEntityRemoved(class Actor &);
#endif
    /**
     * @hash   412844165
     * @symbol ??0ClassroomModeListener@@QEAA@AEAVIMinecraftEventing@@@Z
     */
    MCAPI ClassroomModeListener(class IMinecraftEventing &);

};