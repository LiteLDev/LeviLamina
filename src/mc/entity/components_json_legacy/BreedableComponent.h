#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class AttributeInstanceConstRef;
class BreedableDefinition;
class IRandom;
class ItemDescriptor;
class ItemStack;
class Player;
struct BreedableType;
struct MutableAttributeWithContext;
// clang-format on

class BreedableComponent {
public:
    // BreedableComponent inner types declare
    // clang-format off
    struct MatingResult;
    // clang-format on

    // BreedableComponent inner types define
    struct MatingResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk464dae;
        // NOLINTEND

    public:
        // prevent constructor by default
        MatingResult& operator=(MatingResult const&);
        MatingResult(MatingResult const&);
        MatingResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~MatingResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BreedableDefinition const*> mStaticData;
    ::ll::TypedStorage<4, 4, int>                          mLoveTimer;
    ::ll::TypedStorage<4, 4, int>                          mBreedCooldown;
    ::ll::TypedStorage<4, 4, int>                          mBreedCooldownTime;
    ::ll::TypedStorage<1, 1, bool>                         mCausesPregnancy;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>              mLoveCause;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canBreed(::Actor& owner, ::Player& player, ::ItemStack const& playerItem);

    MCAPI ::std::optional<::BreedableType> _determineBreedType(::Actor const& partner) const;

    MCAPI ::Actor* _handleMate(::Actor& owner, ::Actor& partner);

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

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI ::Player* getLoveCause(::Actor const& owner) const;

    MCAPI ::BreedableComponent::MatingResult mate(::Actor& owner, ::Actor& partner);

    MCAPI bool meetsSittingRequirements(::Actor const& actor) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setOffspringAttributes(
        ::MutableAttributeWithContext& offspring,
        ::AttributeInstanceConstRef    owner,
        ::AttributeInstanceConstRef    partner
    );

    MCAPI static void setOffspringAttributesWithParentCentricBlending(
        ::MutableAttributeWithContext& offspring,
        ::AttributeInstanceConstRef    owner,
        ::AttributeInstanceConstRef    partner,
        ::IRandom&                     random,
        float                          attributeRangeMin,
        float                          attributeRangeMax
    );
    // NOLINTEND
};
