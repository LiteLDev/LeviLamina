#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelEvent.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

class ClassroomModeListener : public ::LevelListener {
public:
    // prevent constructor by default
    ClassroomModeListener& operator=(ClassroomModeListener const&) = delete;
    ClassroomModeListener(ClassroomModeListener const&)            = delete;
    ClassroomModeListener()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 19, symbol: ?onChunkLoaded@ClassroomModeListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void onChunkLoaded(class ChunkSource&, class LevelChunk&);

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 22, symbol: ?onChunkUnloaded@ClassroomModeListener@@UEAAXAEAVLevelChunk@@@Z
    virtual void onChunkUnloaded(class LevelChunk&);

    // vIndex: 24, symbol: __unk_vfn_24
    virtual void __unk_vfn_24();

    // symbol: ?onAreaChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCVAPI void onAreaChanged(class BlockSource&, class BlockPos const&, class BlockPos const&);

    // symbol:
    // ?onBlockChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
    MCVAPI void
    onBlockChanged(class BlockSource&, class BlockPos const&, uint, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, ::BlockChangedEventTarget, class Actor*);

    // symbol: ?onEntityAdded@ClassroomModeListener@@UEAAXAEAVActor@@@Z
    MCVAPI void onEntityAdded(class Actor&);

    // symbol: ?onEntityRemoved@ClassroomModeListener@@UEAAXAEAVActor@@@Z
    MCVAPI void onEntityRemoved(class Actor&);

    // symbol: ??0ClassroomModeListener@@QEAA@AEAVIMinecraftEventing@@@Z
    MCAPI ClassroomModeListener(class IMinecraftEventing&);

    // NOLINTEND
};
