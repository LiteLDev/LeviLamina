/**
 * @file  WorkComposterGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "WorkGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WorkComposterGoal.
 *
 */
class WorkComposterGoal : public WorkGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKCOMPOSTERGOAL
public:
    class WorkComposterGoal& operator=(class WorkComposterGoal const &) = delete;
    WorkComposterGoal(class WorkComposterGoal const &) = delete;
    WorkComposterGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1841482366
     */
    virtual ~WorkComposterGoal();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@WorkComposterGoal@@UEAAXXZ
     * @hash   992311881
     */
    virtual void start();
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
     * @vftbl  18
     * @symbol ?useWorkstation@WorkComposterGoal@@UEAAXXZ
     * @hash   -1876194541
     */
    virtual void useWorkstation();
    /**
     * @symbol ??0WorkComposterGoal@@QEAA@AEAVMob@@@Z
     * @hash   -490556579
     */
    MCAPI WorkComposterGoal(class Mob &);

//private:
    /**
     * @symbol ?_tryCompostItems@WorkComposterGoal@@AEAA_NXZ
     * @hash   406215393
     */
    MCAPI bool _tryCompostItems();
    /**
     * @symbol ?_tryEmptyComposter@WorkComposterGoal@@AEAA_NXZ
     * @hash   608226179
     */
    MCAPI bool _tryEmptyComposter();

private:

};