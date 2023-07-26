#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDamageSource {

public:
    // prevent constructor by default
    ActorDamageSource& operator=(ActorDamageSource const&) = delete;
    ActorDamageSource(ActorDamageSource const&)            = delete;
    ActorDamageSource()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isEntitySource\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isEntitySource() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isChildEntitySource\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isChildEntitySource() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?isBlockSource\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isBlockSource() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?isFire\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isFire() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?isReducedByResistanceEffect\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isReducedByResistanceEffect() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?isReducedByEnchantReduction\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isReducedByEnchantReduction() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?isReducedByArmorReduction\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isReducedByArmorReduction() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?isFallingBlockDamage\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isFallingBlockDamage() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?isFallDamage\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isFallDamage() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?getDeathMessage\@ActorDamageSource\@\@UEBA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@PEAVActor\@\@\@Z
     */
    virtual struct std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string, class Actor*) const; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?getIsCreative\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool getIsCreative() const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?getIsWorldBuilder\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool getIsWorldBuilder() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol ?getEntityUniqueID\@ActorDamageSource\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getEntityUniqueID() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?getEntityType\@ActorDamageSource\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityType() const; // NOLINT
    /**
     * @vftbl 15
     * @symbol ?getEntityCategories\@ActorDamageSource\@\@UEBA?AW4ActorCategory\@\@XZ
     */
    virtual enum class ActorCategory getEntityCategories() const; // NOLINT
    /**
     * @vftbl 16
     * @symbol ?getDamagingEntityIsCreative\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool getDamagingEntityIsCreative() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?getDamagingEntityIsWorldBuilder\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool getDamagingEntityIsWorldBuilder() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?getDamagingEntityUniqueID\@ActorDamageSource\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?getDamagingEntityType\@ActorDamageSource\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getDamagingEntityType() const; // NOLINT
    /**
     * @vftbl 20
     * @symbol ?getDamagingEntityCategories\@ActorDamageSource\@\@UEBA?AW4ActorCategory\@\@XZ
     */
    virtual enum class ActorCategory getDamagingEntityCategories() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol
     * ?clone\@ActorDamageSource\@\@UEBA?AV?$unique_ptr\@VActorDamageSource\@\@U?$default_delete\@VActorDamageSource\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const; // NOLINT
    /**
     * @symbol ??0ActorDamageSource\@\@QEAA\@W4ActorDamageCause\@\@\@Z
     */
    MCAPI ActorDamageSource(enum class ActorDamageCause); // NOLINT
    /**
     * @symbol ?getCause\@ActorDamageSource\@\@QEBA?AW4ActorDamageCause\@\@XZ
     */
    MCAPI enum class ActorDamageCause getCause() const; // NOLINT
    /**
     * @symbol ?setCause\@ActorDamageSource\@\@QEAAXW4ActorDamageCause\@\@\@Z
     */
    MCAPI void setCause(enum class ActorDamageCause); // NOLINT
    /**
     * @symbol
     * ?generateDamageCauseCommandEnum\@ActorDamageSource\@\@SA?AV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ActorDamageCause\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ActorDamageCause\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI static std::vector<struct std::pair<std::string, enum class ActorDamageCause>>
    generateDamageCauseCommandEnum(); // NOLINT
    /**
     * @symbol ?isDamageCausedByMob\@ActorDamageSource\@\@SA_NW4ActorDamageCause\@\@\@Z
     */
    MCAPI static bool isDamageCausedByMob(enum class ActorDamageCause); // NOLINT
    /**
     * @symbol
     * ?lookupCause\@ActorDamageSource\@\@SA?AW4ActorDamageCause\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class ActorDamageCause lookupCause(std::string const&); // NOLINT
    /**
     * @symbol
     * ?lookupCauseName\@ActorDamageSource\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ActorDamageCause\@\@\@Z
     */
    MCAPI static std::string const& lookupCauseName(enum class ActorDamageCause); // NOLINT
};
