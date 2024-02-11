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
        // symbol: ??0Builder@LootTableContext@@QEAA@PEAVILevel@@V?$AutomaticID@VDimension@@H@@@Z
        MCAPI Builder(class ILevel* level, DimensionType dimensionId);

        // symbol: ?create@Builder@LootTableContext@@QEBA?AV2@XZ
        MCAPI class LootTableContext create() const;

        // symbol: ?withDeathSource@Builder@LootTableContext@@QEAAAEAV12@PEBVActorDamageSource@@@Z
        MCAPI class LootTableContext::Builder& withDeathSource(class ActorDamageSource const* deathSource);

        // symbol: ?withExplosionRadius@Builder@LootTableContext@@QEAAAEAV12@M@Z
        MCAPI class LootTableContext::Builder& withExplosionRadius(float explosionRadius);

        // symbol: ?withKilledActor@Builder@LootTableContext@@QEAAAEAV12@PEAVActor@@@Z
        MCAPI class LootTableContext::Builder& withKilledActor(class Actor* actor);

        // symbol: ?withKillerPlayer@Builder@LootTableContext@@QEAAAEAV12@PEAVPlayer@@@Z
        MCAPI class LootTableContext::Builder& withKillerPlayer(class Player* player);

        // symbol: ?withLuck@Builder@LootTableContext@@QEAAAEAV12@M@Z
        MCAPI class LootTableContext::Builder& withLuck(float luck);

        // symbol: ?withThisEntity@Builder@LootTableContext@@QEAAAEAV12@PEAVActor@@@Z
        MCAPI class LootTableContext::Builder& withThisEntity(class Actor* actor);

        // symbol: ?withTool@Builder@LootTableContext@@QEAAAEAV12@PEBVItemStack@@@Z
        MCAPI class LootTableContext::Builder& withTool(class ItemStack const*);

        // symbol: ??1Builder@LootTableContext@@QEAA@XZ
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
    // symbol:
    // ??0LootTableContext@@QEAA@MPEAVILevel@@UActorUniqueID@@PEAVPlayer@@PEAVActor@@PEBVActorDamageSource@@MV?$AutomaticID@VDimension@@H@@PEBVItemStack@@@Z
    MCAPI
    LootTableContext(float luck, class ILevel* level, struct ActorUniqueID, class Player* player, class Actor*, class ActorDamageSource const* deathSource, float explosionRadius, DimensionType dimensionId, class ItemStack const*);

    // symbol: ?getKillerEntity@LootTableContext@@QEBAPEAVActor@@XZ
    MCAPI class Actor* getKillerEntity() const;

    // symbol: ?getLevel@LootTableContext@@QEBAPEAVLevel@@XZ
    MCAPI class Level* getLevel() const;

    // symbol: ?removeVisitedTable@LootTableContext@@QEAAXPEBVLootTable@@@Z
    MCAPI void removeVisitedTable(class LootTable const* table);

    // symbol:
    // ?setOriginalItemName@LootTableContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setOriginalItemName(std::string const&);

    // symbol: ??1LootTableContext@@QEAA@XZ
    MCAPI ~LootTableContext();

    // NOLINTEND
};
