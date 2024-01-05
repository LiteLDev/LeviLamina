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
        // symbol: ??1MatingResult@BreedableComponent@@QEAA@XZ
        MCAPI ~MatingResult();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BreedableComponent& operator=(BreedableComponent const&);
    BreedableComponent(BreedableComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BreedableComponent@@QEAA@XZ
    MCAPI BreedableComponent();

    // symbol: ?addAdditionalSaveData@BreedableComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?canMate@BreedableComponent@@QEBA_NAEBVActor@@0@Z
    MCAPI bool canMate(class Actor const& owner, class Actor const& partner) const;

    // symbol: ?decrementBreedCooldown@BreedableComponent@@QEAAXXZ
    MCAPI void decrementBreedCooldown();

    // symbol: ?decrementLoveTimer@BreedableComponent@@QEAAXXZ
    MCAPI void decrementLoveTimer();

    // symbol: ?getBreedCooldown@BreedableComponent@@QEBAHXZ
    MCAPI int getBreedCooldown() const;

    // symbol: ?getInteraction@BreedableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // symbol: ?getLoveCause@BreedableComponent@@QEBAPEAVPlayer@@AEBVActor@@@Z
    MCAPI class Player* getLoveCause(class Actor const& owner) const;

    // symbol: ?getLoveTimer@BreedableComponent@@QEBAHXZ
    MCAPI int getLoveTimer() const;

    // symbol: ?mate@BreedableComponent@@QEAA?AUMatingResult@1@AEAVActor@@0@Z
    MCAPI struct BreedableComponent::MatingResult mate(class Actor& owner, class Actor& partner);

    // symbol: ?meetsSittingRequirements@BreedableComponent@@QEBA_NAEBVActor@@@Z
    MCAPI bool meetsSittingRequirements(class Actor const& actor) const;

    // symbol: ?readAdditionalSaveData@BreedableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?resetLove@BreedableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void resetLove(class Actor& owner);

    // symbol: ?setInLove@BreedableComponent@@QEAAXAEAVActor@@PEBVPlayer@@@Z
    MCAPI void setInLove(class Actor& owner, class Player const* player);

    // symbol: ?setLoveTimer@BreedableComponent@@QEAAXH@Z
    MCAPI void setLoveTimer(int loveTimer);

    // symbol:
    // ?setOffspringAttributesWithParentCentricBlending@BreedableComponent@@SAXAEAVAttributeInstance@@AEBV2@1AEAVIRandom@@MM@Z
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
    // symbol: ?_canBreed@BreedableComponent@@AEAA_NAEAVActor@@AEAVPlayer@@AEBVItemStack@@@Z
    MCAPI bool _canBreed(class Actor& owner, class Player& player, class ItemStack const&);

    // symbol: ?_determineBreedType@BreedableComponent@@AEBA?AV?$optional@UBreedableType@@@std@@AEBVActor@@@Z
    MCAPI std::optional<struct BreedableType> _determineBreedType(class Actor const& partner) const;

    // symbol: ?_handleMate@BreedableComponent@@AEAAPEAVActor@@AEAV2@0@Z
    MCAPI class Actor* _handleMate(class Actor& owner, class Actor& partner);

    // symbol: ?_handlePregnancy@BreedableComponent@@AEAAXAEAVActor@@0@Z
    MCAPI void _handlePregnancy(class Actor& owner, class Actor& partner);

    // symbol: ?_meetsEnvironmentRequirements@BreedableComponent@@AEBA_NAEAVActor@@@Z
    MCAPI bool _meetsEnvironmentRequirements(class Actor& owner) const;

    // symbol: ?_spawnExperienceOrbs@BreedableComponent@@AEAAXAEAVActor@@@Z
    MCAPI void _spawnExperienceOrbs(class Actor& owner);

    // symbol: ?_spawnLoveParticles@BreedableComponent@@AEAAXAEAVActor@@@Z
    MCAPI void _spawnLoveParticles(class Actor& owner);

    // symbol: ?_useBreedItem@BreedableComponent@@AEAAXAEAVActor@@AEAVPlayer@@AEBVItemStack@@@Z
    MCAPI void _useBreedItem(class Actor& owner, class Player& player, class ItemStack const&);

    // NOLINTEND
};
