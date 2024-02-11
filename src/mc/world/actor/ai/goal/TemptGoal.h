#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class TemptGoal : public ::Goal {
public:
    // prevent constructor by default
    TemptGoal& operator=(TemptGoal const&);
    TemptGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TemptGoal@@UEAA@XZ
    virtual ~TemptGoal() = default;

    // vIndex: 1, symbol: ?canUse@TemptGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@TemptGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@TemptGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@TemptGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@TemptGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@TemptGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0TemptGoal@@QEAA@AEBV0@@Z
    MCAPI TemptGoal(class TemptGoal const&);

    // symbol:
    // ??0TemptGoal@@QEAA@AEAVMob@@MAEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@W4LevelSoundEvent@Legacy@Puv@@UFloatRange@@_NM44@Z
    MCAPI TemptGoal(
        class Mob&                               mob,
        float                                    speed,
        std::vector<class ItemDescriptor> const& itemList,
        ::Puv::Legacy::LevelSoundEvent           sound,
        struct FloatRange                        soundIntervalRange,
        bool                                     canGetScared,
        float                                    temptDistance,
        bool                                     canTemptVertically,
        bool
    );

    // NOLINTEND
};
