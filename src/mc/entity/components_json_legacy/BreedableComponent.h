#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BreedableDefinition;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class Player;
class WeakEntityRef;
// clang-format on

class BreedableComponent {
public:
    // BreedableComponent inner types define
    using MatingResult = ::std::vector<::WeakEntityRef>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BreedableDefinition const*> mStaticData;
    ::ll::TypedStorage<4, 4, int>                          mLoveTimer;
    ::ll::TypedStorage<4, 4, int>                          mBreedCooldown;
    ::ll::TypedStorage<4, 4, int>                          mBreedCooldownTime;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>              mLoveCause;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI bool canMate(::Actor const& owner, ::Actor const& partner) const;

    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI ::std::vector<::WeakEntityRef> mate(::Actor& owner, ::Actor& partner);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
    // NOLINTEND
};
