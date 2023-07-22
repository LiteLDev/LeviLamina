/**
 * @file  ClassroomModeListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ClassroomModeListener();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLASSROOMMODELISTENER
    /**
     * @symbol  ?onAreaChanged\@ClassroomModeListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCVAPI void onAreaChanged(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol  ?onBlockChanged\@ClassroomModeListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@IAEBVBlock\@\@2HPEBUActorBlockSyncMessage\@\@W4BlockChangedEventTarget\@\@PEAVActor\@\@\@Z
     */
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, enum class BlockChangedEventTarget, class Actor *);
    /**
     * @symbol  ?onChunkLoaded\@ClassroomModeListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @symbol  ?onChunkUnloaded\@ClassroomModeListener\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    /**
     * @symbol  ?onEntityAdded\@ClassroomModeListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityAdded(class Actor &);
    /**
     * @symbol  ?onEntityRemoved\@ClassroomModeListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityRemoved(class Actor &);
#endif
    /**
     * @symbol  ??0ClassroomModeListener\@\@QEAA\@AEAVIMinecraftEventing\@\@\@Z
     */
    MCAPI ClassroomModeListener(class IMinecraftEventing &);

};