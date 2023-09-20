/**
 * @file  DwellerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DwellerComponent.
 *
 */
class DwellerComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum class DwellingType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DWELLERCOMPONENT
public:
    class DwellerComponent& operator=(class DwellerComponent const &) = delete;
    DwellerComponent(class DwellerComponent const &) = delete;
#endif

public:
    /**
     * @symbol ?DecrementDwellingUpdateInterval\@DwellerComponent\@\@QEAAXXZ
     */
    MCAPI void DecrementDwellingUpdateInterval();
    /**
     * @symbol ??0DwellerComponent\@\@QEAA\@XZ
     */
    MCAPI DwellerComponent();
    /**
     * @symbol ??0DwellerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DwellerComponent(class DwellerComponent &&);
    /**
     * @symbol ?addAdditionalSaveData\@DwellerComponent\@\@QEBAXAEAVCompoundTag\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &, class Actor const &) const;
    /**
     * @symbol ?checkandUpdateDwellingStatus\@DwellerComponent\@\@QEAAXAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI void checkandUpdateDwellingStatus(class Actor const &, class Village *);
    /**
     * @symbol ?clearPreferredProfession\@DwellerComponent\@\@QEAAXXZ
     */
    MCAPI void clearPreferredProfession();
    /**
     * @symbol ?fixupProfession\@DwellerComponent\@\@QEAAXAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI void fixupProfession(class Actor const &, class Village *);
    /**
     * @symbol ?getCanFindPOI\@DwellerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanFindPOI() const;
    /**
     * @symbol ?getDwellerRole\@DwellerComponent\@\@QEBA?AW4DwellerRole\@\@XZ
     */
    MCAPI enum class DwellerRole getDwellerRole() const;
    /**
     * @symbol ?getDwellingUniqueID\@DwellerComponent\@\@QEBA?AVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID getDwellingUniqueID() const;
    /**
     * @symbol ?getDwellingUpdateInterval\@DwellerComponent\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getDwellingUpdateInterval() const;
    /**
     * @symbol ?getFixUpRole\@DwellerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getFixUpRole() const;
    /**
     * @symbol ?getPreferredProfession\@DwellerComponent\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getPreferredProfession() const;
    /**
     * @symbol ?getUpdateIntervalBase\@DwellerComponent\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getUpdateIntervalBase() const;
    /**
     * @symbol ?getUpdateIntervalVariant\@DwellerComponent\@\@QEBAHXZ
     */
    MCAPI int getUpdateIntervalVariant() const;
    /**
     * @symbol ?getVillage\@DwellerComponent\@\@QEBA?BV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI class std::weak_ptr<class Village> const getVillage(class Actor const &) const;
    /**
     * @symbol ?getVillageCenter\@DwellerComponent\@\@QEBA?AVBlockPos\@\@AEBVActor\@\@\@Z
     */
    MCAPI class BlockPos getVillageCenter(class Actor const &) const;
    /**
     * @symbol ?hasDwelling\@DwellerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasDwelling() const;
    /**
     * @symbol ?hasPreferredProfession\@DwellerComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool hasPreferredProfession(class Actor const &) const;
    /**
     * @symbol ?initFromDefinition\@DwellerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?isWithinRestriction\@DwellerComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool isWithinRestriction(class Actor const &) const;
    /**
     * @symbol ?needsToFixupProfession\@DwellerComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool needsToFixupProfession(class Actor const &) const;
    /**
     * @symbol ?needsToFixupVillageRole\@DwellerComponent\@\@QEBA_NAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI bool needsToFixupVillageRole(class Actor const &, class Village *) const;
    /**
     * @symbol ?onDeath\@DwellerComponent\@\@QEAAXAEAVActor\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void onDeath(class Actor &, class ActorDamageSource const &);
    /**
     * @symbol ?onDimensionChange\@DwellerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onDimensionChange(class Actor &);
    /**
     * @symbol ?onRemove\@DwellerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onRemove(class Actor &);
    /**
     * @symbol ??4DwellerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DwellerComponent & operator=(class DwellerComponent &&);
    /**
     * @symbol ?readAdditionalSaveData\@DwellerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setDwellingUniqueID\@DwellerComponent\@\@QEAAXAEAVActor\@\@VUUID\@mce\@\@\@Z
     */
    MCAPI void setDwellingUniqueID(class Actor &, class mce::UUID);
    /**
     * @symbol ?setDwellingUpdateInterval\@DwellerComponent\@\@QEAAX_K\@Z
     */
    MCAPI void setDwellingUpdateInterval(unsigned __int64);
    /**
     * @symbol ?setFixUpRole\@DwellerComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setFixUpRole(bool);
    /**
     * @symbol ?setLastHurtByMob\@DwellerComponent\@\@QEAAXAEAVActor\@\@PEAVMob\@\@\@Z
     */
    MCAPI void setLastHurtByMob(class Actor &, class Mob *);
    /**
     * @symbol ?trySetPreferredProfession\@DwellerComponent\@\@QEAA_NAEBVActor\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI bool trySetPreferredProfession(class Actor const &, class HashedString const &);
    /**
     * @symbol ?tryToFixupRole\@DwellerComponent\@\@QEAA_NAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI bool tryToFixupRole(class Actor const &, class Village *);
    /**
     * @symbol ?tryToMigrate\@DwellerComponent\@\@QEAA_NAEAVActor\@\@PEAVVillage\@\@1\@Z
     */
    MCAPI bool tryToMigrate(class Actor &, class Village *, class Village *);
    /**
     * @symbol ?wantsToMigrate\@DwellerComponent\@\@QEBA_NAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI bool wantsToMigrate(class Actor const &, class Village *) const;
    /**
     * @symbol ??1DwellerComponent\@\@QEAA\@XZ
     */
    MCAPI ~DwellerComponent();

//private:
    /**
     * @symbol ?_isLockedInToProfession\@DwellerComponent\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool _isLockedInToProfession(class Actor const &) const;

private:
    /**
     * @symbol ?DWELLING_ROLES\@DwellerComponent\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellerRole\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellerRole\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<std::string, enum class DwellerRole, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class DwellerRole>>> const DWELLING_ROLES;
    /**
     * @symbol ?DWELLING_TYPES\@DwellerComponent\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellingType\@DwellerComponent\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellingType\@DwellerComponent\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<std::string, enum class DwellerComponent::DwellingType, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class DwellerComponent::DwellingType>>> const DWELLING_TYPES;

};
