#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class LootTableContext {
public:
    // LootTableContext inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // LootTableContext inner types define
    class Builder {
    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();

    public:
        // NOLINTBEGIN
        MCAPI Builder(class ILevel* level, DimensionType dimensionId);

        MCAPI class LootTableContext create() const;

        MCAPI class LootTableContext::Builder& withDeathSource(class ActorDamageSource const* deathSource);

        MCAPI class LootTableContext::Builder& withExplosionRadius(float explosionRadius);

        MCAPI class LootTableContext::Builder& withKilledActor(class Actor* actor);

        MCAPI class LootTableContext::Builder& withKillerPlayer(class Player* player);

        MCAPI class LootTableContext::Builder& withLuck(float luck);

        MCAPI class LootTableContext::Builder& withThisEntity(class Actor* actor);

        MCAPI class LootTableContext::Builder& withTool(class ItemStack const*);

        MCAPI ~Builder();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    LootTableContext& operator=(LootTableContext const&);
    LootTableContext(LootTableContext const&);
    LootTableContext();

public:
    // NOLINTBEGIN
    MCAPI
    LootTableContext(float luck, class ILevel* level, struct ActorUniqueID, class Player* player, class Actor*, class ActorDamageSource const* deathSource, float explosionRadius, DimensionType dimensionId, class ItemStack const*);

    MCAPI class Actor* getKillerEntity() const;

    MCAPI class Level* getLevel() const;

    MCAPI void removeVisitedTable(class LootTable const* table);

    MCAPI void setOriginalItemName(std::string const&);

    MCAPI ~LootTableContext();

    // NOLINTEND
};
