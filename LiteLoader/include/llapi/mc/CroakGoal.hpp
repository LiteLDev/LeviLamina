/**
 * @file  CroakGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CroakGoal.
 *
 */
class CroakGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CROAKGOAL
public:
    class CroakGoal& operator=(class CroakGoal const &) = delete;
    CroakGoal(class CroakGoal const &) = delete;
    CroakGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CroakGoal();
    /**
     * @hash   417614243
     * @vftbl  1
     * @symbol ?canUse@CroakGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   189441233
     * @vftbl  2
     * @symbol ?canContinueToUse@CroakGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -662262932
     * @vftbl  4
     * @symbol ?start@CroakGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1682666492
     * @vftbl  5
     * @symbol ?stop@CroakGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -1244494403
     * @vftbl  7
     * @symbol ?appendDebugInfo@CroakGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -233414912
     * @symbol ??0CroakGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI CroakGoal(class Mob &);

};