/**
 * @file  SaveSurroundingChunksSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SaveSurroundingChunksSystem.
 *
 */
class SaveSurroundingChunksSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVESURROUNDINGCHUNKSSYSTEM
public:
    class SaveSurroundingChunksSystem& operator=(class SaveSurroundingChunksSystem const &) = delete;
    SaveSurroundingChunksSystem(class SaveSurroundingChunksSystem const &) = delete;
    SaveSurroundingChunksSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SaveSurroundingChunksSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@SaveSurroundingChunksSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickSaveSurroundingChunks\@SaveSurroundingChunksSystem\@\@CAXAEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tickSaveSurroundingChunks(class ActorOwnerComponent &);

private:

};