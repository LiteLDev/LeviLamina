#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class HideGoal : public ::MoveToPOIGoal {
public:
    // prevent constructor by default
    HideGoal& operator=(HideGoal const&);
    HideGoal(HideGoal const&);
    HideGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HideGoal@@UEAA@XZ
    virtual ~HideGoal() = default;

    // vIndex: 1, symbol: ?canUse@HideGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@HideGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@HideGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@HideGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@HideGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 16, symbol: ?_getRepathTime@HideGoal@@MEBA_KXZ
    virtual uint64 _getRepathTime() const;

    // vIndex: 17, symbol: ?_getOwnedPOI@HideGoal@@MEBA?AV?$weak_ptr@VPOIInstance@@@std@@W4POIType@@@Z
    virtual std::weak_ptr<class POIInstance> _getOwnedPOI(::POIType type) const;

    // symbol: ??0HideGoal@@QEAA@AEAVMob@@MMMW4POIType@@@Z
    MCAPI HideGoal(class Mob& mob, float speedModifier, float cooldownTimeout, float duration, ::POIType poiType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_sendSoundTheAlarmAchievement@HideGoal@@AEBAXXZ
    MCAPI void _sendSoundTheAlarmAchievement() const;

    // NOLINTEND
};
