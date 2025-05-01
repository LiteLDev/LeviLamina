#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class ExplodeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mFuseLength;
    ::ll::TypedStorage<4, 4, int>                                    mInitialFuseLength;
    ::ll::TypedStorage<4, 4, float>                                  mExplosionPower;
    ::ll::TypedStorage<4, 4, float>                                  mMaxResistance;
    ::ll::TypedStorage<1, 1, bool>                                   mIsFuseLit;
    ::ll::TypedStorage<1, 1, bool>                                   mCausesFire;
    ::ll::TypedStorage<4, 4, float>                                  mDamageScaling;
    ::ll::TypedStorage<1, 1, bool>                                   mBreaksBlocks;
    ::ll::TypedStorage<1, 1, bool>                                   mTogglesBlocks;
    ::ll::TypedStorage<1, 1, bool>                                   mFireAffectedByGriefing;
    ::ll::TypedStorage<1, 1, bool>                                   mDestroyAffectedByGriefing;
    ::ll::TypedStorage<1, 1, bool>                                   mAllowUnderwater;
    ::ll::TypedStorage<1, 1, bool>                                   mRequiresTntExplodeGameRuleEnabled;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackScaling;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::LevelEvent>      mParticleType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEffect;
    ::ll::TypedStorage<1, 1, bool>                                   mNegatesFallDamage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void explode(::Actor& actor, ::Vec3 const& explosionPosition);
    // NOLINTEND
};
