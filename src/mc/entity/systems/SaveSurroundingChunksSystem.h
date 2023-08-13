#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class SaveSurroundingChunksSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    SaveSurroundingChunksSystem& operator=(SaveSurroundingChunksSystem const&) = delete;
    SaveSurroundingChunksSystem(SaveSurroundingChunksSystem const&)            = delete;
    SaveSurroundingChunksSystem()                                              = delete;

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
     * @vftbl 2
     * @symbol ?tick\@SaveSurroundingChunksSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tickSaveSurroundingChunks\@SaveSurroundingChunksSystem\@\@CAXAEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tickSaveSurroundingChunks(class ActorOwnerComponent&);
    // NOLINTEND
};
