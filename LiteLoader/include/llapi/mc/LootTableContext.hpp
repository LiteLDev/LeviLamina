/**
 * @file  LootTableContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1698175687
     * @symbol  ??0LootTableContext\@\@QEAA\@MPEAVILevel\@\@UActorUniqueID\@\@PEAVPlayer\@\@PEAVActor\@\@PEBVActorDamageSource\@\@MV?$AutomaticID\@VDimension\@\@H\@\@PEBVItemStack\@\@\@Z
     */
    MCAPI LootTableContext(float, class ILevel *, struct ActorUniqueID, class Player *, class Actor *, class ActorDamageSource const *, float, class AutomaticID<class Dimension, int>, class ItemStack const *);
    /**
     * @hash   1973397166
     * @symbol  ?addVisitedTable\@LootTableContext\@\@QEAA_NPEBVLootTable\@\@\@Z
     */
    MCAPI bool addVisitedTable(class LootTable const *);
    /**
     * @hash   -809556176
     * @symbol  ?getDimensionId\@LootTableContext\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   955525686
     * @symbol  ?getEntity\@LootTableContext\@\@QEBAPEAVActor\@\@W4ActorTarget\@\@\@Z
     */
    MCAPI class Actor * getEntity(enum class ActorTarget) const;
    /**
     * @hash   1570993622
     * @symbol  ?getExplosionRadius\@LootTableContext\@\@QEBAMXZ
     */
    MCAPI float getExplosionRadius() const;
    /**
     * @hash   932591447
     * @symbol  ?getKilledEntity\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getKilledEntity() const;
    /**
     * @hash   641225047
     * @symbol  ?getKillerEntity\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getKillerEntity() const;
    /**
     * @hash   -1761241127
     * @symbol  ?getKillerPet\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getKillerPet() const;
    /**
     * @hash   554960391
     * @symbol  ?getKillerPlayer\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getKillerPlayer() const;
    /**
     * @hash   -1236824629
     * @symbol  ?getLevel\@LootTableContext\@\@QEBAPEAVLevel\@\@XZ
     */
    MCAPI class Level * getLevel() const;
    /**
     * @hash   294827700
     * @symbol  ?getLuck\@LootTableContext\@\@QEBAMXZ
     */
    MCAPI float getLuck() const;
    /**
     * @hash   1580389350
     * @symbol  ?getOriginalItemName\@LootTableContext\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getOriginalItemName() const;
    /**
     * @hash   -2038204281
     * @symbol  ?getThisEntity\@LootTableContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * getThisEntity() const;
    /**
     * @hash   388225155
     * @symbol  ?getTool\@LootTableContext\@\@QEBAPEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const * getTool() const;
    /**
     * @hash   -1807120799
     * @symbol  ?removeVisitedTable\@LootTableContext\@\@QEAAXPEBVLootTable\@\@\@Z
     */
    MCAPI void removeVisitedTable(class LootTable const *);
    /**
     * @hash   402812222
     * @symbol  ?setOriginalItemName\@LootTableContext\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setOriginalItemName(std::string const &);
    /**
     * @hash   600026115
     * @symbol  ??1LootTableContext\@\@QEAA\@XZ
     */
    MCAPI ~LootTableContext();

};