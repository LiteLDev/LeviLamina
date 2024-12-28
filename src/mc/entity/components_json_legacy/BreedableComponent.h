#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class AttributeInstance;
class CompoundTag;
class DataLoadHelper;
class IRandom;
class ItemStack;
class Player;
struct BreedableType;
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
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk466f49;
    ::ll::UntypedStorage<4, 4> mUnkadd2ab;
    ::ll::UntypedStorage<4, 4> mUnka2166d;
    ::ll::UntypedStorage<4, 4> mUnkf37f45;
    ::ll::UntypedStorage<1, 1> mUnkc4b040;
    ::ll::UntypedStorage<1, 1> mUnk5cd18c;
    ::ll::UntypedStorage<8, 8> mUnk75cbd6;
    // NOLINTEND

public:
    // prevent constructor by default
    BreedableComponent& operator=(BreedableComponent const&);
    BreedableComponent(BreedableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BreedableComponent();

    MCAPI bool _canBreed(::Actor& owner, ::Player& player, ::ItemStack const& playerItem);

    MCAPI ::std::optional<::BreedableType> _determineBreedType(::Actor const& partner) const;

    MCAPI ::Actor* _handleMate(::Actor& owner, ::Actor& partner);

    MCAPI void _handlePregnancy(::Actor& owner, ::Actor& partner);

    MCAPI bool _meetsEnvironmentRequirements(::Actor& owner) const;

    MCAPI void _spawnExperienceOrbs(::Actor& owner);

    MCAPI void _spawnLoveParticles(::Actor& owner);

    MCAPI void _useBreedItem(::Actor& owner, ::Player& player, ::ItemStack const&);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI bool canMate(::Actor const& owner, ::Actor const& partner) const;

    MCAPI void decrementBreedCooldown();

    MCAPI void decrementLoveTimer();

    MCAPI int getBreedCooldown() const;

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI ::Player* getLoveCause(::Actor const& owner) const;

    MCAPI int getLoveTimer() const;

    MCAPI ::BreedableComponent::MatingResult mate(::Actor& owner, ::Actor& partner);

    MCAPI bool meetsSittingRequirements(::Actor const& actor) const;

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void resetLove(::Actor& owner);

    MCAPI void setLoveTimer(int loveTimer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setOffspringAttributesWithParentCentricBlending(
        ::AttributeInstance&       offspring,
        ::AttributeInstance const& owner,
        ::AttributeInstance const& partner,
        ::IRandom&                 random,
        float                      attributeRangeMin,
        float                      attributeRangeMax
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
