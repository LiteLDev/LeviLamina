#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class ILevel;
struct ActorUniqueID;
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

    struct ConditionalSound {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk9863dc;
        ::ll::UntypedStorage<8, 216> mUnkf71226;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConditionalSound& operator=(ConditionalSound const&);
        ConditionalSound(ConditionalSound const&);
        ConditionalSound();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ConditionalSound();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkcebbd5;
    ::ll::UntypedStorage<4, 4>  mUnkc4f740;
    ::ll::UntypedStorage<4, 4>  mUnk96ec96;
    ::ll::UntypedStorage<4, 4>  mUnked907d;
    ::ll::UntypedStorage<4, 4>  mUnk5c1352;
    ::ll::UntypedStorage<4, 4>  mUnk3547f6;
    ::ll::UntypedStorage<1, 1>  mUnk9578e1;
    ::ll::UntypedStorage<4, 4>  mUnke41be2;
    ::ll::UntypedStorage<4, 4>  mUnkab1960;
    ::ll::UntypedStorage<8, 72> mUnk45ba20;
    ::ll::UntypedStorage<8, 24> mUnkd125da;
    ::ll::UntypedStorage<4, 4>  mUnkee5906;
    ::ll::UntypedStorage<8, 24> mUnk55cf36;
    // NOLINTEND

public:
    // prevent constructor by default
    AngerLevelComponent& operator=(AngerLevelComponent const&);
    AngerLevelComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AngerLevelComponent(::AngerLevelComponent&&);

    MCAPI AngerLevelComponent(::AngerLevelComponent const&);

    MCAPI void _createOrModifyAngerLevel(::Actor const& nuisanceSource, ::std::function<int(int)> const& modifyingFn);

    MCAPI ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> _getListeningSoundEvent(::Actor& actor) const;

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI bool belowAngryThreshold(::ActorUniqueID id) const;

    MCAPI bool canBeNuisance(::Actor* owner, ::Actor* target) const;

    MCAPI ::std::optional<::std::pair<::Actor*, int>> getTopActiveNuisance(::Actor* owner, ::ILevel const& level) const;

    MCAPI ::AngerLevelComponent& operator=(::AngerLevelComponent&&);

    MCAPI void tick(::Actor* owner, ::ILevel const& level);

    MCAPI void tryIncreaseAngerAt(::Actor& owner, ::Actor& nuisance, int anger, bool playSounds);

    MCAPI ~AngerLevelComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& DEFAULT_ANGRY_BOOST();

    MCAPI static int const& DEFAULT_ANGRY_THRESHOLD();

    MCAPI static int const& DEFAULT_MAX_ANGER_LEVEL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AngerLevelComponent&&);

    MCAPI void* $ctor(::AngerLevelComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
