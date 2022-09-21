/**
 * @file  MC/ActorDamageSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class Actor;

enum class ActorDamageCause : int {
    None = -0x01,
    Override = 0x00,
    Contact = 0x01,
    EntityAttack = 0x02,
    Projectile = 0x03,
    Suffocation = 0x04,
    Fall = 0x05,
    Fire = 0x06,
    FireTick = 0x07,
    Lava = 0x08,
    Drowning = 0x09,
    BlockExplosion = 0x0A,
    EntityExplosion = 0x0B,
    Void = 0x0C,
    Suicide = 0x0D,
    Magic = 0x0E,
    Wither = 0x0F,
    Starve = 0x10,
    Anvil = 0x11,
    Thorns = 0x12,
    FallingBlock = 0x13,
    Piston = 0x14,
    FlyIntoWall = 0x15,
    Magma = 0x16,
    Fireworks = 0x17,
    Lightning = 0x18,
    Charging = 0x19,
    Temperature = 0x1A,
    Freezing = 0x1B,
    Stalactite = 0x1C,
    Stalagmite = 0x1D,
    All = 0x1F,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDamageSource.
 *
 */
class ActorDamageSource {

#define AFTER_EXTRA
// Add Member There
    ActorDamageCause mCause;
    char filler[4];

public:
    LIAPI Actor* getEntity();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGESOURCE
public:
    class ActorDamageSource& operator=(class ActorDamageSource const &) = delete;
    ActorDamageSource(class ActorDamageSource const &) = delete;
    ActorDamageSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorDamageSource();
    /**
     * @hash   1436838849
     * @vftbl  1
     * @symbol ?isEntitySource@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool isEntitySource() const;
    /**
     * @hash   1356749289
     * @vftbl  2
     * @symbol ?isChildEntitySource@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool isChildEntitySource() const;
    /**
     * @hash   1478533911
     * @vftbl  3
     * @symbol ?isBlockSource@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool isBlockSource() const;
    /**
     * @hash   752178729
     * @vftbl  4
     * @symbol ?isFire@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool isFire() const;
    /**
     * @hash   1993800798
     * @vftbl  5
     * @symbol ?isReducedByResistanceEffect@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool isReducedByResistanceEffect() const;
    /**
     * @hash   505499966
     * @vftbl  6
     * @symbol ?isReducedByEnchantReduction@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool isReducedByEnchantReduction() const;
    /**
     * @hash   956448744
     * @vftbl  7
     * @symbol ?isReducedByArmorReduction@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool isReducedByArmorReduction() const;
    /**
     * @hash   -1183235064
     * @vftbl  8
     * @symbol ?isFallingBlockDamage@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool isFallingBlockDamage() const;
    /**
     * @hash   -567777411
     * @vftbl  9
     * @symbol ?isFallDamage@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool isFallDamage() const;
    /**
     * @hash   -1889528313
     * @vftbl  10
     * @symbol ?getDeathMessage@ActorDamageSource@@UEBA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAVActor@@@Z
     */
    virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;
    /**
     * @hash   -515082200
     * @vftbl  11
     * @symbol ?getIsCreative@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool getIsCreative() const;
    /**
     * @hash   -1446146462
     * @vftbl  12
     * @symbol ?getIsWorldBuilder@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool getIsWorldBuilder() const;
    /**
     * @hash   1126272303
     * @vftbl  13
     * @symbol ?getEntityUniqueID@ActorDamageSource@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getEntityUniqueID() const;
    /**
     * @hash   499740523
     * @vftbl  14
     * @symbol ?getEntityType@ActorDamageSource@@UEBA?AW4ActorType@@XZ
     */
    virtual enum ActorType getEntityType() const;
    /**
     * @hash   -692219207
     * @vftbl  15
     * @symbol ?getEntityCategories@ActorDamageSource@@UEBA?AW4ActorCategory@@XZ
     */
    virtual enum ActorCategory getEntityCategories() const;
    /**
     * @hash   1572931799
     * @vftbl  16
     * @symbol ?getDamagingEntityIsCreative@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool getDamagingEntityIsCreative() const;
    /**
     * @hash   -1021562991
     * @vftbl  17
     * @symbol ?getDamagingEntityIsWorldBuilder@ActorDamageSource@@UEBA_NXZ
     */
    virtual bool getDamagingEntityIsWorldBuilder() const;
    /**
     * @hash   -669021637
     * @vftbl  18
     * @symbol ?getDamagingEntityUniqueID@ActorDamageSource@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /**
     * @hash   1973690231
     * @vftbl  19
     * @symbol ?getDamagingEntityType@ActorDamageSource@@UEBA?AW4ActorType@@XZ
     */
    virtual enum ActorType getDamagingEntityType() const;
    /**
     * @hash   -1585722939
     * @vftbl  20
     * @symbol ?getDamagingEntityCategories@ActorDamageSource@@UEBA?AW4ActorCategory@@XZ
     */
    virtual enum ActorCategory getDamagingEntityCategories() const;
    /**
     * @hash   -1030103465
     * @vftbl  21
     * @symbol ?clone@ActorDamageSource@@UEBA?AV?$unique_ptr@VActorDamageSource@@U?$default_delete@VActorDamageSource@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const;
    /**
     * @hash   1250691028
     * @symbol ??0ActorDamageSource@@QEAA@W4ActorDamageCause@@@Z
     */
    MCAPI ActorDamageSource(enum ActorDamageCause);
    /**
     * @hash   1194149472
     * @symbol ?getCause@ActorDamageSource@@QEBA?AW4ActorDamageCause@@XZ
     */
    MCAPI enum ActorDamageCause getCause() const;
    /**
     * @hash   1954879882
     * @symbol ?setCause@ActorDamageSource@@QEAAXW4ActorDamageCause@@@Z
     */
    MCAPI void setCause(enum ActorDamageCause);
    /**
     * @hash   -2115435175
     * @symbol ?generateDamageCauseCommandEnum@ActorDamageSource@@SA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@std@@@2@@std@@XZ
     */
    MCAPI static std::vector<struct std::pair<std::string, enum ActorDamageCause>> generateDamageCauseCommandEnum();
    /**
     * @hash   1793163583
     * @symbol ?isDamageCausedByMob@ActorDamageSource@@SA_NW4ActorDamageCause@@@Z
     */
    MCAPI static bool isDamageCausedByMob(enum ActorDamageCause);
    /**
     * @hash   -25597523
     * @symbol ?lookupCause@ActorDamageSource@@SA?AW4ActorDamageCause@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static enum ActorDamageCause lookupCause(std::string const &);
    /**
     * @hash   1512723741
     * @symbol ?lookupCauseName@ActorDamageSource@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@Z
     */
    MCAPI static std::string const & lookupCauseName(enum ActorDamageCause);

};