/**
 * @file  LayEggGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LayEggGoal.
 *
 */
class LayEggGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAYEGGGOAL
public:
    class LayEggGoal& operator=(class LayEggGoal const &) = delete;
    LayEggGoal(class LayEggGoal const &) = delete;
    LayEggGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1648540222
     */
    virtual ~LayEggGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@LayEggGoal@@UEAA_NXZ
     * @hash   1338156604
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@LayEggGoal@@UEAA_NXZ
     * @hash   1811011098
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@LayEggGoal@@UEAAXXZ
     * @hash   -925063723
     */
    virtual void start();
    /**
     * @vftbl  6
     * @symbol ?tick@LayEggGoal@@UEAAXXZ
     * @hash   -1130520368
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@LayEggGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -449213548
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol ?isValidTarget@LayEggGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1954777710
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  14
     * @symbol ?_moveToBlock@LayEggGoal@@MEAAXXZ
     * @hash   -907758914
     */
    virtual void _moveToBlock();
    /**
     * @vftbl  17
     * @symbol ?findTargetBlock@LayEggGoal@@UEAA_NXZ
     * @hash   -937132760
     */
    virtual bool findTargetBlock();
    /**
     * @symbol ??0LayEggGoal@@QEAA@AEAVMob@@MHHMAEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@AEBV?$vector@W4MaterialType@@V?$allocator@W4MaterialType@@@std@@@3@_N3MAEBVItemDescriptor@@AEBVActorDefinitionTrigger@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   -2026273713
     */
    MCAPI LayEggGoal(class Mob &, float, int, int, float, std::vector<class ItemDescriptor> const &, std::vector<enum MaterialType> const &, bool, bool, float, class ItemDescriptor const &, class ActorDefinitionTrigger const &, std::string const &);

//protected:
    /**
     * @symbol ?_isTargetBlock@LayEggGoal@@IEBA_NAEBVBlockLegacy@@@Z
     * @hash   -355907754
     */
    MCAPI bool _isTargetBlock(class BlockLegacy const &) const;
    /**
     * @symbol ?_layEgg@LayEggGoal@@IEAAXAEBVBlockPos@@@Z
     * @hash   1245626179
     */
    MCAPI void _layEgg(class BlockPos const &);

protected:

};