#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"

class DoorInteractGoal {

public:
    // prevent constructor by default
    DoorInteractGoal& operator=(DoorInteractGoal const&) = delete;
    DoorInteractGoal(DoorInteractGoal const&)            = delete;
    DoorInteractGoal()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@DoorInteractGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DoorInteractGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@DoorInteractGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@DoorInteractGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DoorInteractGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOORINTERACTGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DoorInteractGoal(); // NOLINT
#endif
    /**
     * @symbol ??0DoorInteractGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DoorInteractGoal(class Mob&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_findBlockingDoorAtPos\@DoorInteractGoal\@\@CAPEBVDoorBlock\@\@AEBVBlockPos\@\@AEBVMob\@\@PEAVPath\@\@AEAW4Type\@Direction\@\@3\@Z
     */
    MCAPI static class DoorBlock const*
    _findBlockingDoorAtPos(class BlockPos const&, class Mob const&, class Path*, enum class Direction::Type&, enum class Direction::Type&); // NOLINT

private:
};
