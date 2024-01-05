#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class TargetGoal : public ::Goal {
public:
    // prevent constructor by default
    TargetGoal& operator=(TargetGoal const&);
    TargetGoal(TargetGoal const&);
    TargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TargetGoal@@UEAA@XZ
    virtual ~TargetGoal();

    // vIndex: 2, symbol: ?canContinueToUse@TargetGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@TargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@TargetGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@TargetGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@TargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 8, symbol: ?isTargetGoal@TargetGoal@@UEBA_NXZ
    virtual bool isTargetGoal() const;

    // vIndex: 10, symbol: ?_canAttack@TargetGoal@@MEAA_NPEAVMob@@PEAVActor@@_N2PEAPEBUMobDescriptor@@@Z
    virtual bool _canAttack(
        class Mob*                   testMob,
        class Actor*                 target,
        bool                         allowInvulnerable,
        bool                         mustSee,
        struct MobDescriptor const** outDescriptorMatch
    );

    // symbol: ??0TargetGoal@@QEAA@AEAVMob@@_NH1M1H@Z
    MCAPI TargetGoal(
        class Mob& pathMob,
        bool       mustSee,
        int        mustSeeForgetTicks,
        bool       mustReach,
        float      withinDefault,
        bool       attackOwner,
        int        persistTargetTicks
    );

    // symbol:
    // ??0TargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@_NH2M2H@Z
    MCAPI TargetGoal(
        class Mob&                               pathMob,
        std::vector<struct MobDescriptor> const& targetTypes,
        bool                                     mustSee,
        int                                      mustSeeForgetTicks,
        bool                                     mustReach,
        float                                    withinDefault,
        bool                                     attackOwner,
        int                                      persistTargetTicks
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canAttack@TargetGoal@@IEAA_NPEAVActor@@_NPEAPEBUMobDescriptor@@@Z
    MCAPI bool _canAttack(class Actor* target, bool allowInvulnerable, struct MobDescriptor const** outDescriptorMatch);

    // symbol: ?_canReachAfterDelay@TargetGoal@@IEAA_NAEAVActor@@@Z
    MCAPI bool _canReachAfterDelay(class Actor& target);

    // symbol: ?_matchesTargetTypes@TargetGoal@@IEAA_NPEAVMob@@PEAVActor@@_NPEAPEBUMobDescriptor@@@Z
    MCAPI bool _matchesTargetTypes(
        class Mob*                   testMob,
        class Actor*                 target,
        bool                         mustSee,
        struct MobDescriptor const** outDescriptorMatch
    );

    // symbol: ?_withinRange@TargetGoal@@IEAA_NAEBVActor@@@Z
    MCAPI bool _withinRange(class Actor const& target);

    // NOLINTEND
};
