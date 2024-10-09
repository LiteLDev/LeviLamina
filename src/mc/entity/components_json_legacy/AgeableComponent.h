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
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI int getAge() const;

    MCAPI bool getInteraction(class Actor& actor, class Player& player, class ActorInteraction& interaction);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void setAge(int age);

    // NOLINTEND
};
