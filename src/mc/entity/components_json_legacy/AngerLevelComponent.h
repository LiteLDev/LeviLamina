#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class ILevel;
// clang-format on

class AngerLevelComponent {
public:
    // AngerLevelComponent inner types declare
    // clang-format off
    struct ConditionalSound;
    struct Nuisance;
    struct NuisanceCompare;
    // clang-format on

    // AngerLevelComponent inner types define
    struct ConditionalSound {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
        ::ll::TypedStorage<8, 16, ::ExpressionNode>                      mCondition;
        // NOLINTEND
    };

    struct Nuisance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorUniqueID> mActorId;
        ::ll::TypedStorage<4, 4, int>             mAnger;
        ::ll::TypedStorage<1, 1, uchar>           mPriority;
        // NOLINTEND
    };

    struct NuisanceCompare {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mAngerThreshold;
        // NOLINTEND
    };

    using ActorNuisance = ::std::pair<::Actor*, int>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick>                               mNextAngerDecrementTick;
    ::ll::TypedStorage<4, 4, int>                                  mDefaultAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                                  mDefaultProjectileAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                                  mAngerDecrementIntervalTicks;
    ::ll::TypedStorage<4, 4, int>                                  mMaxAngerLevel;
    ::ll::TypedStorage<4, 4, int>                                  mAngryThreshold;
    ::ll::TypedStorage<1, 1, bool>                                 mRemoveTargetWhenBelowAngryThreshold;
    ::ll::TypedStorage<4, 4, int>                                  mAngryBoost;
    ::ll::TypedStorage<4, 4, int>                                  mTopAnger;
    ::ll::TypedStorage<8, 72, ::std::optional<::ActorFilterGroup>> mNuisanceFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::AngerLevelComponent::ConditionalSound>> mOnIncreaseSoundDefinitions;
    ::ll::TypedStorage<4, 4, ::AngerLevelComponent::NuisanceCompare>                  mNuisanceCompare;
    ::ll::TypedStorage<8, 24, ::std::multiset<::AngerLevelComponent::Nuisance, ::AngerLevelComponent::NuisanceCompare>>
        mNuisances;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _decrementAnger(::Actor* owner, ::ILevel const& level);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI bool belowAngryThreshold(::ActorUniqueID id) const;

    MCAPI bool canBeNuisance(::Actor* owner, ::Actor* target) const;

    MCAPI int getAngerForAnimations(::Actor& owner) const;

    MCAPI ::std::optional<::std::pair<::Actor*, int>> getTopActiveNuisance(::Actor* owner, ::ILevel const& level) const;

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void tryIncreaseAngerAt(::Actor& owner, ::Actor& nuisance, int anger, bool playSounds);

    MCAPI ~AngerLevelComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
