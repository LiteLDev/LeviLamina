#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SaveSurroundingChunksSystem {

public:
    // prevent constructor by default
    SaveSurroundingChunksSystem& operator=(SaveSurroundingChunksSystem const&) = delete;
    SaveSurroundingChunksSystem(SaveSurroundingChunksSystem const&)            = delete;
    SaveSurroundingChunksSystem()                                              = delete;

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
     * @vftbl 2
     * @symbol ?tick\@SaveSurroundingChunksSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_tickSaveSurroundingChunks\@SaveSurroundingChunksSystem\@\@CAXAEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tickSaveSurroundingChunks(class ActorOwnerComponent&); // NOLINT

private:
};
