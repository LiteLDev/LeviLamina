/**
 * @file  LootTableContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1726879033
     * @symbol ??0LootTableContext@@QEAA@MPEAVILevel@@UActorUniqueID@@PEAVPlayer@@PEAVActor@@PEBVActorDamageSource@@MV?$AutomaticID@VDimension@@H@@PEBVItemStack@@@Z
     */
    MCAPI LootTableContext(float, class ILevel *, struct ActorUniqueID, class Player *, class Actor *, class ActorDamageSource const *, float, class AutomaticID<class Dimension, int>, class ItemStack const *);
    /**
     * @hash   1103484590
     * @symbol ?addVisitedTable@LootTableContext@@QEAA_NPEBVLootTable@@@Z
     */
    MCAPI bool addVisitedTable(class LootTable const *);
    /**
     * @hash   -1679468752
     * @symbol ?getDimensionId@LootTableContext@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   85613110
     * @symbol ?getEntity@LootTableContext@@QEBAPEAVActor@@W4ActorTarget@@@Z
     */
    MCAPI class Actor * getEntity(enum ActorTarget) const;
    /**
     * @hash   701065670
     * @symbol ?getExplosionRadius@LootTableContext@@QEBAMXZ
     */
    MCAPI float getExplosionRadius() const;
    /**
     * @hash   827588743
     * @symbol ?getKilledEntity@LootTableContext@@QEBAPEAVActor@@XZ
     */
    MCAPI class Actor * getKilledEntity() const;
    /**
     * @hash   -228702905
     * @symbol ?getKillerEntity@LootTableContext@@QEBAPEAVActor@@XZ
     */
    MCAPI class Actor * getKillerEntity() const;
    /**
     * @hash   1663782841
     * @symbol ?getKillerPet@LootTableContext@@QEBAPEAVActor@@XZ
     */
    MCAPI class Actor * getKillerPet() const;
    /**
     * @hash   301563911
     * @symbol ?getKillerPlayer@LootTableContext@@QEBAPEAVActor@@XZ
     */
    MCAPI class Actor * getKillerPlayer() const;
    /**
     * @hash   -1340597253
     * @symbol ?getLevel@LootTableContext@@QEBAPEAVLevel@@XZ
     */
    MCAPI class Level * getLevel() const;
    /**
     * @hash   29299556
     * @symbol ?getLuck@LootTableContext@@QEBAMXZ
     */
    MCAPI float getLuck() const;
    /**
     * @hash   710430646
     * @symbol ?getOriginalItemName@LootTableContext@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getOriginalItemName() const;
    /**
     * @hash   1386804311
     * @symbol ?getThisEntity@LootTableContext@@QEBAPEAVActor@@XZ
     */
    MCAPI class Actor * getThisEntity() const;
    /**
     * @hash   -481733549
     * @symbol ?getTool@LootTableContext@@QEBAPEBVItemStack@@XZ
     */
    MCAPI class ItemStack const * getTool() const;
    /**
     * @hash   1617887793
     * @symbol ?removeVisitedTable@LootTableContext@@QEAAXPEBVLootTable@@@Z
     */
    MCAPI void removeVisitedTable(class LootTable const *);
    /**
     * @hash   -467146482
     * @symbol ?setOriginalItemName@LootTableContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setOriginalItemName(std::string const &);
    /**
     * @hash   381071875
     * @symbol ??1LootTableContext@@QEAA@XZ
     */
    MCAPI ~LootTableContext();

};