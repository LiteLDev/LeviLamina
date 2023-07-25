#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkTickingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKTICKINGSYSTEM
public:
    LevelChunkTickingSystem& operator=(LevelChunkTickingSystem const&) = delete;
    LevelChunkTickingSystem(LevelChunkTickingSystem const&)            = delete;
    LevelChunkTickingSystem()                                          = delete;
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
     * @symbol ?tick\@LevelChunkTickingSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol
     * ?_determineLevelChunksToTick\@LevelChunkTickingSystem\@\@CAXAEBVActor\@\@AEAVBlockSource\@\@AEAVLoadedChunksComponent\@\@AEAV?$vector\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@2\@\@std\@\@3AEBUTick\@\@\@Z
     */
    MCAPI static void
    _determineLevelChunksToTick(class Actor const&, class BlockSource&, class LoadedChunksComponent&, std::vector<class std::shared_ptr<class LevelChunk>>&, std::vector<class std::shared_ptr<class LevelChunk>>&, struct Tick const&);
    /**
     * @symbol
     * ?_tickLevelChunksAroundActor\@LevelChunkTickingSystem\@\@CAXAEAVActor\@\@AEAVBlockSource\@\@AEAVLoadedChunksComponent\@\@\@Z
     */
    MCAPI static void _tickLevelChunksAroundActor(class Actor&, class BlockSource&, class LoadedChunksComponent&);
    /**
     * @symbol
     * ?_tickLevelChunksAroundActorView\@LevelChunkTickingSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVLoadedChunksComponent\@\@\@Z
     */
    MCAPI static void _tickLevelChunksAroundActorView(class ActorOwnerComponent&, class LoadedChunksComponent&);

private:
};
