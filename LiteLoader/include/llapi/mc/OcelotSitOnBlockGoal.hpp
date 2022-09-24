/**
 * @file  OcelotSitOnBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OcelotSitOnBlockGoal.
 *
 */
class OcelotSitOnBlockGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCELOTSITONBLOCKGOAL
public:
    class OcelotSitOnBlockGoal& operator=(class OcelotSitOnBlockGoal const &) = delete;
    OcelotSitOnBlockGoal(class OcelotSitOnBlockGoal const &) = delete;
    OcelotSitOnBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OcelotSitOnBlockGoal();
    /**
     * @hash   -2136063075
     * @vftbl  1
     * @symbol ?canUse@OcelotSitOnBlockGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   476284134
     * @vftbl  4
     * @symbol ?start@OcelotSitOnBlockGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -994849706
     * @vftbl  5
     * @symbol ?stop@OcelotSitOnBlockGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   325654497
     * @vftbl  6
     * @symbol ?tick@OcelotSitOnBlockGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1193155021
     * @vftbl  7
     * @symbol ?appendDebugInfo@OcelotSitOnBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   309104735
     * @vftbl  11
     * @symbol ?isValidTarget@OcelotSitOnBlockGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   421618498
     * @vftbl  13
     * @symbol ?_canReach@OcelotSitOnBlockGoal@@UEAA_NAEBVBlockPos@@@Z
     */
    virtual bool _canReach(class BlockPos const &);
    /**
     * @hash   507585623
     * @symbol ??0OcelotSitOnBlockGoal@@QEAA@AEAVMob@@M@Z
     */
    MCAPI OcelotSitOnBlockGoal(class Mob &, float);

};