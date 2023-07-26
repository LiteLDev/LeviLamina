/**
 * @file  LootTableContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootTableContext.
 *
 */
class LootTableContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLECONTEXT
public:
    class LootTableContext& operator=(class LootTableContext const &) = delete;
    LootTableContext(class LootTableContext const &) = delete;
    LootTableContext() = delete;
#endif

public:
    /**
     * @symbol  ??0LootTableContext\@\@QEAA\@MPEAVILevel\@\@UActorUniqueID\@\@PEAVPlayer\@\@PEAVActor\@\@PEBVActorDamageSource\@\@MV?$AutomaticID\@VDimension\@\@H\@\@PEBVItemStack\@\@\@Z
     */
    MCAPI LootTableContext(float, class ILevel *, struct ActorUniqueID, class Player *, class Actor *, class ActorDamageSource const *, float, class AutomaticID<class Dimension, int>, class ItemStack const *);
    /**
     * @symbol  ?addVisitedTable\@LootTableContext\@\@QEAA_NPEBVLootTable\@\@\@Z
     */
    MCAPI bool addVisitedTable(class LootTable const *);
    /**
     * @symbol  ?getDimensionId\@LootTableContext\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @symbol  ?getEntity\@LootTableContext\@\@QEBAPEAVActor\@\@W4ActorTarget\@\@\@Z
     */
    MCAPI class Actor * getEntity(enum class ActorTarget) const;
    /**
     * @symbol  ?getExplosionRadius\@LootTableContext\@\@QEBAMXZ
     */
    MCAPI float getExplosionRadius() const;
    /**
     * @symbol  ?getKilledEntity\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getKilledEntity() const;
    /**
     * @symbol  ?getKillerEntity\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getKillerEntity() const;
    /**
     * @symbol  ?getKillerPet\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getKillerPet() const;
    /**
     * @symbol  ?getKillerPlayer\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getKillerPlayer() const;
    /**
     * @symbol  ?getLevel\@LootTableContext\@\@QEBAPEAVLevel\@\@XZ
     */
    MCAPI class Level * getLevel() const;
    /**
     * @symbol  ?getLuck\@LootTableContext\@\@QEBAMXZ
     */
    MCAPI float getLuck() const;
    /**
     * @symbol  ?getOriginalItemName\@LootTableContext\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getOriginalItemName() const;
    /**
     * @symbol  ?getThisEntity\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getThisEntity() const;
    /**
     * @symbol  ?getTool\@LootTableContext\@\@QEBAPEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const * getTool() const;
    /**
     * @symbol  ?removeVisitedTable\@LootTableContext\@\@QEAAXPEBVLootTable\@\@\@Z
     */
    MCAPI void removeVisitedTable(class LootTable const *);
    /**
     * @symbol  ?setOriginalItemName\@LootTableContext\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setOriginalItemName(std::string const &);
    /**
     * @symbol  ??1LootTableContext\@\@QEAA\@XZ
     */
    MCAPI ~LootTableContext();

};