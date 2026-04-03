#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BreedableDefinition;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class Player;
class WeakEntityRef;
struct OffspringDefinition;
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
    MCAPI bool _canBreed(::Actor& owner, ::Player& player, ::ItemStack const& playerItem);

    MCAPI ::Actor const* _handleMate(::Actor& owner, ::Actor& partner, ::OffspringDefinition const& offspringData);

    MCAPI void _handlePregnancy(::Actor& owner, ::Actor& partner);

    MCAPI bool _meetsEnvironmentRequirements(::Actor& owner) const;

    MCAPI void _spawnExperienceOrbs(::Actor& owner);

    MCAPI void _spawnLoveParticles(::Actor& owner);

    MCAPI void _useBreedItem(
        ::Actor&  owner,
        ::Player& player,
        ::ItemStack const&,
        ::std::optional<::ItemDescriptor> const& resultItem
    );

    MCAPI bool canMate(::Actor const& owner, ::Actor const& partner) const;

    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI ::std::vector<::WeakEntityRef> mate(::Actor& owner, ::Actor& partner);

    MCAPI bool meetsSittingRequirements(::Actor const& actor) const;
    // NOLINTEND
};
