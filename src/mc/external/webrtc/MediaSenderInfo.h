#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct MediaSenderInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf50241;
    ::ll::UntypedStorage<8, 8>  mUnk7eb72c;
    ::ll::UntypedStorage<8, 8>  mUnka71b9e;
    ::ll::UntypedStorage<4, 4>  mUnk4a7034;
    ::ll::UntypedStorage<8, 8>  mUnkf7cbb8;
    ::ll::UntypedStorage<8, 8>  mUnk5e8e2c;
    ::ll::UntypedStorage<4, 4>  mUnka9ce4a;
    ::ll::UntypedStorage<8, 16> mUnk15e3f9;
    ::ll::UntypedStorage<4, 4>  mUnk9349d0;
    ::ll::UntypedStorage<4, 4>  mUnk62fc18;
    ::ll::UntypedStorage<8, 8>  mUnkb8649f;
    ::ll::UntypedStorage<8, 32> mUnkfcf929;
    ::ll::UntypedStorage<4, 8>  mUnk4cf1d5;
    ::ll::UntypedStorage<8, 24> mUnk5d6665;
    ::ll::UntypedStorage<8, 24> mUnka9524b;
    ::ll::UntypedStorage<8, 24> mUnk43ae3a;
    ::ll::UntypedStorage<1, 2>  mUnk5630c1;
    ::ll::UntypedStorage<8, 8>  mUnk85aff9;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaSenderInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MediaSenderInfo(::webrtc::MediaSenderInfo const&);

    MCNAPI ::webrtc::MediaSenderInfo& operator=(::webrtc::MediaSenderInfo const&);

    MCNAPI uint ssrc() const;

    MCNAPI ~MediaSenderInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::MediaSenderInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
