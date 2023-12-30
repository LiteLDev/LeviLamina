#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SummonActorGoal : public ::Goal {
public:
    // prevent constructor by default
    SummonActorGoal& operator=(SummonActorGoal const&);
    SummonActorGoal(SummonActorGoal const&);
    SummonActorGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SummonActorGoal@@UEAA@XZ
    virtual ~SummonActorGoal() = default;

    // vIndex: 1, symbol: ?canUse@SummonActorGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SummonActorGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SummonActorGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SummonActorGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SummonActorGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SummonActorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0SummonActorGoal@@QEAA@AEAVMob@@AEBV?$vector@USummonSpellData@@V?$allocator@USummonSpellData@@@std@@@std@@@Z
    MCAPI SummonActorGoal(class Mob& caster, std::vector<struct SummonSpellData> const& spellTypes);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createSpellEntity@SummonActorGoal@@AEBAXMMMMMHUActorDefinitionIdentifier@@@Z
    MCAPI void _createSpellEntity(
        float                            x,
        float                            z,
        float                            minY,
        float                            maxY,
        float                            angle,
        int                              lifespan,
        struct ActorDefinitionIdentifier summonType
    ) const;

    // symbol: ?_selectBestSpell@SummonActorGoal@@AEBAHAEAVActor@@@Z
    MCAPI int _selectBestSpell(class Actor& target) const;

    // NOLINTEND
};
