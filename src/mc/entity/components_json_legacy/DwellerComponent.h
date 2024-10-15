#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/DwellerRole.h"

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
    MCAPI void DecrementDwellingUpdateInterval();

    MCAPI DwellerComponent();

    MCAPI DwellerComponent(class DwellerComponent&&);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag, class Actor const& owner) const;

    MCAPI void checkandUpdateDwellingStatus(class Actor const& owner, class Village* myVillage);

    MCAPI void clearPreferredProfession();

    MCAPI void fixupProfession(class Actor const& owner, class Village* village);

    MCAPI bool getCanFindPOI() const;

    MCAPI ::DwellerRole getDwellerRole() const;

    MCAPI class mce::UUID getDwellingUniqueID() const;

    MCAPI uint64 getDwellingUpdateInterval() const;

    MCAPI bool getFixUpRole() const;

    MCAPI class HashedString const& getPreferredProfession() const;

    MCAPI uint64 getUpdateIntervalBase() const;

    MCAPI int getUpdateIntervalVariant() const;

    MCAPI std::weak_ptr<class Village> const getVillage(class Actor const& owner) const;

    MCAPI class BlockPos getVillageCenter(class Actor const& owner) const;

    MCAPI bool hasDwelling() const;

    MCAPI bool hasPreferredProfession(class Actor const& owner) const;

    MCAPI void initFromDefinition(class Actor& owner);

    MCAPI bool isWithinRestriction(class Actor const& owner) const;

    MCAPI bool needsToFixupJobSite(class Actor const& owner) const;

    MCAPI bool needsToFixupProfession(class Actor const& owner) const;

    MCAPI bool needsToFixupVillageRole(class Actor const& owner, class Village* myVillage) const;

    MCAPI void onDeath(class Actor& owner, class ActorDamageSource const& source);

    MCAPI void onDimensionChange(class Actor& owner);

    MCAPI void onRemove(class Actor& owner);

    MCAPI class DwellerComponent& operator=(class DwellerComponent&&);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void setDwellingUniqueID(class Actor& owner, class mce::UUID id);

    MCAPI void setDwellingUpdateInterval(uint64 updateInterval);

    MCAPI void setFixUpRole(bool fixUpRole);

    MCAPI void setLastHurtByMob(class Actor& owner, class Mob* mob);

    MCAPI bool trySetPreferredProfession(class Actor const& owner, class HashedString const& poi);

    MCAPI bool tryToFixupRole(class Actor const& owner, class Village* village);

    MCAPI bool tryToMigrate(class Actor& owner, class Village* oldVillage, class Village* newVillage);

    MCAPI bool wantsToMigrate(class Actor const& owner, class Village* myVillage) const;

    MCAPI ~DwellerComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isLockedInToProfession(class Actor const& owner) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class DwellerComponent&&);

    MCAPI void dtor$();

    MCAPI static std::unordered_map<std::string, ::DwellerRole> const& DWELLING_ROLES();

    MCAPI static std::unordered_map<std::string, ::DwellerComponent::DwellingType> const& DWELLING_TYPES();

    // NOLINTEND
};
