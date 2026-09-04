#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DiffServCodePoint.h"

namespace webrtc {

struct AsyncSocketPacketOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka9a86b;
    ::ll::UntypedStorage<1, 1>  mUnk6c1a1a;
    ::ll::UntypedStorage<8, 8>  mUnkec5ce3;
    ::ll::UntypedStorage<8, 48> mUnk269e88;
    ::ll::UntypedStorage<8, 40> mUnkb1e56e;
    ::ll::UntypedStorage<1, 1>  mUnkebaa23;
    ::ll::UntypedStorage<1, 1>  mUnk9e1227;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncSocketPacketOptions& operator=(AsyncSocketPacketOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AsyncSocketPacketOptions();

    MCNAPI AsyncSocketPacketOptions(::webrtc::AsyncSocketPacketOptions const&);

    MCNAPI explicit AsyncSocketPacketOptions(::webrtc::DiffServCodePoint dscp);

    MCNAPI ~AsyncSocketPacketOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::AsyncSocketPacketOptions const&);

    MCNAPI void* $ctor(::webrtc::DiffServCodePoint dscp);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
