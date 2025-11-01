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
    ::ll::UntypedStorage<8, 8> mUnkee4357;
    ::ll::UntypedStorage<8, 8> mUnkf43ce8;
    ::ll::UntypedStorage<8, 8> mUnk3f02bb;
    ::ll::UntypedStorage<8, 8> mUnk8fb7de;
    ::ll::UntypedStorage<8, 8> mUnk1d189e;
    ::ll::UntypedStorage<8, 8> mUnk88581c;
    ::ll::UntypedStorage<8, 8> mUnk880866;
    ::ll::UntypedStorage<8, 8> mUnkbb50bd;
    ::ll::UntypedStorage<8, 8> mUnkc74e5f;
    ::ll::UntypedStorage<8, 8> mUnkdc55ab;
    ::ll::UntypedStorage<8, 8> mUnkf76fb7;
    ::ll::UntypedStorage<8, 8> mUnk424e32;
    ::ll::UntypedStorage<8, 8> mUnk4f8ae4;
    ::ll::UntypedStorage<8, 8> mUnka7d468;
    ::ll::UntypedStorage<8, 8> mUnk2794d0;
    ::ll::UntypedStorage<8, 8> mUnkabb970;
    ::ll::UntypedStorage<8, 8> mUnk669338;
    ::ll::UntypedStorage<8, 8> mUnkb16a76;
    ::ll::UntypedStorage<8, 8> mUnk38175d;
    ::ll::UntypedStorage<8, 8> mUnkb6dba7;
    ::ll::UntypedStorage<8, 8> mUnkf138c2;
    ::ll::UntypedStorage<8, 8> mUnkfc002d;
    ::ll::UntypedStorage<8, 8> mUnk4991ef;
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

}
