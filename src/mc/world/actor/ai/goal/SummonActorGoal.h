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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SummonActorGoal();

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
    virtual void appendDebugInfo(std::string&) const;

    // symbol:
    // ??0SummonActorGoal@@QEAA@AEAVMob@@AEBV?$vector@USummonSpellData@@V?$allocator@USummonSpellData@@@std@@@std@@@Z
    MCAPI SummonActorGoal(class Mob&, std::vector<struct SummonSpellData> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createSpellEntity@SummonActorGoal@@AEBAXMMMMMHUActorDefinitionIdentifier@@@Z
    MCAPI void _createSpellEntity(float, float, float, float, float, int, struct ActorDefinitionIdentifier) const;

    // symbol: ?_selectBestSpell@SummonActorGoal@@AEBAHAEAVActor@@@Z
    MCAPI int _selectBestSpell(class Actor&) const;

    // NOLINTEND
};
