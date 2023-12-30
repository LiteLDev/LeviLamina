#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Interaction {
public:
    // prevent constructor by default
    Interaction& operator=(Interaction const&);

public:
    // NOLINTBEGIN
    // symbol: ??0Interaction@@QEAA@XZ
    MCAPI Interaction();

    // symbol: ??0Interaction@@QEAA@$$QEAU0@@Z
    MCAPI Interaction(struct Interaction&&);

    // symbol: ??0Interaction@@QEAA@AEBU0@@Z
    MCAPI Interaction(struct Interaction const&);

    // symbol:
    // ?addActorDefinitionIdentifierByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addActorDefinitionIdentifierByName(std::string const& name);

    // symbol:
    // ?addLevelSoundEventByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addLevelSoundEventByName(std::string const& name);

    // symbol: ?addVibrationByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addVibrationByName(std::string const&);

    // symbol: ?setCooldown@Interaction@@QEAAXAEBM@Z
    MCAPI void setCooldown(float const& seconds);

    // symbol: ?setCooldownAfterBeingAttacked@Interaction@@QEAAXAEBM@Z
    MCAPI void setCooldownAfterBeingAttacked(float const&);

    // symbol: ?setParticleType@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setParticleType(std::string const& name);

    // symbol: ?setTransformItem@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setTransformItem(std::string const& name);

    // symbol: ??1Interaction@@QEAA@XZ
    MCAPI ~Interaction();

    // NOLINTEND
};
