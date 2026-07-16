#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaSenderInfo.h"

namespace webrtc {

struct VideoSenderInfo : public ::webrtc::MediaSenderInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkeaccf1;
    ::ll::UntypedStorage<8, 24> mUnk5ddfcf;
    ::ll::UntypedStorage<8, 40> mUnkfd9978;
    ::ll::UntypedStorage<4, 4>  mUnk66fb6a;
    ::ll::UntypedStorage<4, 4>  mUnk4f1d7c;
    ::ll::UntypedStorage<4, 4>  mUnk73159c;
    ::ll::UntypedStorage<4, 4>  mUnkec6940;
    ::ll::UntypedStorage<4, 4>  mUnk52f483;
    ::ll::UntypedStorage<8, 8>  mUnk564ab0;
    ::ll::UntypedStorage<4, 4>  mUnk5d0f88;
    ::ll::UntypedStorage<4, 4>  mUnkb8020a;
    ::ll::UntypedStorage<4, 4>  mUnkc4d2b5;
    ::ll::UntypedStorage<4, 4>  mUnkdb29cb;
    ::ll::UntypedStorage<4, 4>  mUnkca5f5a;
    ::ll::UntypedStorage<4, 4>  mUnkbc6ef1;
    ::ll::UntypedStorage<8, 16> mUnk7fe539;
    ::ll::UntypedStorage<4, 4>  mUnk34c994;
    ::ll::UntypedStorage<4, 4>  mUnk2c3320;
    ::ll::UntypedStorage<4, 4>  mUnkd14a52;
    ::ll::UntypedStorage<4, 4>  mUnk7c57e1;
    ::ll::UntypedStorage<4, 4>  mUnk2c8763;
    ::ll::UntypedStorage<8, 8>  mUnk2b8864;
    ::ll::UntypedStorage<8, 8>  mUnk751fe4;
    ::ll::UntypedStorage<1, 1>  mUnk8958de;
    ::ll::UntypedStorage<8, 16> mUnk37cc20;
    ::ll::UntypedStorage<1, 1>  mUnkde0a07;
    ::ll::UntypedStorage<8, 24> mUnk30c5f4;
    ::ll::UntypedStorage<4, 4>  mUnk4e9233;
    ::ll::UntypedStorage<4, 4>  mUnk64b2f3;
    ::ll::UntypedStorage<4, 4>  mUnkc87ba5;
    ::ll::UntypedStorage<4, 4>  mUnk58c6a3;
    ::ll::UntypedStorage<8, 40> mUnk4061bf;
    ::ll::UntypedStorage<1, 2>  mUnk4dc366;
    ::ll::UntypedStorage<1, 2>  mUnk992190;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoSenderInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoSenderInfo(::webrtc::VideoSenderInfo const&);

    MCNAPI ::webrtc::VideoSenderInfo& operator=(::webrtc::VideoSenderInfo const&);

    MCNAPI ~VideoSenderInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::VideoSenderInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
