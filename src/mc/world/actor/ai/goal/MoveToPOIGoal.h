#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class MoveToPOIGoal : public ::BaseMoveToGoal {

public:
    // prevent constructor by default
    MoveToPOIGoal& operator=(MoveToPOIGoal const&) = delete;
    MoveToPOIGoal(MoveToPOIGoal const&)            = delete;
    MoveToPOIGoal()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveToPOIGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@MoveToPOIGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@MoveToPOIGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveToPOIGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@MoveToPOIGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_moveToBlock\@MoveToPOIGoal\@\@MEAAXXZ
     */
    virtual void _moveToBlock(); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?_getTargetPosition\@MoveToPOIGoal\@\@MEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 _getTargetPosition() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?_getOwnedPOI\@MoveToPOIGoal\@\@MEBA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@W4POIType\@\@\@Z
     */
    virtual class std::weak_ptr<class POIInstance> _getOwnedPOI(enum class POIType) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOPOIGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveToPOIGoal(); // NOLINT
#endif
    /**
     * @symbol ??0MoveToPOIGoal\@\@QEAA\@AEAVMob\@\@MW4POIType\@\@M\@Z
     */
    MCAPI MoveToPOIGoal(class Mob&, float, enum class POIType, float); // NOLINT
    /**
     * @symbol ?getPOI\@MoveToPOIGoal\@\@QEAA_NW4POIType\@\@\@Z
     */
    MCAPI bool getPOI(enum class POIType); // NOLINT

    // protected:
    /**
     * @symbol ?_canReachPOI\@MoveToPOIGoal\@\@IEAA_NAEBVVec3\@\@M_N\@Z
     */
    MCAPI bool _canReachPOI(class Vec3 const&, float, bool); // NOLINT

    // private:
    /**
     * @symbol ?_updatePOIBooking\@MoveToPOIGoal\@\@AEAAXXZ
     */
    MCAPI void _updatePOIBooking(); // NOLINT

protected:
private:
};
