#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreedableComponent {
public:
    // BreedableComponent inner types declare
    // clang-format off
    struct MatingResult;
    // clang-format on

    // BreedableComponent inner types define
    struct MatingResult {
    public:
        // prevent constructor by default
        MatingResult& operator=(MatingResult const&);
        MatingResult(MatingResult const&);
        MatingResult();

    public:
        // NOLINTBEGIN
        MCAPI ~MatingResult();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BreedableComponent& operator=(BreedableComponent const&);
    BreedableComponent(BreedableComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BreedableComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool canMate(class Actor const& owner, class Actor const& partner) const;

    MCAPI void decrementBreedCooldown();

    MCAPI void decrementLoveTimer();

    MCAPI int getBreedCooldown() const;

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    MCAPI class Player* getLoveCause(class Actor const& owner) const;

    MCAPI int getLoveTimer() const;

    MCAPI struct BreedableComponent::MatingResult mate(class Actor& owner, class Actor& partner);

    MCAPI bool meetsSittingRequirements(class Actor const& actor) const;

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void resetLove(class Actor& owner);

    MCAPI void setInLove(class Actor& owner, class Player const* player);

    MCAPI void setLoveTimer(int loveTimer);

    MCAPI static void setOffspringAttributesWithParentCentricBlending(
        class AttributeInstance&,
        class AttributeInstance const& owner,
        class AttributeInstance const& partner,
        class IRandom&                 random,
        float,
        float
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canBreed(class Actor& owner, class Player& player, class ItemStack const&);

    MCAPI std::optional<struct BreedableType> _determineBreedType(class Actor const& partner) const;

    MCAPI class Actor* _handleMate(class Actor& owner, class Actor& partner);

    MCAPI void _handlePregnancy(class Actor& owner, class Actor& partner);

    MCAPI bool _meetsEnvironmentRequirements(class Actor& owner) const;

    MCAPI void _spawnExperienceOrbs(class Actor& owner);

    MCAPI void _spawnLoveParticles(class Actor& owner);

    MCAPI void _useBreedItem(class Actor& owner, class Player& player, class ItemStack const&);

    // NOLINTEND
};
