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
class HashedString;
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
    // prevent constructor by default
    DwellerComponent& operator=(DwellerComponent const&);
    DwellerComponent(DwellerComponent const&);
    DwellerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _isLockedInToProfession(::Actor const& owner) const;

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;

    MCNAPI void fixupProfession(::Actor const& owner, ::Village* village);

    MCNAPI ::std::weak_ptr<::Village> const getVillage(::Actor const& owner) const;

    MCNAPI ::BlockPos getVillageCenter(::Actor const& owner) const;

    MCNAPI bool hasPreferredProfession(::Actor const& owner) const;

    MCNAPI void initFromDefinition(::Actor& owner);

    MCNAPI bool isWithinRestriction(::Actor const& owner) const;

    MCNAPI bool needsToFixupJobSite(::Actor const& owner) const;

    MCNAPI bool needsToFixupProfession(::Actor const& owner) const;

    MCNAPI void onDeath(::Actor& owner, ::ActorDamageSource const& source);

    MCNAPI void onRemove(::Actor& owner);

    MCNAPI ::DwellerComponent& operator=(::DwellerComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const& owner, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void setDwellingUniqueID(::Actor& owner, ::mce::UUID id);

    MCNAPI void setLastHurtByMob(::Actor& owner, ::Mob* mob);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<::std::string, ::DwellerRole> const& DWELLING_ROLES();

    MCNAPI static ::std::unordered_map<::std::string, ::DwellerComponent::DwellingType> const& DWELLING_TYPES();
    // NOLINTEND
};
