#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SummonActorGoal : public ::Goal {
public:
    // prevent constructor by default
    SummonActorGoal& operator=(SummonActorGoal const&);
    SummonActorGoal(SummonActorGoal const&);
    SummonActorGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SummonActorGoal() = default;

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

    MCAPI SummonActorGoal(class Mob& caster, std::vector<struct SummonSpellData> const& spellTypes);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _createSpellEntity(
        float x,
        float z,
        float minY,
        float maxY,
        float,
        int                              lifespan,
        struct ActorDefinitionIdentifier summonType
    ) const;

    MCAPI int _selectBestSpell(class Actor& target) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Mob& caster, std::vector<struct SummonSpellData> const& spellTypes);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
