/**
 * @file  BurnsInDaylightSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BurnsInDaylightSystem.
 *
 */
class BurnsInDaylightSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURNSINDAYLIGHTSYSTEM
public:
    class BurnsInDaylightSystem& operator=(class BurnsInDaylightSystem const &) = delete;
    BurnsInDaylightSystem(class BurnsInDaylightSystem const &) = delete;
    BurnsInDaylightSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BurnsInDaylightSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@BurnsInDaylightSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};