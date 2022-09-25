/**
 * @file  ActorUpdatePreviousPositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorUpdatePreviousPositionSystem.
 *
 */
class ActorUpdatePreviousPositionSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATEPREVIOUSPOSITIONSYSTEM
public:
    class ActorUpdatePreviousPositionSystem& operator=(class ActorUpdatePreviousPositionSystem const &) = delete;
    ActorUpdatePreviousPositionSystem(class ActorUpdatePreviousPositionSystem const &) = delete;
    ActorUpdatePreviousPositionSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorUpdatePreviousPositionSystem();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   1679205133
     * @vftbl  2
     * @symbol ?tick@ActorUpdatePreviousPositionSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);

};