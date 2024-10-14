#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class TargetGoal : public ::Goal {
public:
    // prevent constructor by default
    TargetGoal& operator=(TargetGoal const&);
    TargetGoal(TargetGoal const&);
    TargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TargetGoal();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 8
    virtual bool isTargetGoal() const;

    // vIndex: 10
    virtual bool _canAttack(
        class Mob*                   testMob,
        class Actor*                 target,
        bool                         allowInvulnerable,
        bool                         mustSee,
        struct MobDescriptor const** outDescriptorMatch
    );

    MCAPI TargetGoal(
        class Mob& pathMob,
        bool       mustSee,
        int        mustSeeForgetTicks,
        bool       mustReach,
        float      withinDefault,
        bool       attackOwner,
        int        persistTargetTicks
    );

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
    MCAPI bool _canAttack(class Actor* target, bool allowInvulnerable, struct MobDescriptor const** outDescriptorMatch);

    MCAPI bool _canReachAfterDelay(class Actor& target);

    MCAPI bool _matchesTargetTypes(
        class Mob*                   testMob,
        class Actor*                 target,
        bool                         mustSee,
        struct MobDescriptor const** outDescriptorMatch
    );

    MCAPI bool _withinRange(class Actor const& target);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI bool _canAttack$(
        class Mob*                   testMob,
        class Actor*                 target,
        bool                         allowInvulnerable,
        bool                         mustSee,
        struct MobDescriptor const** outDescriptorMatch
    );

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool isTargetGoal$() const;

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
