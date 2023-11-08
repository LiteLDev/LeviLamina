#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

class ClassroomModeListener {
public:
    // prevent constructor by default
    ClassroomModeListener& operator=(ClassroomModeListener const&);
    ClassroomModeListener(ClassroomModeListener const&);
    ClassroomModeListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClassroomModeListener@@UEAA@XZ
    virtual ~ClassroomModeListener() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?onBrightnessChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onBrightnessChanged(class BlockSource&, class BlockPos const&);

    // symbol: ?onAreaChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCVAPI void onAreaChanged(class BlockSource&, class BlockPos const&, class BlockPos const&);

    // symbol:
    // ?onBlockChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
    MCVAPI void
    onBlockChanged(class BlockSource&, class BlockPos const&, uint, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, ::BlockChangedEventTarget, class Actor*);

    // symbol: ?onChunkLoaded@ClassroomModeListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCVAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&);

    // symbol: ?onChunkUnloaded@ClassroomModeListener@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void onChunkUnloaded(class LevelChunk&);

    // symbol: ?onEntityAdded@ClassroomModeListener@@UEAAXAEAVActor@@@Z
    MCVAPI void onEntityAdded(class Actor&);

    // symbol: ?onEntityRemoved@ClassroomModeListener@@UEAAXAEAVActor@@@Z
    MCVAPI void onEntityRemoved(class Actor&);

    // symbol: ??0ClassroomModeListener@@QEAA@AEAVIMinecraftEventing@@@Z
    MCAPI explicit ClassroomModeListener(class IMinecraftEventing&);

    // NOLINTEND
};
