#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Vec3;
struct ActorUniqueID;
struct Tick;
// clang-format on

class Raid {
public:
    // Raid inner types define
    enum class RaidState : int {
        PreparingGroup    = 0,
        PickingSpawnPoint = 1,
        SpawningGroup     = 2,
        GroupInPlay       = 3,
        AwardingRewards   = 4,
        Finished          = 5,
        Stopped           = 6,
    };

    enum class RaidStatus : int {
        Ongoing = 0,
        Victory = 1,
        Defeat  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk99e5e3;
    ::ll::UntypedStorage<4, 4>  mUnk7c1013;
    ::ll::UntypedStorage<1, 1>  mUnk4723c3;
    ::ll::UntypedStorage<1, 1>  mUnke2d823;
    ::ll::UntypedStorage<8, 8>  mUnke46c3e;
    ::ll::UntypedStorage<8, 8>  mUnkcfa5b4;
    ::ll::UntypedStorage<4, 4>  mUnk83de3a;
    ::ll::UntypedStorage<4, 4>  mUnk40ce16;
    ::ll::UntypedStorage<4, 4>  mUnk2ae8fa;
    ::ll::UntypedStorage<4, 4>  mUnkd19766;
    ::ll::UntypedStorage<4, 4>  mUnk2a3f58;
    ::ll::UntypedStorage<4, 4>  mUnk482318;
    ::ll::UntypedStorage<4, 12> mUnkd5ce62;
    ::ll::UntypedStorage<8, 64> mUnk5c5707;
    ::ll::UntypedStorage<1, 1>  mUnkc27ec3;
    ::ll::UntypedStorage<4, 4>  mUnke4ebc1;
    ::ll::UntypedStorage<1, 1>  mUnk8b26c8;
    ::ll::UntypedStorage<1, 1>  mUnk575e09;
    ::ll::UntypedStorage<8, 64> mUnk2ffa50;
    ::ll::UntypedStorage<8, 64> mUnke5c0ae;
    ::ll::UntypedStorage<8, 64> mUnkfc7daa;
    ::ll::UntypedStorage<8, 64> mUnk3dac0b;
    ::ll::UntypedStorage<8, 64> mUnk6a04e6;
    ::ll::UntypedStorage<8, 64> mUnkf67541;
    ::ll::UntypedStorage<8, 64> mUnkb0d18d;
    ::ll::UntypedStorage<8, 64> mUnk223348;
    ::ll::UntypedStorage<8, 64> mUnk305f36;
    ::ll::UntypedStorage<8, 64> mUnk95ca13;
    ::ll::UntypedStorage<8, 64> mUnk7b952e;
    ::ll::UntypedStorage<8, 64> mUnkedfc9b;
    ::ll::UntypedStorage<8, 64> mUnkff3266;
    // NOLINTEND

public:
    // prevent constructor by default
    Raid& operator=(Raid const&);
    Raid(Raid const&);
    Raid();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Raid(
        int                                      raidPreparationTime,
        int                                      groupCompleteDelayInTicks,
        int                                      locationHelpDelayInTicks,
        int                                      finishedDelayInTicks,
        ::SharedTypes::Legacy::Difficulty        difficulty,
        uchar                                    allowedSpawnFailures,
        ::std::function<bool(uint64, ::Vec3&)>&& pickSpawnPointCallback,
        ::std::function<bool(uint64, ::Vec3, uchar, ::std::unordered_set<::ActorUniqueID>&)>&& spawnGroupCallback,
        ::std::function<bool(::ActorUniqueID const&)>&&                                        doesActorExistCallback,
        ::std::function<bool()>&&                                                              isVillageDefeatedCallback
    );

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
    MCAPI void* $ctor(
        int                                      raidPreparationTime,
        int                                      groupCompleteDelayInTicks,
        int                                      locationHelpDelayInTicks,
        int                                      finishedDelayInTicks,
        ::SharedTypes::Legacy::Difficulty        difficulty,
        uchar                                    allowedSpawnFailures,
        ::std::function<bool(uint64, ::Vec3&)>&& pickSpawnPointCallback,
        ::std::function<bool(uint64, ::Vec3, uchar, ::std::unordered_set<::ActorUniqueID>&)>&& spawnGroupCallback,
        ::std::function<bool(::ActorUniqueID const&)>&&                                        doesActorExistCallback,
        ::std::function<bool()>&&                                                              isVillageDefeatedCallback
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
