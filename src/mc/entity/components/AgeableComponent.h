#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class AgeableDefinition;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
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
    MCAPI ::InteractionResult _growthToggle(
        ::Actor&                   actor,
        ::Player&                  player,
        ::ActorInteraction&        interaction,
        ::AgeableDefinition const& definition,
        ::ItemStack const&         item,
        bool                       growthPaused
    );

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD int getAge() const;

    MCAPI ::InteractionResult getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);

    MCFOLD bool isGrowthPaused() const;

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void setAge(int age);
    // NOLINTEND
};
