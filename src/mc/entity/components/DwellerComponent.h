#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DwellerRole.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class DwellerComponent {
public:
    // DwellerComponent inner types define
    enum class DwellingType {};

public:
    // prevent constructor by default
    DwellerComponent& operator=(DwellerComponent const&);
    DwellerComponent(DwellerComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ?DecrementDwellingUpdateInterval@DwellerComponent@@QEAAXXZ
    MCAPI void DecrementDwellingUpdateInterval();

    // symbol: ??0DwellerComponent@@QEAA@XZ
    MCAPI DwellerComponent();

    // symbol: ??0DwellerComponent@@QEAA@$$QEAV0@@Z
    MCAPI DwellerComponent(class DwellerComponent&&);

    // symbol: ?addAdditionalSaveData@DwellerComponent@@QEBAXAEAVCompoundTag@@AEBVActor@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag, class Actor const& owner) const;

    // symbol: ?checkandUpdateDwellingStatus@DwellerComponent@@QEAAXAEBVActor@@PEAVVillage@@@Z
    MCAPI void checkandUpdateDwellingStatus(class Actor const& owner, class Village* myVillage);

    // symbol: ?clearPreferredProfession@DwellerComponent@@QEAAXXZ
    MCAPI void clearPreferredProfession();

    // symbol: ?fixupProfession@DwellerComponent@@QEAAXAEBVActor@@PEAVVillage@@@Z
    MCAPI void fixupProfession(class Actor const& owner, class Village* village);

    // symbol: ?getCanFindPOI@DwellerComponent@@QEBA_NXZ
    MCAPI bool getCanFindPOI() const;

    // symbol: ?getDwellerRole@DwellerComponent@@QEBA?AW4DwellerRole@@XZ
    MCAPI ::DwellerRole getDwellerRole() const;

    // symbol: ?getDwellingUniqueID@DwellerComponent@@QEBA?AVUUID@mce@@XZ
    MCAPI class mce::UUID getDwellingUniqueID() const;

    // symbol: ?getDwellingUpdateInterval@DwellerComponent@@QEBA_KXZ
    MCAPI uint64 getDwellingUpdateInterval() const;

    // symbol: ?getFixUpRole@DwellerComponent@@QEBA_NXZ
    MCAPI bool getFixUpRole() const;

    // symbol: ?getPreferredProfession@DwellerComponent@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getPreferredProfession() const;

    // symbol: ?getUpdateIntervalBase@DwellerComponent@@QEBA_KXZ
    MCAPI uint64 getUpdateIntervalBase() const;

    // symbol: ?getUpdateIntervalVariant@DwellerComponent@@QEBAHXZ
    MCAPI int getUpdateIntervalVariant() const;

    // symbol: ?getVillage@DwellerComponent@@QEBA?BV?$weak_ptr@VVillage@@@std@@AEBVActor@@@Z
    MCAPI std::weak_ptr<class Village> const getVillage(class Actor const& owner) const;

    // symbol: ?getVillageCenter@DwellerComponent@@QEBA?AVBlockPos@@AEBVActor@@@Z
    MCAPI class BlockPos getVillageCenter(class Actor const& owner) const;

    // symbol: ?hasDwelling@DwellerComponent@@QEBA_NXZ
    MCAPI bool hasDwelling() const;

    // symbol: ?hasPreferredProfession@DwellerComponent@@QEBA_NAEBVActor@@@Z
    MCAPI bool hasPreferredProfession(class Actor const& owner) const;

    // symbol: ?initFromDefinition@DwellerComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& owner);

    // symbol: ?isWithinRestriction@DwellerComponent@@QEBA_NAEBVActor@@@Z
    MCAPI bool isWithinRestriction(class Actor const& owner) const;

    // symbol: ?needsToFixupJobSite@DwellerComponent@@QEBA_NAEBVActor@@@Z
    MCAPI bool needsToFixupJobSite(class Actor const&) const;

    // symbol: ?needsToFixupProfession@DwellerComponent@@QEBA_NAEBVActor@@@Z
    MCAPI bool needsToFixupProfession(class Actor const& owner) const;

    // symbol: ?needsToFixupVillageRole@DwellerComponent@@QEBA_NAEBVActor@@PEAVVillage@@@Z
    MCAPI bool needsToFixupVillageRole(class Actor const& owner, class Village* myVillage) const;

    // symbol: ?onDeath@DwellerComponent@@QEAAXAEAVActor@@AEBVActorDamageSource@@@Z
    MCAPI void onDeath(class Actor& owner, class ActorDamageSource const& source);

    // symbol: ?onDimensionChange@DwellerComponent@@QEAAXAEAVActor@@@Z
    MCAPI void onDimensionChange(class Actor& owner);

    // symbol: ?onRemove@DwellerComponent@@QEAAXAEAVActor@@@Z
    MCAPI void onRemove(class Actor& owner);

    // symbol: ??4DwellerComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class DwellerComponent& operator=(class DwellerComponent&&);

    // symbol: ?readAdditionalSaveData@DwellerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?setDwellingUniqueID@DwellerComponent@@QEAAXAEAVActor@@VUUID@mce@@@Z
    MCAPI void setDwellingUniqueID(class Actor& owner, class mce::UUID id);

    // symbol: ?setDwellingUpdateInterval@DwellerComponent@@QEAAX_K@Z
    MCAPI void setDwellingUpdateInterval(uint64 updateInterval);

    // symbol: ?setFixUpRole@DwellerComponent@@QEAAX_N@Z
    MCAPI void setFixUpRole(bool fixUpRole);

    // symbol: ?setLastHurtByMob@DwellerComponent@@QEAAXAEAVActor@@PEAVMob@@@Z
    MCAPI void setLastHurtByMob(class Actor& owner, class Mob* mob);

    // symbol: ?trySetPreferredProfession@DwellerComponent@@QEAA_NAEBVActor@@AEBVHashedString@@@Z
    MCAPI bool trySetPreferredProfession(class Actor const& owner, class HashedString const& poi);

    // symbol: ?tryToFixupRole@DwellerComponent@@QEAA_NAEBVActor@@PEAVVillage@@@Z
    MCAPI bool tryToFixupRole(class Actor const& owner, class Village* village);

    // symbol: ?tryToMigrate@DwellerComponent@@QEAA_NAEAVActor@@PEAVVillage@@1@Z
    MCAPI bool tryToMigrate(class Actor& owner, class Village* oldVillage, class Village* newVillage);

    // symbol: ?wantsToMigrate@DwellerComponent@@QEBA_NAEBVActor@@PEAVVillage@@@Z
    MCAPI bool wantsToMigrate(class Actor const& owner, class Village* myVillage) const;

    // symbol: ??1DwellerComponent@@QEAA@XZ
    MCAPI ~DwellerComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isLockedInToProfession@DwellerComponent@@AEBA_NAEBVActor@@@Z
    MCAPI bool _isLockedInToProfession(class Actor const& owner) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?DWELLING_ROLES@DwellerComponent@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellerRole@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellerRole@@@std@@@2@@std@@B
    MCAPI static std::unordered_map<std::string, ::DwellerRole> const DWELLING_ROLES;

    // symbol:
    // ?DWELLING_TYPES@DwellerComponent@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellingType@DwellerComponent@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellingType@DwellerComponent@@@std@@@2@@std@@B
    MCAPI static std::unordered_map<std::string, ::DwellerComponent::DwellingType> const DWELLING_TYPES;

    // NOLINTEND
};
