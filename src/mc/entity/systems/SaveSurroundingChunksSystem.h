#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class SaveSurroundingChunksSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    SaveSurroundingChunksSystem& operator=(SaveSurroundingChunksSystem const&);
    SaveSurroundingChunksSystem(SaveSurroundingChunksSystem const&);
    SaveSurroundingChunksSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SaveSurroundingChunksSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@SaveSurroundingChunksSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickSaveSurroundingChunks@SaveSurroundingChunksSystem@@CAXAEAVActorOwnerComponent@@@Z
    MCAPI static void _tickSaveSurroundingChunks(class ActorOwnerComponent&);

    // NOLINTEND
};
