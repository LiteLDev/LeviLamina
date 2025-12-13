#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
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
    // prevent constructor by default
    SneezeGoal& operator=(SneezeGoal const&);
    SneezeGoal(SneezeGoal const&);
    SneezeGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~SneezeGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
