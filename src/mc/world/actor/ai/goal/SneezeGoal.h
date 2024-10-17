#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SneezeGoal : public ::Goal {
public:
    // prevent constructor by default
    SneezeGoal& operator=(SneezeGoal const&);
    SneezeGoal(SneezeGoal const&);
    SneezeGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SneezeGoal() = default;

    // vIndex: 1
    virtual bool canUse();

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

    MCAPI SneezeGoal(
        class Mob&                               mob,
        float                                    cooldownTime,
        float                                    probability,
        float                                    dropItemChance,
        std::string const&                       lootTable,
        std::string const&                       sneezeSound,
        std::string const&                       preSneezeSound,
        float                                    prepareTime,
        std::vector<struct MobDescriptor> const& reactMobFilters,
        float                                    reactWithin
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Mob&                               mob,
        float                                    cooldownTime,
        float                                    probability,
        float                                    dropItemChance,
        std::string const&                       lootTable,
        std::string const&                       sneezeSound,
        std::string const&                       preSneezeSound,
        float                                    prepareTime,
        std::vector<struct MobDescriptor> const& reactMobFilters,
        float                                    reactWithin
    );

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
