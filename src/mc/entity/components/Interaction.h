#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Interaction {
public:
    // prevent constructor by default
    Interaction& operator=(Interaction const&);

public:
    // NOLINTBEGIN
    // symbol: ??0Interaction@@QEAA@XZ
    MCAPI Interaction();

    // symbol: ??0Interaction@@QEAA@$$QEAV0@@Z
    MCAPI Interaction(class Interaction&&);

    // symbol: ??0Interaction@@QEAA@AEBV0@@Z
    MCAPI Interaction(class Interaction const&);

    // symbol:
    // ?addActorDefinitionIdentifierByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addActorDefinitionIdentifierByName(std::string const& name);

    // symbol:
    // ?addLevelSoundEventByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addLevelSoundEventByName(std::string const& name);

    // symbol: ?setCooldown@Interaction@@QEAAXAEBM@Z
    MCAPI void setCooldown(float const& seconds);

    // symbol: ?setCooldownAfterBeingAttacked@Interaction@@QEAAXAEBM@Z
    MCAPI void setCooldownAfterBeingAttacked(float const& seconds);

    // symbol: ?setDropItemSlot@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setDropItemSlot(std::string const&);

    // symbol: ?setEquipItemSlot@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setEquipItemSlot(std::string const&);

    // symbol: ?setParticleType@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setParticleType(std::string const& name);

    // symbol: ?setRepairItemAmount@Interaction@@QEAAXAEBH@Z
    MCAPI void setRepairItemAmount(int const&);

    // symbol: ?setRepairItemSlot@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setRepairItemSlot(std::string const&);

    // symbol: ?setTransformItem@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setTransformItem(std::string const& name);

    // symbol: ?setVibrationByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setVibrationByName(std::string const&);

    // symbol: ??1Interaction@@QEAA@XZ
    MCAPI ~Interaction();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tryConvertStringToItemSlotInfo@Interaction@@CA?AV?$optional@UItemSlotInfo@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::optional<struct ItemSlotInfo> _tryConvertStringToItemSlotInfo(std::string const&);

    // NOLINTEND
};
