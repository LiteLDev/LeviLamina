#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MountTamingComponent {
public:
    // prevent constructor by default
    MountTamingComponent& operator=(MountTamingComponent const&);
    MountTamingComponent(MountTamingComponent const&);

public:
    // NOLINTBEGIN
    MCAPI MountTamingComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void becomeTame(class Actor& owner, bool tamingParticles);

    MCAPI int& getCounter();

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    MCAPI int& getTemper();

    MCAPI int getTemperMod() const;

    MCAPI int getWaitCount() const;

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void tameToPlayer(class Actor& owner, class Player& player, bool tamingParticles);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _feedItem(class Actor& owner, class Player& player, int temperModifier);

    MCAPI static bool _autoReject(class ItemStack const& item, class MountTameableDefinition const* tameableDefinition);

    MCAPI static bool _canTame(
        class Actor& owner,
        class Player&,
        class ItemStack const&               item,
        class MountTameableDefinition const* tameableDefinition
    );

    // NOLINTEND
};
