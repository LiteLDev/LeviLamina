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
    ::ll::UntypedStorage<8, 8> mUnkb13177;
    ::ll::UntypedStorage<8, 8> mUnk694bf9;
    ::ll::UntypedStorage<8, 8> mUnk99463b;
    ::ll::UntypedStorage<8, 8> mUnk6afd57;
    ::ll::UntypedStorage<8, 8> mUnkd7f5c4;
    ::ll::UntypedStorage<8, 8> mUnk784506;
    ::ll::UntypedStorage<8, 8> mUnk790548;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerConnectionDependencies& operator=(PeerConnectionDependencies const&);
    PeerConnectionDependencies(PeerConnectionDependencies const&);
    PeerConnectionDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PeerConnectionDependencies(::webrtc::PeerConnectionObserver*);

    MCNAPI PeerConnectionDependencies(::webrtc::PeerConnectionDependencies&&);

    MCNAPI ~PeerConnectionDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PeerConnectionObserver*);

    MCNAPI void* $ctor(::webrtc::PeerConnectionDependencies&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
