/**
 * @file  CombatRegenerationSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CombatRegenerationSystem.
 *
 */
class CombatRegenerationSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMBATREGENERATIONSYSTEM
public:
    class CombatRegenerationSystem& operator=(class CombatRegenerationSystem const &) = delete;
    CombatRegenerationSystem(class CombatRegenerationSystem const &) = delete;
    CombatRegenerationSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1754268168
     */
    virtual ~CombatRegenerationSystem();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@CombatRegenerationSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -464837810
     */
    virtual void tick(class EntityRegistry &);

};