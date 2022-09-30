/**
 * @file  DwellerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   234508211
     * @symbol ?DecrementDwellingUpdateInterval@DwellerComponent@@QEAAXXZ
     */
    MCAPI void DecrementDwellingUpdateInterval();
    /**
     * @hash   1470275306
     * @symbol ??0DwellerComponent@@QEAA@XZ
     */
    MCAPI DwellerComponent();
    /**
     * @hash   1058478693
     * @symbol ??0DwellerComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI DwellerComponent(class DwellerComponent &&);
    /**
     * @hash   -758615063
     * @symbol ?addAdditionalSaveData@DwellerComponent@@QEBAXAEAVCompoundTag@@AEBVActor@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &, class Actor const &) const;
    /**
     * @hash   -1638504464
     * @symbol ?checkandUpdateDwellingStatus@DwellerComponent@@QEAAXAEBVActor@@PEAVVillage@@@Z
     */
    MCAPI void checkandUpdateDwellingStatus(class Actor const &, class Village *);
    /**
     * @hash   -1496277419
     * @symbol ?clearPreferredProfession@DwellerComponent@@QEAAXXZ
     */
    MCAPI void clearPreferredProfession();
    /**
     * @hash   1367102894
     * @symbol ?fixupProfession@DwellerComponent@@QEAAXAEBVActor@@PEAVVillage@@@Z
     */
    MCAPI void fixupProfession(class Actor const &, class Village *);
    /**
     * @hash   -63558846
     * @symbol ?getCanFindPOI@DwellerComponent@@QEBA_NXZ
     */
    MCAPI bool getCanFindPOI() const;
    /**
     * @hash   2127996432
     * @symbol ?getDwellerRole@DwellerComponent@@QEBA?AW4DwellerRole@@XZ
     */
    MCAPI enum class DwellerRole getDwellerRole() const;
    /**
     * @hash   -225875894
     * @symbol ?getDwellingUniqueID@DwellerComponent@@QEBA?AVUUID@mce@@XZ
     */
    MCAPI class mce::UUID getDwellingUniqueID() const;
    /**
     * @hash   -483466553
     * @symbol ?getDwellingUpdateInterval@DwellerComponent@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getDwellingUpdateInterval() const;
    /**
     * @hash   1341313410
     * @symbol ?getFixUpRole@DwellerComponent@@QEBA_NXZ
     */
    MCAPI bool getFixUpRole() const;
    /**
     * @hash   -1380509920
     * @symbol ?getPreferredProfession@DwellerComponent@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getPreferredProfession() const;
    /**
     * @hash   -1603212919
     * @symbol ?getUpdateIntervalBase@DwellerComponent@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getUpdateIntervalBase() const;
    /**
     * @hash   -1720970552
     * @symbol ?getUpdateIntervalVariant@DwellerComponent@@QEBAHXZ
     */
    MCAPI int getUpdateIntervalVariant() const;
    /**
     * @hash   -2007558506
     * @symbol ?getVillage@DwellerComponent@@QEBA?BV?$weak_ptr@VVillage@@@std@@AEBVActor@@@Z
     */
    MCAPI class std::weak_ptr<class Village> const getVillage(class Actor const &) const;
    /**
     * @hash   -218142089
     * @symbol ?getVillageCenter@DwellerComponent@@QEBA?AVBlockPos@@AEBVActor@@@Z
     */
    MCAPI class BlockPos getVillageCenter(class Actor const &) const;
    /**
     * @hash   179677768
     * @symbol ?hasDwelling@DwellerComponent@@QEBA_NXZ
     */
    MCAPI bool hasDwelling() const;
    /**
     * @hash   580032353
     * @symbol ?hasPreferredProfession@DwellerComponent@@QEBA_NAEBVActor@@@Z
     */
    MCAPI bool hasPreferredProfession(class Actor const &) const;
    /**
     * @hash   1157710554
     * @symbol ?initFromDefinition@DwellerComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   2077972215
     * @symbol ?isWithinRestriction@DwellerComponent@@QEBA_NAEBVActor@@@Z
     */
    MCAPI bool isWithinRestriction(class Actor const &) const;
    /**
     * @hash   1225848335
     * @symbol ?needsToFixupProfession@DwellerComponent@@QEBA_NAEBVActor@@@Z
     */
    MCAPI bool needsToFixupProfession(class Actor const &) const;
    /**
     * @hash   1477951347
     * @symbol ?needsToFixupVillageRole@DwellerComponent@@QEBA_NAEBVActor@@PEAVVillage@@@Z
     */
    MCAPI bool needsToFixupVillageRole(class Actor const &, class Village *) const;
    /**
     * @hash   1965754467
     * @symbol ?onDeath@DwellerComponent@@QEAAXAEAVActor@@AEBVActorDamageSource@@@Z
     */
    MCAPI void onDeath(class Actor &, class ActorDamageSource const &);
    /**
     * @hash   464380812
     * @symbol ?onDimensionChange@DwellerComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void onDimensionChange(class Actor &);
    /**
     * @hash   831249194
     * @symbol ?onRemove@DwellerComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void onRemove(class Actor &);
    /**
     * @hash   -1795065672
     * @symbol ??4DwellerComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class DwellerComponent & operator=(class DwellerComponent &&);
    /**
     * @hash   -1242536074
     * @symbol ?readAdditionalSaveData@DwellerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -437478983
     * @symbol ?setDwellingUniqueID@DwellerComponent@@QEAAXAEAVActor@@VUUID@mce@@@Z
     */
    MCAPI void setDwellingUniqueID(class Actor &, class mce::UUID);
    /**
     * @hash   -64187581
     * @symbol ?setDwellingUpdateInterval@DwellerComponent@@QEAAX_K@Z
     */
    MCAPI void setDwellingUpdateInterval(unsigned __int64);
    /**
     * @hash   -510129038
     * @symbol ?setFixUpRole@DwellerComponent@@QEAAX_N@Z
     */
    MCAPI void setFixUpRole(bool);
    /**
     * @hash   -2119473580
     * @symbol ?setLastHurtByMob@DwellerComponent@@QEAAXAEAVActor@@PEAVMob@@@Z
     */
    MCAPI void setLastHurtByMob(class Actor &, class Mob *);
    /**
     * @hash   -1448817392
     * @symbol ?trySetPreferredProfession@DwellerComponent@@QEAA_NAEBVActor@@AEBVHashedString@@@Z
     */
    MCAPI bool trySetPreferredProfession(class Actor const &, class HashedString const &);
    /**
     * @hash   -888653299
     * @symbol ?tryToFixupRole@DwellerComponent@@QEAA_NAEBVActor@@PEAVVillage@@@Z
     */
    MCAPI bool tryToFixupRole(class Actor const &, class Village *);
    /**
     * @hash   381799316
     * @symbol ?tryToMigrate@DwellerComponent@@QEAA_NAEAVActor@@PEAVVillage@@1@Z
     */
    MCAPI bool tryToMigrate(class Actor &, class Village *, class Village *);
    /**
     * @hash   174109351
     * @symbol ?wantsToMigrate@DwellerComponent@@QEBA_NAEBVActor@@PEAVVillage@@@Z
     */
    MCAPI bool wantsToMigrate(class Actor const &, class Village *) const;
    /**
     * @hash   2036457240
     * @symbol ??1DwellerComponent@@QEAA@XZ
     */
    MCAPI ~DwellerComponent();

//private:
    /**
     * @hash   1515785372
     * @symbol ?_isLockedInToProfession@DwellerComponent@@AEBA_NAEBVActor@@@Z
     */
    MCAPI bool _isLockedInToProfession(class Actor const &) const;

private:
    /**
     * @hash   -199478915
     * @symbol ?DWELLING_ROLES@DwellerComponent@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellerRole@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellerRole@@@std@@@2@@std@@B
     */
    MCAPI static class std::unordered_map<std::string, enum class DwellerRole, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class DwellerRole>>> const DWELLING_ROLES;
    /**
     * @hash   -416843163
     * @symbol ?DWELLING_TYPES@DwellerComponent@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellingType@DwellerComponent@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellingType@DwellerComponent@@@std@@@2@@std@@B
     */
    MCAPI static class std::unordered_map<std::string, enum class DwellerComponent::DwellingType, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class DwellerComponent::DwellingType>>> const DWELLING_TYPES;

};