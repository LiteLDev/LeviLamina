/**
 * @file  NpcSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcSystem.
 *
 */
class NpcSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCSYSTEM
public:
    class NpcSystem& operator=(class NpcSystem const &) = delete;
    NpcSystem(class NpcSystem const &) = delete;
    NpcSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NpcSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@NpcSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol  ?tickCountdown\@NpcSystem\@\@SAXAEAVEntityContext\@\@AEAULeaveMenuCountdown\@NpcComponents\@\@\@Z
     */
    MCAPI static void tickCountdown(class EntityContext &, struct NpcComponents::LeaveMenuCountdown &);

};