/**
 * @file  MakeLoveGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MakeLoveGoal.
 *
 */
class MakeLoveGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAKELOVEGOAL
public:
    class MakeLoveGoal& operator=(class MakeLoveGoal const &) = delete;
    MakeLoveGoal(class MakeLoveGoal const &) = delete;
    MakeLoveGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MakeLoveGoal();
    /**
     * @hash   1592377869
     * @vftbl  1
     * @symbol ?canUse@MakeLoveGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1653563371
     * @vftbl  2
     * @symbol ?canContinueToUse@MakeLoveGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1978342458
     * @vftbl  4
     * @symbol ?start@MakeLoveGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1873220810
     * @vftbl  5
     * @symbol ?stop@MakeLoveGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1258225887
     * @vftbl  6
     * @symbol ?tick@MakeLoveGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1409511325
     * @vftbl  7
     * @symbol ?appendDebugInfo@MakeLoveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -321604840
     * @symbol ??0MakeLoveGoal@@QEAA@AEAVVillagerBase@@@Z
     */
    MCAPI MakeLoveGoal(class VillagerBase &);

//private:
    /**
     * @hash   797859180
     * @symbol ?_findMate@MakeLoveGoal@@AEBAPEAVVillagerBase@@XZ
     */
    MCAPI class VillagerBase * _findMate() const;

private:

};