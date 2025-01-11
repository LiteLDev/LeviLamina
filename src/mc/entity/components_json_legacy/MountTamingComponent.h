#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class Player;
// clang-format on

class MountTamingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk63f4c5;
    ::ll::UntypedStorage<4, 4> mUnk11cb63;
    ::ll::UntypedStorage<4, 4> mUnkf6aa4b;
    ::ll::UntypedStorage<4, 4> mUnk792c31;
    // NOLINTEND

public:
    // prevent constructor by default
    MountTamingComponent& operator=(MountTamingComponent const&);
    MountTamingComponent(MountTamingComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MountTamingComponent();

    MCAPI void _feedItem(::Actor& owner, ::Player& player, int temperModifier);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void becomeTame(::Actor& owner, bool tamingParticles);

    MCFOLD int& getCounter();

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

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
