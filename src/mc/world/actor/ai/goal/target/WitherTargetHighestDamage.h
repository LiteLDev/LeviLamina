#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Player;
class WitherBoss;
struct GoalId;
struct MobDescriptor;
// clang-format on

class WitherTargetHighestDamage : public ::TargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WitherBoss&> mWitherBoss;
    ::ll::TypedStorage<8, 8, ::Mob*>        mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    WitherTargetHighestDamage& operator=(WitherTargetHighestDamage const&);
    WitherTargetHighestDamage(WitherTargetHighestDamage const&);
    WitherTargetHighestDamage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual void start() /*override*/;

    virtual bool _canAttack(
        ::Mob*                  testMob,
        ::Actor*                target,
        bool                    allowInvulnerable,
        bool                    mustSee,
        ::MobDescriptor const** outDescriptorMatch
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WitherTargetHighestDamage(::Mob& mob, ::std::string name, ::GoalId const& goalId);

    MCNAPI ::Player* getHighestDamageTarget();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob& mob, ::std::string name, ::GoalId const& goalId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI void $start();

    MCNAPI bool $_canAttack(
        ::Mob*                  testMob,
        ::Actor*                target,
        bool                    allowInvulnerable,
        bool                    mustSee,
        ::MobDescriptor const** outDescriptorMatch
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
