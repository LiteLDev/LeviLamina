#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct MobDescriptor;
// clang-format on

class TargetGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1c87dc;
    ::ll::UntypedStorage<1, 1>  mUnkc197c8;
    ::ll::UntypedStorage<1, 1>  mUnke0bc19;
    ::ll::UntypedStorage<1, 1>  mUnk4d81ce;
    ::ll::UntypedStorage<1, 1>  mUnkaaaf17;
    ::ll::UntypedStorage<4, 4>  mUnk2efdbb;
    ::ll::UntypedStorage<1, 1>  mUnkdb1e16;
    ::ll::UntypedStorage<4, 4>  mUnk6d49d5;
    ::ll::UntypedStorage<4, 4>  mUnk7dad33;
    ::ll::UntypedStorage<4, 4>  mUnka56130;
    ::ll::UntypedStorage<4, 4>  mUnke1b536;
    ::ll::UntypedStorage<4, 4>  mUnkfcb949;
    ::ll::UntypedStorage<4, 4>  mUnk81004c;
    ::ll::UntypedStorage<4, 4>  mUnk630026;
    ::ll::UntypedStorage<1, 1>  mUnka77c5c;
    ::ll::UntypedStorage<8, 24> mUnkd38c77;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetGoal& operator=(TargetGoal const&);
    TargetGoal(TargetGoal const&);
    TargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual bool isTargetGoal() const /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 10
    virtual bool _canAttack(
        ::Mob*                  testMob,
        ::Actor*                target,
        bool                    allowInvulnerable,
        bool                    mustSee,
        ::MobDescriptor const** outDescriptorMatch
    );

    // vIndex: 0
    virtual ~TargetGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TargetGoal(
        ::Mob& pathMob,
        bool   mustSee,
        int    mustSeeForgetTicks,
        bool   mustReach,
        float  withinDefault,
        bool   attackOwner,
        int    persistTargetTicks
    );

    MCAPI TargetGoal(
        ::Mob&                                pathMob,
        ::std::vector<::MobDescriptor> const& targetTypes,
        bool                                  mustSee,
        int                                   mustSeeForgetTicks,
        bool                                  mustReach,
        float                                 withinDefault,
        bool                                  attackOwner,
        int                                   persistTargetTicks
    );

    MCAPI bool _canAttack(::Actor* target, bool allowInvulnerable, ::MobDescriptor const** outDescriptorMatch);

    MCAPI bool _canReachAfterDelay(::Actor& target);

    MCAPI bool
    _matchesTargetTypes(::Mob* testMob, ::Actor* target, bool mustSee, ::MobDescriptor const** outDescriptorMatch);

    MCAPI bool _withinRange(::Actor const& target);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob& pathMob,
        bool   mustSee,
        int    mustSeeForgetTicks,
        bool   mustReach,
        float  withinDefault,
        bool   attackOwner,
        int    persistTargetTicks
    );

    MCAPI void* $ctor(
        ::Mob&                                pathMob,
        ::std::vector<::MobDescriptor> const& targetTypes,
        bool                                  mustSee,
        int                                   mustSeeForgetTicks,
        bool                                  mustReach,
        float                                 withinDefault,
        bool                                  attackOwner,
        int                                   persistTargetTicks
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isTargetGoal() const;

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCFOLD void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $_canAttack(
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
