#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BribeableComponent {
public:
    // prevent constructor by default
    BribeableComponent& operator=(BribeableComponent const&);
    BribeableComponent(BribeableComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BribeableComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool clientBribeCheck(class Actor& owner);

    MCAPI int& getBribeCooldown();

    MCAPI int& getBribeTimer();

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void resetBribe(class Actor& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _bribe(class Actor& owner, class Player& player);

    MCAPI bool _canBribe(class ItemStack const& item);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
