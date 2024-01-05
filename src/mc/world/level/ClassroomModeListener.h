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
    virtual void onBrightnessChanged(class BlockSource& source, class BlockPos const& pos);

    // symbol: ?onAreaChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCVAPI void onAreaChanged(class BlockSource& source, class BlockPos const& min, class BlockPos const& max);

    // symbol:
    // ?onBlockChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
    MCVAPI void onBlockChanged(
        class BlockSource&                  source,
        class BlockPos const&               pos,
        uint                                layer,
        class Block const&                  block,
        class Block const&                  oldBlock,
        int                                 updateFlags,
        struct ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget           eventTarget,
        class Actor*                        blockChangeSource
    );

    // symbol: ?onChunkLoaded@ClassroomModeListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCVAPI void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // symbol: ?onChunkUnloaded@ClassroomModeListener@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void onChunkUnloaded(class LevelChunk& lc);

    // symbol: ?onEntityAdded@ClassroomModeListener@@UEAAXAEAVActor@@@Z
    MCVAPI void onEntityAdded(class Actor& entity);

    // symbol: ?onEntityRemoved@ClassroomModeListener@@UEAAXAEAVActor@@@Z
    MCVAPI void onEntityRemoved(class Actor& entity);

    // symbol: ??0ClassroomModeListener@@QEAA@AEAVIMinecraftEventing@@@Z
    MCAPI explicit ClassroomModeListener(class IMinecraftEventing& eventing);

    // NOLINTEND
};
