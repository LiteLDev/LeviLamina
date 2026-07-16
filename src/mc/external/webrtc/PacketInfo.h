#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk768061;
    ::ll::UntypedStorage<1, 1> mUnkeb3603;
    ::ll::UntypedStorage<1, 1> mUnkd9a329;
    ::ll::UntypedStorage<4, 4> mUnk417943;
    ::ll::UntypedStorage<4, 4> mUnkc5a434;
    ::ll::UntypedStorage<2, 4> mUnk85a8f3;
    ::ll::UntypedStorage<8, 8> mUnk392b98;
    ::ll::UntypedStorage<8, 8> mUnkf20715;
    ::ll::UntypedStorage<8, 8> mUnkc92fe8;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketInfo& operator=(PacketInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PacketInfo();

    MCNAPI PacketInfo(::webrtc::PacketInfo const&);

    MCNAPI ~PacketInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::PacketInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
