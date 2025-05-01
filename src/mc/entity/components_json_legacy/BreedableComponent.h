#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class AttributeInstance;
class BreedableDefinition;
class IRandom;
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
        MCNAPI ~MatingResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BreedableDefinition const*> mStaticData;
    ::ll::TypedStorage<4, 4, int>                          mLoveTimer;
    ::ll::TypedStorage<4, 4, int>                          mBreedCooldown;
    ::ll::TypedStorage<4, 4, int>                          mBreedCooldownTime;
    ::ll::TypedStorage<1, 1, bool>                         mInheritTamed;
    ::ll::TypedStorage<1, 1, bool>                         mCausesPregnancy;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>              mLoveCause;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canBreed(::Actor& owner, ::Player& player, ::ItemStack const& playerItem);

    MCNAPI ::std::optional<::BreedableType> _determineBreedType(::Actor const& partner) const;

    MCNAPI ::Actor* _handleMate(::Actor& owner, ::Actor& partner);

    MCNAPI void _handlePregnancy(::Actor& owner, ::Actor& partner);

    MCNAPI bool _meetsEnvironmentRequirements(::Actor& owner) const;

    MCNAPI void _spawnExperienceOrbs(::Actor& owner);

    MCNAPI void _spawnLoveParticles(::Actor& owner);

    MCNAPI void _useBreedItem(::Actor& owner, ::Player& player, ::ItemStack const&);

    MCNAPI bool canMate(::Actor const& owner, ::Actor const& partner) const;

    MCNAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCNAPI ::Player* getLoveCause(::Actor const& owner) const;

    MCNAPI ::BreedableComponent::MatingResult mate(::Actor& owner, ::Actor& partner);

    MCNAPI bool meetsSittingRequirements(::Actor const& actor) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setOffspringAttributesWithParentCentricBlending(
        ::MutableAttributeWithContext& offspring,
        ::AttributeInstance const&     owner,
        ::AttributeInstance const&     partner,
        ::IRandom&                     random,
        float                          attributeRangeMin,
        float                          attributeRangeMax
    );
    // NOLINTEND
};
