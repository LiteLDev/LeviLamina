#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/sound/LoopSoundStage.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/player/PlayerListener.h"
#include "mc/world/level/biome/BiomeIdType.h"

// auto generated forward declare list
// clang-format off
class Player;
class SoundMapping;
class Vec3;
// clang-format on

class AmbientSoundController : public ::PlayerListener {
public:
    // AmbientSoundController inner types define
    using PlaySoundFunc = ::brstd::function_ref<void(::HashedString const&, ::Vec3 const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LoopSoundStage>                        mLoopSoundStage;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                        mLocalUser;
    ::ll::TypedStorage<8, 8, ::SoundMapping const&>                   mSoundMap;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextSoundChangeTime;
    ::ll::TypedStorage<4, 4, int>                                     mDelayUntilNextMoodSound;
    ::ll::TypedStorage<2, 2, ::BiomeIdType>                           mTargetLoopBiomeId;
    ::ll::TypedStorage<8, 48, ::HashedString>                         mTargetAmbientLoopSound;
    ::ll::TypedStorage<2, 2, ::BiomeIdType>                           mCurrentLoopBiomeId;
    ::ll::TypedStorage<8, 48, ::HashedString>                         mCurrentAmbientLoopSound;
    ::ll::TypedStorage<8, 8, uint64>                                  mCurrentLoop;
    ::ll::TypedStorage<8, 8, uint64>                                  mPreviousLoop;
    ::ll::TypedStorage<4, 4, float>                                   mCurrentVolume;
    ::ll::TypedStorage<4, 4, float>                                   mCurrentPitch;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundController& operator=(AmbientSoundController const&);
    AmbientSoundController(AmbientSoundController const&);
    AmbientSoundController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AmbientSoundController() /*override*/ = default;

    virtual void onWillChangeDimension(::Player& player) /*override*/;

    virtual void onDimensionChanged(::Player& player) /*override*/;

    virtual void onPlayerDestruction(::Player& player) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AmbientSoundController(::WeakEntityRef localUser, ::SoundMapping const& soundMap);

    MCAPI void _addDelayOrTransitioningToNewStage();

    MCAPI void _startLoopSound();

    MCAPI void _stopLoopSound(bool hard);

    MCAPI void _tryPlayAdditionSounds(
        ::Vec3 const&                                                            listenerPos,
        ::brstd::function_ref<void(::HashedString const&, ::Vec3 const&)> const& playSoundFunc
    );

    MCAPI void _tryPlayLoopSounds(::Vec3 const& listenerPos);

    MCAPI void _tryPlayMoodSound(
        ::Vec3 const&                                                            listenerPos,
        ::brstd::function_ref<void(::HashedString const&, ::Vec3 const&)> const& playSoundFunc
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeakEntityRef localUser, ::SoundMapping const& soundMap);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onWillChangeDimension(::Player& player);

    MCFOLD void $onDimensionChanged(::Player& player);

    MCAPI void $onPlayerDestruction(::Player& player);
    // NOLINTEND
};
