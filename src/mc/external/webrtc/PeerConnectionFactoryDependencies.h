#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PeerConnectionFactoryDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8f86af;
    ::ll::UntypedStorage<8, 8> mUnk24f3fc;
    ::ll::UntypedStorage<8, 8> mUnkbdc480;
    ::ll::UntypedStorage<8, 8> mUnk8cd310;
    ::ll::UntypedStorage<8, 8> mUnk4bfb90;
    ::ll::UntypedStorage<8, 8> mUnka2d5c0;
    ::ll::UntypedStorage<8, 8> mUnka39262;
    ::ll::UntypedStorage<8, 8> mUnkd27cf0;
    ::ll::UntypedStorage<8, 8> mUnk1b30c3;
    ::ll::UntypedStorage<8, 8> mUnk3b5c59;
    ::ll::UntypedStorage<8, 8> mUnke596f0;
    ::ll::UntypedStorage<8, 8> mUnkcca747;
    ::ll::UntypedStorage<8, 8> mUnkc120d8;
    ::ll::UntypedStorage<8, 8> mUnk5001e3;
    ::ll::UntypedStorage<8, 8> mUnkd607d3;
    ::ll::UntypedStorage<8, 8> mUnka4a7d4;
    ::ll::UntypedStorage<8, 8> mUnk7c8b83;
    ::ll::UntypedStorage<8, 8> mUnkfb739b;
    ::ll::UntypedStorage<8, 8> mUnk2794d0;
    ::ll::UntypedStorage<8, 8> mUnkabb970;
    ::ll::UntypedStorage<8, 8> mUnk669338;
    ::ll::UntypedStorage<8, 8> mUnkb16a76;
    ::ll::UntypedStorage<8, 8> mUnk38175d;
    ::ll::UntypedStorage<8, 8> mUnkccd62e;
    ::ll::UntypedStorage<8, 8> mUnk141edb;
    ::ll::UntypedStorage<8, 8> mUnk96d9ab;
    ::ll::UntypedStorage<8, 8> mUnk969762;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerConnectionFactoryDependencies& operator=(PeerConnectionFactoryDependencies const&);
    PeerConnectionFactoryDependencies(PeerConnectionFactoryDependencies const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PeerConnectionFactoryDependencies();

    MCNAPI PeerConnectionFactoryDependencies(::webrtc::PeerConnectionFactoryDependencies&&);

    MCNAPI ~PeerConnectionFactoryDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::PeerConnectionFactoryDependencies&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
