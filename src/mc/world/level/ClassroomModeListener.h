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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLASSROOMMODELISTENER
    /**
     * @symbol ?onAreaChanged\@ClassroomModeListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCVAPI void onAreaChanged(class BlockSource&, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?onBlockChanged\@ClassroomModeListener\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@IAEBVBlock\@\@2HPEBUActorBlockSyncMessage\@\@W4BlockChangedEventTarget\@\@PEAVActor\@\@\@Z
     */
    MCVAPI void
    onBlockChanged(class BlockSource&, class BlockPos const&, unsigned int, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, enum class BlockChangedEventTarget, class Actor*); // NOLINT
    /**
     * @symbol ?onChunkLoaded\@ClassroomModeListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&); // NOLINT
    /**
     * @symbol ?onChunkUnloaded\@ClassroomModeListener\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk&); // NOLINT
    /**
     * @symbol ?onEntityAdded\@ClassroomModeListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityAdded(class Actor&); // NOLINT
    /**
     * @symbol ?onEntityRemoved\@ClassroomModeListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityRemoved(class Actor&); // NOLINT
#endif
    /**
     * @symbol ??0ClassroomModeListener\@\@QEAA\@AEAVIMinecraftEventing\@\@\@Z
     */
    MCAPI ClassroomModeListener(class IMinecraftEventing&); // NOLINT
};
