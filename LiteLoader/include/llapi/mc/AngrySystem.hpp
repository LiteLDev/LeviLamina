/**
 * @file  AngrySystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AngrySystem.
 *
 */
class AngrySystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGRYSYSTEM
public:
    class AngrySystem& operator=(class AngrySystem const &) = delete;
    AngrySystem(class AngrySystem const &) = delete;
    AngrySystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AngrySystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@AngrySystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickComponent\@AngrySystem\@\@CAXAEAVEntityContext\@\@AEAVAngryComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class EntityContext &, class AngryComponent &);

private:

};