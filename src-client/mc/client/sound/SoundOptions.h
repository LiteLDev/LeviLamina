#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SoundPlayerInterface;
// clang-format on

class SoundOptions {
public:
    // SoundOptions inner types declare
    // clang-format off
    struct VolumeSlider;
    // clang-format on

    // SoundOptions inner types define
    struct VolumeSlider {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const> sound;
        ::ll::TypedStorage<4, 4, float>                volume;
        ::ll::TypedStorage<8, 8, uint64>               soundHandle;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SoundOptions::VolumeSlider>> mVolumeSliders;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SoundPlayerInterface>>                mSoundEngine;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SoundOptions(::Bedrock::NonOwnerPointer<::SoundPlayerInterface> soundEngine);

    MCAPI void volumeUpdated(::std::string const& sliderName, bool isMainMenu);

    MCAPI ~SoundOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::SoundPlayerInterface> soundEngine);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
