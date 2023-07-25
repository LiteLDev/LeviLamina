#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SaveSurroundingChunksSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVESURROUNDINGCHUNKSSYSTEM
public:
    SaveSurroundingChunksSystem& operator=(SaveSurroundingChunksSystem const&) = delete;
    SaveSurroundingChunksSystem(SaveSurroundingChunksSystem const&)            = delete;
    SaveSurroundingChunksSystem()                                              = delete;
#endif

public:
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

    // private:
    /**
     * @symbol ?_tickSaveSurroundingChunks\@SaveSurroundingChunksSystem\@\@CAXAEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tickSaveSurroundingChunks(class ActorOwnerComponent&);

private:
};
