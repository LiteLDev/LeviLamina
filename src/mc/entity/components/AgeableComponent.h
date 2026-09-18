#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    MCAPI ::Interaction _growthToggle(
        ::Actor&                   actor,
        ::Player&                  player,
        ::AgeableDefinition const& definition,
        ::ItemStack const&         item,
        bool const                 growthPaused
    );

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::Interaction getInteraction(::Actor& actor, ::Player& player);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
    // NOLINTEND
};
