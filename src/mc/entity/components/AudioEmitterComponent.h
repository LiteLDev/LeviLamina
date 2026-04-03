#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        MCAPI ~SoundEvent();
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
    ::ll::TypedStorage<8, 24, ::std::vector<::AudioEmitterComponent::SoundEvent>> mNewEventsToPlay;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioEmitterComponent& operator=(AudioEmitterComponent const&);
    AudioEmitterComponent(AudioEmitterComponent const&);
    AudioEmitterComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AudioEmitterComponent& operator=(::AudioEmitterComponent&&);
    // NOLINTEND
};
