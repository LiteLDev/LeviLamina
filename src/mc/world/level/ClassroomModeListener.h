#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSourceListener.h"

class ClassroomModeListener : public ::BlockSourceListener {

public:
    // prevent constructor by default
    ClassroomModeListener& operator=(ClassroomModeListener const&) = delete;
    ClassroomModeListener(ClassroomModeListener const&)            = delete;
    ClassroomModeListener()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLASSROOMMODELISTENER
    /**
     * @symbol ?onAreaChanged\@ClassroomModeListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCVAPI void onAreaChanged(class BlockSource&, class BlockPos const&, class BlockPos const&);
    /**
     * @symbol
     * ?onBlockChanged\@ClassroomModeListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@IAEBVBlock\@\@2HPEBUActorBlockSyncMessage\@\@W4BlockChangedEventTarget\@\@PEAVActor\@\@\@Z
     */
    MCVAPI void
    onBlockChanged(class BlockSource&, class BlockPos const&, unsigned int, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, enum class BlockChangedEventTarget, class Actor*);
    /**
     * @symbol ?onChunkLoaded\@ClassroomModeListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&);
    /**
     * @symbol ?onChunkUnloaded\@ClassroomModeListener\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk&);
    /**
     * @symbol ?onEntityAdded\@ClassroomModeListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityAdded(class Actor&);
    /**
     * @symbol ?onEntityRemoved\@ClassroomModeListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityRemoved(class Actor&);
#endif
    /**
     * @symbol ??0ClassroomModeListener\@\@QEAA\@AEAVIMinecraftEventing\@\@\@Z
     */
    MCAPI ClassroomModeListener(class IMinecraftEventing&);
    // NOLINTEND
};
