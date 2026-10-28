#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Audio { struct PcmFramePosition; }
// clang-format on

namespace Audio {

class OnlineAudioSeekCoordinator {
public:
    // OnlineAudioSeekCoordinator inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // OnlineAudioSeekCoordinator inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnkb4bc2d;
        ::ll::UntypedStorage<8, 16> mUnkfa0441;
        ::ll::UntypedStorage<8, 8>  mUnka76902;
        ::ll::UntypedStorage<8, 8>  mUnk40ab14;
        ::ll::UntypedStorage<8, 8>  mUnkf5c564;
        ::ll::UntypedStorage<8, 8>  mUnk229046;
        ::ll::UntypedStorage<8, 8>  mUnk677b8c;
        ::ll::UntypedStorage<4, 4>  mUnk293541;
        ::ll::UntypedStorage<8, 8>  mUnk18c035;
        ::ll::UntypedStorage<8, 8>  mUnk941471;
        ::ll::UntypedStorage<4, 4>  mUnk926659;
        ::ll::UntypedStorage<1, 1>  mUnk625754;
        // NOLINTEND

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk92dff5;
    ::ll::UntypedStorage<8, 80>  mUnk5f75c6;
    ::ll::UntypedStorage<8, 128> mUnk4dd64f;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioSeekCoordinator& operator=(OnlineAudioSeekCoordinator const&);
    OnlineAudioSeekCoordinator(OnlineAudioSeekCoordinator const&);
    OnlineAudioSeekCoordinator();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool requestSeek(::Audio::PcmFramePosition targetFrame);
#endif
    // NOLINTEND
};

} // namespace Audio
