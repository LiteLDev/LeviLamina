/**
 * @file  WorkComposterGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@WorkComposterGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 18
     * @symbol ?useWorkstation\@WorkComposterGoal\@\@UEAAXXZ
     */
    virtual void useWorkstation();

//private:
    /**
     * @symbol ?_tryCompostItems\@WorkComposterGoal\@\@AEAA_NXZ
     */
    MCAPI bool _tryCompostItems();
    /**
     * @symbol ?_tryEmptyComposter\@WorkComposterGoal\@\@AEAA_NXZ
     */
    MCAPI bool _tryEmptyComposter();

private:

};
