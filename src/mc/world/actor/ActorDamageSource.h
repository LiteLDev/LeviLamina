#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorDamageCause.h"

class ActorDamageSource {

public:
    enum class ActorDamageCause mCause;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isEntitySource\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isEntitySource() const;
    /**
     * @vftbl 2
     * @symbol ?isChildEntitySource\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isChildEntitySource() const;
    /**
     * @vftbl 3
     * @symbol ?isBlockSource\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isBlockSource() const;
    /**
     * @vftbl 4
     * @symbol ?isFire\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isFire() const;
    /**
     * @vftbl 5
     * @symbol ?isReducedByResistanceEffect\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isReducedByResistanceEffect() const;
    /**
     * @vftbl 6
     * @symbol ?isReducedByEnchantReduction\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isReducedByEnchantReduction() const;
    /**
     * @vftbl 7
     * @symbol ?isReducedByArmorReduction\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isReducedByArmorReduction() const;
    /**
     * @vftbl 8
     * @symbol ?isFallingBlockDamage\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isFallingBlockDamage() const;
    /**
     * @vftbl 9
     * @symbol ?isFallDamage\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool isFallDamage() const;
    /**
     * @vftbl 10
     * @symbol
     * ?getDeathMessage\@ActorDamageSource\@\@UEBA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@PEAVActor\@\@\@Z
     */
    virtual std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor*) const;
    /**
     * @vftbl 11
     * @symbol ?getIsCreative\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool getIsCreative() const;
    /**
     * @vftbl 12
     * @symbol ?getIsWorldBuilder\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool getIsWorldBuilder() const;
    /**
     * @vftbl 13
     * @symbol ?getEntityUniqueID\@ActorDamageSource\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getEntityUniqueID() const;
    /**
     * @vftbl 14
     * @symbol ?getEntityType\@ActorDamageSource\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityType() const;
    /**
     * @vftbl 15
     * @symbol ?getEntityCategories\@ActorDamageSource\@\@UEBA?AW4ActorCategory\@\@XZ
     */
    virtual enum class ActorCategory getEntityCategories() const;
    /**
     * @vftbl 16
     * @symbol ?getDamagingEntityIsCreative\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool getDamagingEntityIsCreative() const;
    /**
     * @vftbl 17
     * @symbol ?getDamagingEntityIsWorldBuilder\@ActorDamageSource\@\@UEBA_NXZ
     */
    virtual bool getDamagingEntityIsWorldBuilder() const;
    /**
     * @vftbl 18
     * @symbol ?getDamagingEntityUniqueID\@ActorDamageSource\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /**
     * @vftbl 19
     * @symbol ?getDamagingEntityType\@ActorDamageSource\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getDamagingEntityType() const;
    /**
     * @vftbl 20
     * @symbol ?getDamagingEntityCategories\@ActorDamageSource\@\@UEBA?AW4ActorCategory\@\@XZ
     */
    virtual enum class ActorCategory getDamagingEntityCategories() const;
    /**
     * @vftbl 21
     * @symbol
     * ?clone\@ActorDamageSource\@\@UEBA?AV?$unique_ptr\@VActorDamageSource\@\@U?$default_delete\@VActorDamageSource\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const;
    /**
     * @symbol ??0ActorDamageSource\@\@QEAA\@W4ActorDamageCause\@\@\@Z
     */
    MCAPI ActorDamageSource(enum class ActorDamageCause);
    /**
     * @symbol ?getCause\@ActorDamageSource\@\@QEBA?AW4ActorDamageCause\@\@XZ
     */
    MCAPI enum class ActorDamageCause getCause() const;
    /**
     * @symbol ?setCause\@ActorDamageSource\@\@QEAAXW4ActorDamageCause\@\@\@Z
     */
    MCAPI void setCause(enum class ActorDamageCause);
    /**
     * @symbol
     * ?generateDamageCauseCommandEnum\@ActorDamageSource\@\@SA?AV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ActorDamageCause\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ActorDamageCause\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI static std::vector<std::pair<std::string, enum class ActorDamageCause>> generateDamageCauseCommandEnum();
    /**
     * @symbol ?isDamageCausedByMob\@ActorDamageSource\@\@SA_NW4ActorDamageCause\@\@\@Z
     */
    MCAPI static bool isDamageCausedByMob(enum class ActorDamageCause);
    /**
     * @symbol
     * ?lookupCause\@ActorDamageSource\@\@SA?AW4ActorDamageCause\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class ActorDamageCause lookupCause(std::string const&);
    /**
     * @symbol
     * ?lookupCauseName\@ActorDamageSource\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ActorDamageCause\@\@\@Z
     */
    MCAPI static std::string const& lookupCauseName(enum class ActorDamageCause);
    // NOLINTEND
};
