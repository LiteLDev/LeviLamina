#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct MobDescriptor;
// clang-format on

class SneezeGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mCooldown;
    ::ll::TypedStorage<4, 4, int>                                    mCooldownTimer;
    ::ll::TypedStorage<4, 4, float>                                  mProbability;
    ::ll::TypedStorage<4, 4, int>                                    mPreSneezeTimer;
    ::ll::TypedStorage<4, 4, float>                                  mDropItemChance;
    ::ll::TypedStorage<8, 32, ::std::string>                         mLootTable;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSneezeSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mPreSneezeSound;
    ::ll::TypedStorage<4, 4, float>                                  mPrepareTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor> const>  mReactMobFilters;
    ::ll::TypedStorage<4, 4, float>                                  mReactWithin;
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~SneezeGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SneezeGoal(
        ::Mob&                                mob,
        float                                 cooldownTime,
        float                                 probability,
        float                                 dropItemChance,
        ::std::string const&                  lootTable,
        ::std::string const&                  sneezeSound,
        ::std::string const&                  preSneezeSound,
        float                                 prepareTime,
        ::std::vector<::MobDescriptor> const& reactMobFilters,
        float                                 reactWithin
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                mob,
        float                                 cooldownTime,
        float                                 probability,
        float                                 dropItemChance,
        ::std::string const&                  lootTable,
        ::std::string const&                  sneezeSound,
        ::std::string const&                  preSneezeSound,
        float                                 prepareTime,
        ::std::vector<::MobDescriptor> const& reactMobFilters,
        float                                 reactWithin
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
