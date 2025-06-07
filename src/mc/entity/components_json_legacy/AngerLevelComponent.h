#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFilterGroup;
class CompoundTag;
class ILevel;
struct ActorUniqueID;
struct Tick;
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
    struct Nuisance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk87b9a2;
        ::ll::UntypedStorage<4, 4> mUnk9415a7;
        ::ll::UntypedStorage<1, 1> mUnka6bff1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Nuisance& operator=(Nuisance const&);
        Nuisance(Nuisance const&);
        Nuisance();
    };

    struct NuisanceCompare {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk927449;
        // NOLINTEND

    public:
        // prevent constructor by default
        NuisanceCompare& operator=(NuisanceCompare const&);
        NuisanceCompare(NuisanceCompare const&);
        NuisanceCompare();
    };

    using ActorNuisance = ::std::pair<::Actor*, int>;

    struct ConditionalSound {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk9863dc;
        ::ll::UntypedStorage<8, 16> mUnkf71226;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConditionalSound& operator=(ConditionalSound const&);
        ConditionalSound(ConditionalSound const&);
        ConditionalSound();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ConditionalSound();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

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
    // prevent constructor by default
    AngerLevelComponent& operator=(AngerLevelComponent const&);
    AngerLevelComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AngerLevelComponent(::AngerLevelComponent&&);

    MCNAPI AngerLevelComponent(::AngerLevelComponent const&);

    MCNAPI void _createOrModifyAngerLevel(::Actor const& nuisanceSource, ::std::function<int(int)> const& modifyingFn);

    MCNAPI ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> _getListeningSoundEvent(::Actor& actor) const;

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI bool belowAngryThreshold(::ActorUniqueID id) const;

    MCNAPI bool canBeNuisance(::Actor* owner, ::Actor* target) const;

    MCNAPI ::std::optional<::std::pair<::Actor*, int>>
    getTopActiveNuisance(::Actor* owner, ::ILevel const& level) const;

    MCNAPI ::AngerLevelComponent& operator=(::AngerLevelComponent&&);

    MCNAPI void tick(::Actor* owner, ::ILevel const& level);

    MCNAPI void tryIncreaseAngerAt(::Actor& owner, ::Actor& nuisance, int anger, bool playSounds);

    MCNAPI ~AngerLevelComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_ANGRY_BOOST();

    MCNAPI static int const& DEFAULT_ANGRY_THRESHOLD();

    MCNAPI static int const& DEFAULT_MAX_ANGER_LEVEL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AngerLevelComponent&&);

    MCNAPI void* $ctor(::AngerLevelComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
