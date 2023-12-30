#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgeableComponent {
public:
    // prevent constructor by default
    AgeableComponent& operator=(AgeableComponent const&);
    AgeableComponent(AgeableComponent const&);
    AgeableComponent();

public:
    // NOLINTBEGIN
    // symbol: ?addAdditionalSaveData@AgeableComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?getAge@AgeableComponent@@QEBAHXZ
    MCAPI int getAge() const;

    // symbol: ?getInteraction@AgeableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& actor, class Player& player, class ActorInteraction& interaction);

    // symbol: ?readAdditionalSaveData@AgeableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& actor, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?setAge@AgeableComponent@@QEAAXH@Z
    MCAPI void setAge(int age);

    // NOLINTEND
};
