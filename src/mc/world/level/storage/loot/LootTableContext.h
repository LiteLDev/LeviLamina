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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLECONTEXT_BUILDER
    public:
        Builder& operator=(Builder const&) = delete;
        Builder(Builder const&)            = delete;
        Builder()                          = delete;
#endif

    public:
        /**
         * @symbol ??0Builder\@LootTableContext\@\@QEAA\@PEAVILevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
         */
        MCAPI Builder(class ILevel*, class AutomaticID<class Dimension, int>);
        /**
         * @symbol ?create\@Builder\@LootTableContext\@\@QEBA?AV2\@XZ
         */
        MCAPI class LootTableContext create() const;
        /**
         * @symbol ?withDeathSource\@Builder\@LootTableContext\@\@QEAAAEAV12\@PEBVActorDamageSource\@\@\@Z
         */
        MCAPI class LootTableContext::Builder& withDeathSource(class ActorDamageSource const*);
        /**
         * @symbol ?withExplosionRadius\@Builder\@LootTableContext\@\@QEAAAEAV12\@M\@Z
         */
        MCAPI class LootTableContext::Builder& withExplosionRadius(float);
        /**
         * @symbol ?withKilledActor\@Builder\@LootTableContext\@\@QEAAAEAV12\@PEAVActor\@\@\@Z
         */
        MCAPI class LootTableContext::Builder& withKilledActor(class Actor*);
        /**
         * @symbol ?withKillerPlayer\@Builder\@LootTableContext\@\@QEAAAEAV12\@PEAVPlayer\@\@\@Z
         */
        MCAPI class LootTableContext::Builder& withKillerPlayer(class Player*);
        /**
         * @symbol ?withLuck\@Builder\@LootTableContext\@\@QEAAAEAV12\@M\@Z
         */
        MCAPI class LootTableContext::Builder& withLuck(float);
        /**
         * @symbol ?withThisEntity\@Builder\@LootTableContext\@\@QEAAAEAV12\@PEAVActor\@\@\@Z
         */
        MCAPI class LootTableContext::Builder& withThisEntity(class Actor*);
        /**
         * @symbol ?withTool\@Builder\@LootTableContext\@\@QEAAAEAV12\@PEBVItemStack\@\@\@Z
         */
        MCAPI class LootTableContext::Builder& withTool(class ItemStack const*);
        /**
         * @symbol ??1Builder\@LootTableContext\@\@QEAA\@XZ
         */
        MCAPI ~Builder();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLECONTEXT
public:
    LootTableContext& operator=(LootTableContext const&) = delete;
    LootTableContext(LootTableContext const&)            = delete;
    LootTableContext()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ??0LootTableContext\@\@QEAA\@MPEAVILevel\@\@UActorUniqueID\@\@PEAVPlayer\@\@PEAVActor\@\@PEBVActorDamageSource\@\@MV?$AutomaticID\@VDimension\@\@H\@\@PEBVItemStack\@\@\@Z
     */
    MCAPI
    LootTableContext(float, class ILevel*, struct ActorUniqueID, class Player*, class Actor*, class ActorDamageSource const*, float, class AutomaticID<class Dimension, int>, class ItemStack const*);
    /**
     * @symbol ?getDimensionId\@LootTableContext\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @symbol ?getEntity\@LootTableContext\@\@QEBAPEAVActor\@\@W4ActorTarget\@\@\@Z
     */
    MCAPI class Actor* getEntity(enum class ActorTarget) const;
    /**
     * @symbol ?getKilledEntity\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* getKilledEntity() const;
    /**
     * @symbol ?getKillerEntity\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* getKillerEntity() const;
    /**
     * @symbol ?getKillerPet\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* getKillerPet() const;
    /**
     * @symbol ?getKillerPlayer\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* getKillerPlayer() const;
    /**
     * @symbol ?getLevel\@LootTableContext\@\@QEBAPEAVLevel\@\@XZ
     */
    MCAPI class Level* getLevel() const;
    /**
     * @symbol ?getLuck\@LootTableContext\@\@QEBAMXZ
     */
    MCAPI float getLuck() const;
    /**
     * @symbol
     * ?getOriginalItemName\@LootTableContext\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getOriginalItemName() const;
    /**
     * @symbol ?getThisEntity\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* getThisEntity() const;
    /**
     * @symbol ?getTool\@LootTableContext\@\@QEBAPEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const* getTool() const;
    /**
     * @symbol ?removeVisitedTable\@LootTableContext\@\@QEAAXPEBVLootTable\@\@\@Z
     */
    MCAPI void removeVisitedTable(class LootTable const*);
    /**
     * @symbol
     * ?setOriginalItemName\@LootTableContext\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setOriginalItemName(std::string const&);
    /**
     * @symbol ??1LootTableContext\@\@QEAA\@XZ
     */
    MCAPI ~LootTableContext();
};
