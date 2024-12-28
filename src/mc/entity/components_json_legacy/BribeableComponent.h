#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class ItemStack;
class Player;
// clang-format on

class BribeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka5d8c2;
    ::ll::UntypedStorage<4, 4> mUnk9f3db7;
    ::ll::UntypedStorage<4, 4> mUnkbf9dd5;
    ::ll::UntypedStorage<4, 4> mUnk15c67a;
    // NOLINTEND

public:
    // prevent constructor by default
    BribeableComponent& operator=(BribeableComponent const&);
    BribeableComponent(BribeableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BribeableComponent();

    MCAPI void _bribe(::Actor& owner, ::Player& player);

    MCAPI bool _canBribe(::ItemStack const& item);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI bool clientBribeCheck(::Actor& owner);

    MCAPI int& getBribeCooldown();

    MCAPI int& getBribeTimer();

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void resetBribe(::Actor& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
