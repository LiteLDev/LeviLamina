/**
 * @file  HoverGoal.hpp
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
 * @brief MC class HoverGoal.
 *
 */
class HoverGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOVERGOAL
public:
    class HoverGoal& operator=(class HoverGoal const &) = delete;
    HoverGoal(class HoverGoal const &) = delete;
    HoverGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1543647043
     */
    virtual ~HoverGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@HoverGoal@@UEAA_NXZ
     * @hash   -1084318095
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @hash   -1265373198
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   736752099
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@HoverGoal@@UEAAXXZ
     * @hash   948164986
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@HoverGoal@@UEAAXXZ
     * @hash   1167531546
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@HoverGoal@@UEAAXXZ
     * @hash   1967084117
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@HoverGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1520270111
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0HoverGoal@@QEAA@AEAVMob@@M@Z
     * @hash   -1138212653
     */
    MCAPI HoverGoal(class Mob &, float);

};