#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PeerConnectionObserver; }
// clang-format on

namespace webrtc {

struct PeerConnectionDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2495f1;
    ::ll::UntypedStorage<8, 8> mUnk77b668;
    ::ll::UntypedStorage<8, 8> mUnk6ca38e;
    ::ll::UntypedStorage<8, 8> mUnk2b2770;
    ::ll::UntypedStorage<8, 8> mUnkc23f07;
    ::ll::UntypedStorage<8, 8> mUnke635a2;
    ::ll::UntypedStorage<8, 8> mUnked2c7a;
    ::ll::UntypedStorage<8, 8> mUnkdf0c55;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerConnectionDependencies& operator=(PeerConnectionDependencies const&);
    PeerConnectionDependencies(PeerConnectionDependencies const&);
    PeerConnectionDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PeerConnectionDependencies(::webrtc::PeerConnectionDependencies&&);

    MCNAPI explicit PeerConnectionDependencies(::webrtc::PeerConnectionObserver* observer_in);

    MCNAPI ~PeerConnectionDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PeerConnectionDependencies&&);

    MCNAPI void* $ctor(::webrtc::PeerConnectionObserver* observer_in);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
