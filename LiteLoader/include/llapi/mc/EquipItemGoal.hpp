/**
 * @file  MC/EquipItemGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EquipItemGoal.
 *
 */
class EquipItemGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPITEMGOAL
public:
    class EquipItemGoal& operator=(class EquipItemGoal const &) = delete;
    EquipItemGoal(class EquipItemGoal const &) = delete;
    EquipItemGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EquipItemGoal();
    /**
     * @hash   2063385082
     * @vftbl  1
     * @symbol ?canUse@EquipItemGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1802772280
     * @vftbl  2
     * @symbol ?canContinueToUse@EquipItemGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -471110802
     * @vftbl  6
     * @symbol ?tick@EquipItemGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -335039066
     * @vftbl  7
     * @symbol ?appendDebugInfo@EquipItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -632462697
     * @symbol ??0EquipItemGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI EquipItemGoal(class Mob &);

//private:
    /**
     * @hash   734412508
     * @symbol ?_dropItem@EquipItemGoal@@AEBAXAEBVItemStack@@@Z
     */
    MCAPI void _dropItem(class ItemStack const &) const;

private:

};