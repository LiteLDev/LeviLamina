/**
 * @file  MC/ShareItemsGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShareItemsGoal.
 *
 */
class ShareItemsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREITEMSGOAL
public:
    class ShareItemsGoal& operator=(class ShareItemsGoal const &) = delete;
    ShareItemsGoal(class ShareItemsGoal const &) = delete;
    ShareItemsGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ShareItemsGoal();
    /**
     * @hash   -133432900
     * @vftbl  1
     * @symbol ?canUse@ShareItemsGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -75822694
     * @vftbl  2
     * @symbol ?canContinueToUse@ShareItemsGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1235037189
     * @vftbl  4
     * @symbol ?start@ShareItemsGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1804713851
     * @vftbl  5
     * @symbol ?stop@ShareItemsGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -2010472224
     * @vftbl  6
     * @symbol ?tick@ShareItemsGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1737123372
     * @vftbl  7
     * @symbol ?appendDebugInfo@ShareItemsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1979949497
     * @symbol ??0ShareItemsGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@MHM@Z
     */
    MCAPI ShareItemsGoal(class Mob &, std::vector<struct MobDescriptor> const &, float, int, float);

//protected:
    /**
     * @hash   1765189542
     * @symbol ?selectEntityToShareWith@ShareItemsGoal@@IEAA?AU?$pair@HVItemStack@@@std@@AEBV?$vector@U?$pair@HVItemStack@@@std@@V?$allocator@U?$pair@HVItemStack@@@std@@@2@@3@@Z
     */
    MCAPI struct std::pair<int, class ItemStack> selectEntityToShareWith(std::vector<struct std::pair<int, class ItemStack>> const &);

protected:

};