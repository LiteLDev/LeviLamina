#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AgeableDefinition;
class CompoundTag;
class DataLoadHelper;
class Interaction;
class ItemStack;
class Player;
// clang-format on

struct AgeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mAge;
    ::ll::TypedStorage<1, 1, bool> mGrowthPaused;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Interaction _growthToggle(
        ::Actor&                   actor,
        ::Player&                  player,
        ::AgeableDefinition const& definition,
        ::ItemStack const&         item,
        bool                       growthPaused,
        ::HandSlot                 handSlot
    );

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI ::Interaction getInteraction(::Actor& actor, ::Player& player, ::HandSlot handSlot);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
    // NOLINTEND
};
