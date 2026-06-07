#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SoundAction;
class SoundItem;
struct SoundParameter;
// clang-format on

class SoundEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                   mCategory;
    ::ll::TypedStorage<8, 32, ::std::string>                   mSubtitle;
    ::ll::TypedStorage<8, 32, ::std::string>                   mExternalEventName;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundItem>>      mAllSoundItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundAction>>    mSoundActions;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundParameter>> mExternalEventParameters;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    SoundEvent& operator=(SoundEvent const&);
    SoundEvent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI SoundEvent(::SoundEvent const&);

    MCNAPI ~SoundEvent();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::SoundEvent const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
