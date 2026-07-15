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
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::InteractionResult getInteraction(::Actor& actor, ::Player& player, ::ActorInteraction& interaction);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
    // NOLINTEND
};
