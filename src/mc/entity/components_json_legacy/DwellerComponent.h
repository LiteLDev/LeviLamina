#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components_json_legacy/DwellerRole.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockPos;
class CompoundTag;
class DataLoadHelper;
class Mob;
class Village;
// clang-format on

class DwellerComponent {
public:
    // DwellerComponent inner types define
    enum class DwellingType : int {
        VillageDwelling = 0,
        Count           = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mCanFindPOI;
    ::ll::TypedStorage<1, 1, bool>                             mCanMigrate;
    ::ll::TypedStorage<1, 1, bool>                             mHasJoinedDwelling;
    ::ll::TypedStorage<1, 1, bool>                             mFixUpRole;
    ::ll::TypedStorage<1, 1, bool>                             mRewardPlayersOnFirstFounding;
    ::ll::TypedStorage<8, 48, ::HashedString>                  mPreferredProfession;
    ::ll::TypedStorage<4, 4, int>                              mFirstFoundingReward;
    ::ll::TypedStorage<4, 4, int>                              mUpdateIntervalVariant;
    ::ll::TypedStorage<8, 8, uint64>                           mDwellingUpdateInterval;
    ::ll::TypedStorage<8, 8, uint64>                           mUpdateIntervalBase;
    ::ll::TypedStorage<4, 4, float>                            mDwellingBoundsTolerance;
    ::ll::TypedStorage<4, 4, ::DwellerComponent::DwellingType> mType;
    ::ll::TypedStorage<4, 4, ::DwellerRole>                    mRole;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                     mDwellingUniqueID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void DecrementDwellingUpdateInterval();

    MCAPI DwellerComponent();

    MCAPI ::DwellerRole _getRole(::std::string const& role) const;

    MCAPI ::DwellerComponent::DwellingType _getType(::std::string const& type) const;

    MCAPI bool _isLockedInToProfession(::Actor const& owner) const;

    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;

    MCAPI void checkandUpdateDwellingStatus(::Actor const& owner, ::Village* myVillage);

    MCAPI void clearPreferredProfession();

    MCAPI void fixupProfession(::Actor const& owner, ::Village* village);

    MCFOLD bool getCanFindPOI() const;

    MCFOLD ::DwellerRole getDwellerRole() const;

    MCAPI ::mce::UUID getDwellingUniqueID() const;

    MCFOLD uint64 getDwellingUpdateInterval() const;

    MCFOLD bool getFixUpRole() const;

    MCFOLD ::HashedString const& getPreferredProfession() const;

    MCFOLD uint64 getUpdateIntervalBase() const;

    MCFOLD int getUpdateIntervalVariant() const;

    MCAPI ::std::weak_ptr<::Village> const getVillage(::Actor const& owner) const;

    MCAPI ::BlockPos getVillageCenter(::Actor const& owner) const;

    MCFOLD bool hasDwelling() const;

    MCAPI bool hasPreferredProfession(::Actor const& owner) const;

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI bool isWithinRestriction(::Actor const& owner) const;

    MCAPI bool needsToFixupJobSite(::Actor const& owner) const;

    MCAPI bool needsToFixupProfession(::Actor const& owner) const;

    MCAPI bool needsToFixupVillageRole(::Actor const& owner, ::Village* myVillage) const;

    MCAPI void onDeath(::Actor& owner, ::ActorDamageSource const& source);

    MCAPI void onDimensionChange(::Actor& owner);

    MCAPI void onRemove(::Actor& owner);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void setDwellingUniqueID(::Actor& owner, ::mce::UUID id);

    MCFOLD void setDwellingUpdateInterval(uint64 updateInterval);

    MCFOLD void setFixUpRole(bool fixUpRole);

    MCAPI void setLastHurtByMob(::Actor& owner, ::Mob* mob);

    MCAPI bool trySetPreferredProfession(::Actor const& owner, ::HashedString const& poi);

    MCAPI bool tryToFixupRole(::Actor const& owner, ::Village* village);

    MCAPI bool tryToMigrate(::Actor& owner, ::Village* oldVillage, ::Village* newVillage);

    MCAPI bool wantsToMigrate(::Actor const& owner, ::Village* myVillage) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::DwellerRole> const& DWELLING_ROLES();

    MCAPI static ::std::unordered_map<::std::string, ::DwellerComponent::DwellingType> const& DWELLING_TYPES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
