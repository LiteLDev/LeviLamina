#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct MediaReceiverInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4647ef;
    ::ll::UntypedStorage<8, 8>  mUnk6dca02;
    ::ll::UntypedStorage<4, 4>  mUnk124862;
    ::ll::UntypedStorage<8, 8>  mUnk26e754;
    ::ll::UntypedStorage<8, 8>  mUnk5cffd0;
    ::ll::UntypedStorage<4, 4>  mUnk772eca;
    ::ll::UntypedStorage<8, 16> mUnka55d1a;
    ::ll::UntypedStorage<8, 16> mUnkb178e2;
    ::ll::UntypedStorage<4, 8>  mUnk570f0c;
    ::ll::UntypedStorage<8, 8>  mUnkb0c6eb;
    ::ll::UntypedStorage<8, 8>  mUnk2ce378;
    ::ll::UntypedStorage<8, 8>  mUnka2869f;
    ::ll::UntypedStorage<8, 8>  mUnk98cb06;
    ::ll::UntypedStorage<8, 16> mUnk471030;
    ::ll::UntypedStorage<8, 16> mUnkff9bb3;
    ::ll::UntypedStorage<8, 32> mUnkf274f4;
    ::ll::UntypedStorage<4, 8>  mUnk940de5;
    ::ll::UntypedStorage<8, 24> mUnk5b89d9;
    ::ll::UntypedStorage<8, 24> mUnk89288c;
    ::ll::UntypedStorage<8, 16> mUnkdc3fbd;
    ::ll::UntypedStorage<8, 16> mUnk475217;
    ::ll::UntypedStorage<8, 16> mUnkf0107e;
    ::ll::UntypedStorage<8, 8>  mUnk8063b3;
    ::ll::UntypedStorage<8, 16> mUnk9c0f0b;
    ::ll::UntypedStorage<8, 16> mUnk128a0e;
    ::ll::UntypedStorage<8, 16> mUnk49573e;
    ::ll::UntypedStorage<8, 8>  mUnkcd0371;
    ::ll::UntypedStorage<8, 8>  mUnkb3a5de;
    ::ll::UntypedStorage<8, 8>  mUnkfda790;
    ::ll::UntypedStorage<8, 16> mUnkefbb59;
    ::ll::UntypedStorage<8, 8>  mUnk820f57;
    ::ll::UntypedStorage<4, 4>  mUnk75c9d0;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaReceiverInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MediaReceiverInfo(::webrtc::MediaReceiverInfo const&);

    MCNAPI ::webrtc::MediaReceiverInfo& operator=(::webrtc::MediaReceiverInfo const&);

    MCNAPI uint ssrc() const;

    MCNAPI ~MediaReceiverInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::MediaReceiverInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
