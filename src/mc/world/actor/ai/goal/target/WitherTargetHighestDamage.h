#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class WitherTargetHighestDamage : public ::TargetGoal {
public:
    // prevent constructor by default
    WitherTargetHighestDamage& operator=(WitherTargetHighestDamage const&);
    WitherTargetHighestDamage(WitherTargetHighestDamage const&);
    WitherTargetHighestDamage();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WitherTargetHighestDamage@@UEAA@XZ
    virtual ~WitherTargetHighestDamage() = default;

    // vIndex: 1, symbol: ?canUse@WitherTargetHighestDamage@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@WitherTargetHighestDamage@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@WitherTargetHighestDamage@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@WitherTargetHighestDamage@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 10, symbol: ?_canAttack@WitherTargetHighestDamage@@EEAA_NPEAVMob@@PEAVActor@@_N2PEAPEBUMobDescriptor@@@Z
    virtual bool _canAttack(
        class Mob*                   testMob,
        class Actor*                 target,
        bool                         allowInvulnerable,
        bool                         mustSee,
        struct MobDescriptor const** outDescriptorMatch
    );

    // symbol:
    // ??0WitherTargetHighestDamage@@QEAA@AEAVWitherBoss@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@@Z
    MCAPI WitherTargetHighestDamage(class WitherBoss& witherBoss, std::vector<struct MobDescriptor> const& targetTypes);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getHighestDamageTarget@WitherTargetHighestDamage@@AEAAPEAVPlayer@@XZ
    MCAPI class Player* getHighestDamageTarget();

    // NOLINTEND
};
