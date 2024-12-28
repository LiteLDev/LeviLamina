#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/DwellerRole.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockPos;
class CompoundTag;
class DataLoadHelper;
class HashedString;
class Mob;
class Village;
namespace mce { class UUID; }
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
    ::ll::UntypedStorage<1, 1>  mUnk660a6a;
    ::ll::UntypedStorage<1, 1>  mUnkf674f0;
    ::ll::UntypedStorage<1, 1>  mUnkf07d14;
    ::ll::UntypedStorage<1, 1>  mUnkb37ecd;
    ::ll::UntypedStorage<1, 1>  mUnk9b4fd0;
    ::ll::UntypedStorage<8, 48> mUnk2e55d2;
    ::ll::UntypedStorage<4, 4>  mUnk47c4dd;
    ::ll::UntypedStorage<4, 4>  mUnk8076a1;
    ::ll::UntypedStorage<8, 8>  mUnk79352c;
    ::ll::UntypedStorage<8, 8>  mUnk4e6f5e;
    ::ll::UntypedStorage<4, 4>  mUnk39d5b8;
    ::ll::UntypedStorage<4, 4>  mUnk3c946f;
    ::ll::UntypedStorage<4, 4>  mUnk499c22;
    ::ll::UntypedStorage<8, 16> mUnk339202;
    // NOLINTEND

public:
    // prevent constructor by default
    DwellerComponent& operator=(DwellerComponent const&);
    DwellerComponent(DwellerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void DecrementDwellingUpdateInterval();

    MCAPI DwellerComponent();

    MCAPI bool _isLockedInToProfession(::Actor const& owner) const;

    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;

    MCAPI void checkandUpdateDwellingStatus(::Actor const& owner, ::Village* myVillage);

    MCAPI void clearPreferredProfession();

    MCAPI void fixupProfession(::Actor const& owner, ::Village* village);

    MCAPI bool getCanFindPOI() const;

    MCAPI ::DwellerRole getDwellerRole() const;

    MCAPI ::mce::UUID getDwellingUniqueID() const;

    MCAPI uint64 getDwellingUpdateInterval() const;

    MCAPI bool getFixUpRole() const;

    MCAPI ::HashedString const& getPreferredProfession() const;

    MCAPI uint64 getUpdateIntervalBase() const;

    MCAPI int getUpdateIntervalVariant() const;

    MCAPI ::std::weak_ptr<::Village> const getVillage(::Actor const& owner) const;

    MCAPI ::BlockPos getVillageCenter(::Actor const& owner) const;

    MCAPI bool hasDwelling() const;

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

    MCAPI void setDwellingUpdateInterval(uint64 updateInterval);

    MCAPI void setFixUpRole(bool fixUpRole);

    MCAPI void setLastHurtByMob(::Actor& owner, ::Mob* mob);

    MCAPI bool trySetPreferredProfession(::Actor const& owner, ::HashedString const& poi);

    MCAPI bool tryToFixupRole(::Actor const& owner, ::Village* village);

    MCAPI bool tryToMigrate(::Actor& owner, ::Village* oldVillage, ::Village* newVillage);

    MCAPI bool wantsToMigrate(::Actor const& owner, ::Village* myVillage) const;

    MCAPI ~DwellerComponent();
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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
