#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sound/SoundPriority.h"

class AudioEmitterComponent {
public:
    // AudioEmitterComponent inner types declare
    // clang-format off
    struct SoundEvent;
    // clang-format on

    // AudioEmitterComponent inner types define
    struct SoundEvent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk3a195a;
        ::ll::UntypedStorage<8, 48> mUnk4143be;
        // NOLINTEND

    public:
        // prevent constructor by default
        SoundEvent& operator=(SoundEvent const&);
        SoundEvent(SoundEvent const&);
        SoundEvent();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ~SoundEvent();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::AudioEmitterComponent::SoundEvent>> mNewEventsToPlay;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                              mMaxRange;
    ::ll::TypedStorage<4, 8, ::std::optional<::SoundPriority>>                    mPriorityOverride;
    // NOLINTEND
};
