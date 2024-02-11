#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ParticleType.h"
#include "mc/events/LevelEvent.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class ClassroomModeListener : public ::LevelListener {
public:
    // prevent constructor by default
    ClassroomModeListener& operator=(ClassroomModeListener const&);
    ClassroomModeListener(ClassroomModeListener const&);
    ClassroomModeListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClassroomModeListener@@UEAA@XZ
    virtual ~ClassroomModeListener() = default;

    // vIndex: 3, symbol: ?onAreaChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void onAreaChanged(class BlockSource& source, class BlockPos const& min, class BlockPos const& max);

    // vIndex: 4, symbol:
    // ?onBlockChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
    virtual void
    onBlockChanged(class BlockSource& source, class BlockPos const& pos, uint layer, class Block const& block, class Block const& oldBlock, int updateFlags, struct ActorBlockSyncMessage const* syncMsg, ::BlockChangedEventTarget, class Actor*);

    // vIndex: 17, symbol: ?onEntityAdded@ClassroomModeListener@@UEAAXAEAVActor@@@Z
    virtual void onEntityAdded(class Actor& entity);

    // vIndex: 18, symbol: ?onEntityRemoved@ClassroomModeListener@@UEAAXAEAVActor@@@Z
    virtual void onEntityRemoved(class Actor& entity);

    // vIndex: 19, symbol: ?onChunkLoaded@ClassroomModeListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // vIndex: 22, symbol: ?onChunkUnloaded@ClassroomModeListener@@UEAAXAEAVLevelChunk@@@Z
    virtual void onChunkUnloaded(class LevelChunk& lc);

    // symbol: ??0ClassroomModeListener@@QEAA@AEAVIMinecraftEventing@@@Z
    MCAPI explicit ClassroomModeListener(class IMinecraftEventing& eventing);

    // NOLINTEND
};
