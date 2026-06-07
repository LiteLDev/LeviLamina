#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class Player;
// clang-format on

class MountTamingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTemper;
    ::ll::TypedStorage<4, 4, int> mCounter;
    ::ll::TypedStorage<4, 4, int> mTemperMod;
    ::ll::TypedStorage<4, 4, int> mWaitCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MountTamingComponent();

    MCAPI void _feedItem(::Actor& owner, ::Player& player, int temperModifier);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void becomeTame(::Actor& owner, bool tamingParticles);

    MCFOLD int& getCounter();

    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCFOLD int& getTemper();

    MCFOLD int getTemperMod() const;

    MCFOLD int getWaitCount() const;

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void tameToPlayer(::Actor& owner, ::Player& player, bool tamingParticles);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
