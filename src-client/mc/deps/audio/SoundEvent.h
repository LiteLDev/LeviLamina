#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SoundItem;
struct SoundAction;
struct SoundParameter;
// clang-format on

class SoundEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                   mCategory;
    ::ll::TypedStorage<8, 32, ::std::string>                   mExternalEventName;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundItem>>      mAllSoundItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundAction>>    mSoundActions;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundParameter>> mExternalEventParameters;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundEvent& operator=(SoundEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SoundEvent();

    MCNAPI SoundEvent(::SoundEvent const&);

    MCNAPI ~SoundEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SoundEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
