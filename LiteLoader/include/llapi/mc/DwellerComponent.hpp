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
     * @hash   -617291437
     * @symbol  ?DecrementDwellingUpdateInterval\@DwellerComponent\@\@QEAAXXZ
     */
    MCAPI void DecrementDwellingUpdateInterval();
    /**
     * @hash   618475658
     * @symbol  ??0DwellerComponent\@\@QEAA\@XZ
     */
    MCAPI DwellerComponent();
    /**
     * @hash   1273635061
     * @symbol  ??0DwellerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DwellerComponent(class DwellerComponent &&);
    /**
     * @hash   -1610414711
     * @symbol  ?addAdditionalSaveData\@DwellerComponent\@\@QEBAXAEAVCompoundTag\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &, class Actor const &) const;
    /**
     * @hash   1804693936
     * @symbol  ?checkandUpdateDwellingStatus\@DwellerComponent\@\@QEAAXAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI void checkandUpdateDwellingStatus(class Actor const &, class Village *);
    /**
     * @hash   1946920981
     * @symbol  ?clearPreferredProfession\@DwellerComponent\@\@QEAAXXZ
     */
    MCAPI void clearPreferredProfession();
    /**
     * @hash   515333998
     * @symbol  ?fixupProfession\@DwellerComponent\@\@QEAAXAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI void fixupProfession(class Actor const &, class Village *);
    /**
     * @hash   68321106
     * @symbol  ?getCanFindPOI\@DwellerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanFindPOI() const;
    /**
     * @hash   1276227536
     * @symbol  ?getDwellerRole\@DwellerComponent\@\@QEBA?AW4DwellerRole\@\@XZ
     */
    MCAPI enum class DwellerRole getDwellerRole() const;
    /**
     * @hash   -1077644790
     * @symbol  ?getDwellingUniqueID\@DwellerComponent\@\@QEBA?AVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID getDwellingUniqueID() const;
    /**
     * @hash   -1335235449
     * @symbol  ?getDwellingUpdateInterval\@DwellerComponent\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getDwellingUpdateInterval() const;
    /**
     * @hash   489544514
     * @symbol  ?getFixUpRole\@DwellerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getFixUpRole() const;
    /**
     * @hash   -1283887136
     * @symbol  ?getPreferredProfession\@DwellerComponent\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getPreferredProfession() const;
    /**
     * @hash   -1503407303
     * @symbol  ?getUpdateIntervalBase\@DwellerComponent\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getUpdateIntervalBase() const;
    /**
     * @hash   -1449614904
     * @symbol  ?getUpdateIntervalVariant\@DwellerComponent\@\@QEBAHXZ
     */
    MCAPI int getUpdateIntervalVariant() const;
    /**
     * @hash   1435639894
     * @symbol  ?getVillage\@DwellerComponent\@\@QEBA?BV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI class std::weak_ptr<class Village> const getVillage(class Actor const &) const;
    /**
     * @hash   -1069910985
     * @symbol  ?getVillageCenter\@DwellerComponent\@\@QEBA?AVBlockPos\@\@AEBVActor\@\@\@Z
     */
    MCAPI class BlockPos getVillageCenter(class Actor const &) const;
    /**
     * @hash   -672075752
     * @symbol  ?hasDwelling\@DwellerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasDwelling() const;
    /**
     * @hash   -271721167
     * @symbol  ?hasPreferredProfession\@DwellerComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool hasPreferredProfession(class Actor const &) const;
    /**
     * @hash   305957034
     * @symbol  ?initFromDefinition\@DwellerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   1226341703
     * @symbol  ?isWithinRestriction\@DwellerComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool isWithinRestriction(class Actor const &) const;
    /**
     * @hash   374248575
     * @symbol  ?needsToFixupProfession\@DwellerComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool needsToFixupProfession(class Actor const &) const;
    /**
     * @hash   626351587
     * @symbol  ?needsToFixupVillageRole\@DwellerComponent\@\@QEBA_NAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI bool needsToFixupVillageRole(class Actor const &, class Village *) const;
    /**
     * @hash   1114154707
     * @symbol  ?onDeath\@DwellerComponent\@\@QEAAXAEAVActor\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void onDeath(class Actor &, class ActorDamageSource const &);
    /**
     * @hash   -387188196
     * @symbol  ?onDimensionChange\@DwellerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onDimensionChange(class Actor &);
    /**
     * @hash   -20319814
     * @symbol  ?onRemove\@DwellerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onRemove(class Actor &);
    /**
     * @hash   -1579878552
     * @symbol  ??4DwellerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DwellerComponent & operator=(class DwellerComponent &&);
    /**
     * @hash   -2094074330
     * @symbol  ?readAdditionalSaveData\@DwellerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1289017239
     * @symbol  ?setDwellingUniqueID\@DwellerComponent\@\@QEAAXAEAVActor\@\@VUUID\@mce\@\@\@Z
     */
    MCAPI void setDwellingUniqueID(class Actor &, class mce::UUID);
    /**
     * @hash   -916171741
     * @symbol  ?setDwellingUpdateInterval\@DwellerComponent\@\@QEAAX_K\@Z
     */
    MCAPI void setDwellingUpdateInterval(unsigned __int64);
    /**
     * @hash   -1361621166
     * @symbol  ?setFixUpRole\@DwellerComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setFixUpRole(bool);
    /**
     * @hash   1324001588
     * @symbol  ?setLastHurtByMob\@DwellerComponent\@\@QEAAXAEAVActor\@\@PEAVMob\@\@\@Z
     */
    MCAPI void setLastHurtByMob(class Actor &, class Mob *);
    /**
     * @hash   1994703904
     * @symbol  ?trySetPreferredProfession\@DwellerComponent\@\@QEAA_NAEBVActor\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI bool trySetPreferredProfession(class Actor const &, class HashedString const &);
    /**
     * @hash   -1740099299
     * @symbol  ?tryToFixupRole\@DwellerComponent\@\@QEAA_NAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI bool tryToFixupRole(class Actor const &, class Village *);
    /**
     * @hash   -469646684
     * @symbol  ?tryToMigrate\@DwellerComponent\@\@QEAA_NAEAVActor\@\@PEAVVillage\@\@1\@Z
     */
    MCAPI bool tryToMigrate(class Actor &, class Village *, class Village *);
    /**
     * @hash   -677336649
     * @symbol  ?wantsToMigrate\@DwellerComponent\@\@QEBA_NAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI bool wantsToMigrate(class Actor const &, class Village *) const;
    /**
     * @hash   -345412760
     * @symbol  ??1DwellerComponent\@\@QEAA\@XZ
     */
    MCAPI ~DwellerComponent();

//private:
    /**
     * @hash   663985724
     * @symbol  ?_isLockedInToProfession\@DwellerComponent\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool _isLockedInToProfession(class Actor const &) const;

private:
    /**
     * @hash   910868173
     * @symbol  ?DWELLING_ROLES\@DwellerComponent\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellerRole\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellerRole\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<std::string, enum class DwellerRole, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class DwellerRole>>> const DWELLING_ROLES;
    /**
     * @hash   693503925
     * @symbol  ?DWELLING_TYPES\@DwellerComponent\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellingType\@DwellerComponent\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellingType\@DwellerComponent\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<std::string, enum class DwellerComponent::DwellingType, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class DwellerComponent::DwellingType>>> const DWELLING_TYPES;

};