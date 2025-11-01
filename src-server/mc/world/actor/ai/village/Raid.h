#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class Raid {
public:
    // Raid inner types define
    using GroupNumberType = uchar;
    
    using RaiderCountType = uchar;
    
    using FailureCountType = uchar;
    
    using CallbackCallCountType = uint64;
    
    using DurationType = int;
    
    using ActorIDCollection = ::std::unordered_set<::ActorUniqueID>;
    
    using PickSpawnPointCallback = ::std::function<bool(uint64, ::Vec3&)>;
    
    using SpawnGroupCallback = ::std::function<bool(uint64, ::Vec3, uchar, ::std::unordered_set<::ActorUniqueID>&)>;
    
    using DoesActorExistCallback = ::std::function<bool(::ActorUniqueID const&)>;
    
    using ApplyHeroOfTheVillageCallback = ::std::function<void(::ActorUniqueID const&)>;
    
    using ActorRemovedFromRaidCallback = ::std::function<void(::ActorUniqueID const&)>;
    
    using IsVillageDefeatedCallback = ::std::function<bool()>;
    
    using NotificationCallback = ::std::function<void(::Raid const&)>;
    
    using RaiderHealthCallback = ::std::function<float(::ActorUniqueID const&)>;
    
    enum class RaidState : int {
        PreparingGroup = 0,
        PickingSpawnPoint = 1,
        SpawningGroup = 2,
        GroupInPlay = 3,
        AwardingRewards = 4,
        Finished = 5,
        Stopped = 6,
    };
    
    enum class RaidStatus : int {
        Ongoing = 0,
        Victory = 1,
        Defeat = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Raid::RaidState> mCurrentRaidState;
    ::ll::TypedStorage<4, 4, ::Raid::RaidStatus> mRaidStatus;
    ::ll::TypedStorage<1, 1, uchar> mCurrentGroupNumber;
    ::ll::TypedStorage<1, 1, uchar> mNumGroupsInRaid;
    ::ll::TypedStorage<8, 8, ::Tick> mGameTick;
    ::ll::TypedStorage<8, 8, ::Tick> mTicksInState;
    ::ll::TypedStorage<4, 4, int> mRaidPreparationTime;
    ::ll::TypedStorage<4, 4, int const> mGroupCompleteDelay;
    ::ll::TypedStorage<4, 4, int> mTicksUntilGroupComplete;
    ::ll::TypedStorage<4, 4, int const> mLocationHelpDelay;
    ::ll::TypedStorage<4, 4, int> mTicksUntilLocationHelp;
    ::ll::TypedStorage<4, 4, int const> mFinishedDelay;
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentGroupSpawnPoint;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mRaiders;
    ::ll::TypedStorage<1, 1, uchar> mNumRaidersSpawnedInCurrentGroup;
    ::ll::TypedStorage<4, 4, float> mCurrentGroupTotalMaxHealth;
    ::ll::TypedStorage<1, 1, uchar const> mAllowedSpawnFailures;
    ::ll::TypedStorage<1, 1, uchar> mSpawnFailures;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mHeroesOfTheVillage;
    ::ll::TypedStorage<8, 64, ::std::function<bool(uint64, ::Vec3&)> const> mPickSpawnPointCallback;
    ::ll::TypedStorage<8, 64, ::std::function<bool(uint64, ::Vec3, uchar, ::std::unordered_set<::ActorUniqueID>&)> const> mSpawnGroupCallback;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::ActorUniqueID const&)> const> mDoesActorExistCallback;
    ::ll::TypedStorage<8, 64, ::std::function<bool()> const> mIsVillageDefeatedCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Raid const&)>> mOnSpawnPointChosenCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Raid const&)>> mOnGroupSpawnedCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Raid const&)>> mOnAwardRewardsCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Raid const&)>> mOnHelpLocateRaidersCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Raid const&)>> mOnVillageDefeatedCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ActorUniqueID const&)>> mApplyHeroOfTheVillageCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ActorUniqueID const&)>> mOnActorRemovedFromRaidCallback;
    ::ll::TypedStorage<8, 64, ::std::function<float(::ActorUniqueID const&)>> mGetRaiderHealthCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    Raid();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Raid(int raidPreparationTime, int groupCompleteDelayInTicks, int locationHelpDelayInTicks, int finishedDelayInTicks, ::SharedTypes::Legacy::Difficulty difficulty, uchar allowedSpawnFailures, ::std::function<bool(uint64, ::Vec3&)>&& pickSpawnPointCallback, ::std::function<bool(uint64, ::Vec3, uchar, ::std::unordered_set<::ActorUniqueID>&)>&& spawnGroupCallback, ::std::function<bool(::ActorUniqueID const&)>&& doesActorExistCallback, ::std::function<bool()>&& isVillageDefeatedCallback);

    MCAPI float _calcBossBarUsingHealth() const;

    MCAPI float _calcBossBarUsingMobs() const;

    MCAPI float _getTotalRaiderHealth() const;

    MCAPI void _tickGroupInPlay();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI float getBossBarFilledFraction() const;

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag);

    MCAPI void tick(::Tick tick);

    MCAPI ~Raid();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& INVALID_SPAWN_POINT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int raidPreparationTime, int groupCompleteDelayInTicks, int locationHelpDelayInTicks, int finishedDelayInTicks, ::SharedTypes::Legacy::Difficulty difficulty, uchar allowedSpawnFailures, ::std::function<bool(uint64, ::Vec3&)>&& pickSpawnPointCallback, ::std::function<bool(uint64, ::Vec3, uchar, ::std::unordered_set<::ActorUniqueID>&)>&& spawnGroupCallback, ::std::function<bool(::ActorUniqueID const&)>&& doesActorExistCallback, ::std::function<bool()>&& isVillageDefeatedCallback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
