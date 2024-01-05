#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class NearestAttackableTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    NearestAttackableTargetGoal& operator=(NearestAttackableTargetGoal const&);
    NearestAttackableTargetGoal(NearestAttackableTargetGoal const&);
    NearestAttackableTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NearestAttackableTargetGoal@@UEAA@XZ
    virtual ~NearestAttackableTargetGoal();

    // vIndex: 1, symbol: ?canUse@NearestAttackableTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@NearestAttackableTargetGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@NearestAttackableTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@NearestAttackableTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?_findTarget@NearestAttackableTargetGoal@@MEAA?AUActorUniqueID@@PEAPEBUMobDescriptor@@@Z
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const** outMobDescriptor);

    // symbol: ??0NearestAttackableTargetGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit NearestAttackableTargetGoal(class Mob& mob);

    // symbol: ?isTargetVisible@NearestAttackableTargetGoal@@QEBA_NAEBVMob@@MM@Z
    MCAPI bool isTargetVisible(class Mob const&, float, float) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canStartSearching@NearestAttackableTargetGoal@@IEAA_NXZ
    MCAPI bool _canStartSearching();

    // symbol: ?_isTargetInCooldown@NearestAttackableTargetGoal@@IEBA_NAEBUMobDescriptor@@@Z
    MCAPI bool _isTargetInCooldown(struct MobDescriptor const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_selectTarget@NearestAttackableTargetGoal@@AEAA_NXZ
    MCAPI bool _selectTarget();

    // NOLINTEND
};
