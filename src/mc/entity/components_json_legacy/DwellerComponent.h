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
    // prevent constructor by default
    DwellerComponent& operator=(DwellerComponent const&);
    DwellerComponent(DwellerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isLockedInToProfession(::Actor const& owner) const;

    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;

    MCAPI void fixupProfession(::Actor const& owner, ::Village* village);

    MCAPI ::std::weak_ptr<::Village> const getVillage(::Actor const& owner) const;

    MCAPI ::BlockPos getVillageCenter(::Actor const& owner) const;

    MCAPI bool hasPreferredProfession(::Actor const& owner) const;

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI bool isWithinRestriction(::Actor const& owner) const;

    MCAPI bool needsToFixupJobSite(::Actor const& owner) const;

    MCAPI bool needsToFixupProfession(::Actor const& owner) const;

    MCAPI void onDeath(::Actor& owner, ::ActorDamageSource const& source);

    MCAPI void onRemove(::Actor& owner);

    MCAPI ::DwellerComponent& operator=(::DwellerComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const& owner, ::DataLoadHelper& dataLoadHelper);

    MCAPI void setDwellingUniqueID(::Actor& owner, ::mce::UUID id);

    MCAPI void setLastHurtByMob(::Actor& owner, ::Mob* mob);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::DwellerRole> const& DWELLING_ROLES();

    MCAPI static ::std::unordered_map<::std::string, ::DwellerComponent::DwellingType> const& DWELLING_TYPES();
    // NOLINTEND
};
