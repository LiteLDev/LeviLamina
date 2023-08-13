#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelListener.h"

class ClassroomModeListener : public ::LevelListener {

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
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 19
     * @symbol ?onChunkLoaded\@ClassroomModeListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    virtual void onChunkLoaded(class ChunkSource&, class LevelChunk&);
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl 22
     * @symbol ?onChunkUnloaded\@ClassroomModeListener\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    virtual void onChunkUnloaded(class LevelChunk&);
    /**
     * @vftbl 24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24();
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
