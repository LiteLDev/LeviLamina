#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class WitherTargetHighestDamage : public ::TargetGoal {
public:
    // prevent constructor by default
    WitherTargetHighestDamage& operator=(WitherTargetHighestDamage const&);
    WitherTargetHighestDamage(WitherTargetHighestDamage const&);
    WitherTargetHighestDamage();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WitherTargetHighestDamage() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 10
    virtual bool _canAttack(
        class Mob*                   testMob,
        class Actor*                 target,
        bool                         allowInvulnerable,
        bool                         mustSee,
        struct MobDescriptor const** outDescriptorMatch
    );

    MCAPI WitherTargetHighestDamage(class WitherBoss& witherBoss, std::vector<struct MobDescriptor> const& targetTypes);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Player* getHighestDamageTarget();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class WitherBoss& witherBoss, std::vector<struct MobDescriptor> const& targetTypes);

    MCAPI bool _canAttack$(
        class Mob*                   testMob,
        class Actor*                 target,
        bool                         allowInvulnerable,
        bool                         mustSee,
        struct MobDescriptor const** outDescriptorMatch
    );

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    // NOLINTEND
};
