#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/WorkGoal.h"

class WorkComposterGoal : public ::WorkGoal {

public:
    // prevent constructor by default
    WorkComposterGoal& operator=(WorkComposterGoal const&) = delete;
    WorkComposterGoal(WorkComposterGoal const&)            = delete;
    WorkComposterGoal()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?start\@WorkComposterGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 18
     * @symbol ?useWorkstation\@WorkComposterGoal\@\@UEAAXXZ
     */
    virtual void useWorkstation();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_tryCompostItems\@WorkComposterGoal\@\@AEAA_NXZ
     */
    MCAPI bool _tryCompostItems();
    /**
     * @symbol ?_tryEmptyComposter\@WorkComposterGoal\@\@AEAA_NXZ
     */
    MCAPI bool _tryEmptyComposter();
    // NOLINTEND
};
