#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class MoveToPOIGoal : public ::BaseMoveToGoal {
public:
    // prevent constructor by default
    MoveToPOIGoal& operator=(MoveToPOIGoal const&);
    MoveToPOIGoal(MoveToPOIGoal const&);
    MoveToPOIGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MoveToPOIGoal@@UEAA@XZ
    virtual ~MoveToPOIGoal();

    // vIndex: 1, symbol: ?canUse@MoveToPOIGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 5, symbol: ?stop@MoveToPOIGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@MoveToPOIGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveToPOIGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?isValidTarget@MoveToPOIGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 14, symbol: ?_moveToBlock@MoveToPOIGoal@@MEAAXXZ
    virtual void _moveToBlock();

    // vIndex: 15, symbol: ?_getTargetPosition@MoveToPOIGoal@@MEBA?AVVec3@@XZ
    virtual class Vec3 _getTargetPosition() const;

    // vIndex: 17, symbol: ?_getOwnedPOI@MoveToPOIGoal@@MEBA?AV?$weak_ptr@VPOIInstance@@@std@@W4POIType@@@Z
    virtual std::weak_ptr<class POIInstance> _getOwnedPOI(::POIType type) const;

    // symbol: ??0MoveToPOIGoal@@QEAA@AEAVMob@@MW4POIType@@M@Z
    MCAPI MoveToPOIGoal(class Mob& mob, float speedModifier, ::POIType poiType, float coolddownTimeout);

    // symbol: ?getPOI@MoveToPOIGoal@@QEAA_NW4POIType@@@Z
    MCAPI bool getPOI(::POIType type);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canReachPOI@MoveToPOIGoal@@IEAA_NAEBVVec3@@M_N@Z
    MCAPI bool _canReachPOI(class Vec3 const& pos, float radiusSqr, bool usingBoundingBox);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updatePOIBooking@MoveToPOIGoal@@AEAAXXZ
    MCAPI void _updatePOIBooking();

    // NOLINTEND
};
