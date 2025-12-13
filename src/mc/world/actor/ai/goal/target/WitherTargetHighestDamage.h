#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Player;
struct MobDescriptor;
// clang-format on

class WitherTargetHighestDamage : public ::TargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk52787d;
    ::ll::UntypedStorage<8, 8> mUnk99d285;
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

    virtual ~WitherTargetHighestDamage() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Player* getHighestDamageTarget();
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
