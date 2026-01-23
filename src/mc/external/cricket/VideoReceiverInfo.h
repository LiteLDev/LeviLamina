#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaReceiverInfo.h"

namespace cricket {

struct VideoReceiverInfo : public ::cricket::MediaReceiverInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk27c5f6;
    ::ll::UntypedStorage<8, 40>  mUnk2ccbec;
    ::ll::UntypedStorage<1, 2>   mUnk178f7d;
    ::ll::UntypedStorage<4, 4>   mUnk866167;
    ::ll::UntypedStorage<4, 4>   mUnke408a3;
    ::ll::UntypedStorage<4, 4>   mUnk29cb4b;
    ::ll::UntypedStorage<4, 4>   mUnk67d119;
    ::ll::UntypedStorage<4, 4>   mUnk28dc6a;
    ::ll::UntypedStorage<4, 4>   mUnkf6dd21;
    ::ll::UntypedStorage<4, 4>   mUnke92749;
    ::ll::UntypedStorage<4, 4>   mUnk4e3248;
    ::ll::UntypedStorage<4, 4>   mUnkd40f90;
    ::ll::UntypedStorage<4, 4>   mUnka6547f;
    ::ll::UntypedStorage<4, 4>   mUnk656b17;
    ::ll::UntypedStorage<4, 4>   mUnka56349;
    ::ll::UntypedStorage<4, 4>   mUnkc6f89e;
    ::ll::UntypedStorage<4, 4>   mUnk449ee6;
    ::ll::UntypedStorage<4, 4>   mUnkb56ed1;
    ::ll::UntypedStorage<8, 16>  mUnkd4c98d;
    ::ll::UntypedStorage<8, 8>   mUnk95304f;
    ::ll::UntypedStorage<8, 8>   mUnkb2efd5;
    ::ll::UntypedStorage<8, 8>   mUnkb3ede2;
    ::ll::UntypedStorage<4, 4>   mUnk6cdcda;
    ::ll::UntypedStorage<8, 8>   mUnka49667;
    ::ll::UntypedStorage<8, 8>   mUnka52dc3;
    ::ll::UntypedStorage<8, 8>   mUnkfe9172;
    ::ll::UntypedStorage<4, 4>   mUnkdab8a2;
    ::ll::UntypedStorage<4, 4>   mUnk8784f0;
    ::ll::UntypedStorage<4, 4>   mUnk5f4fae;
    ::ll::UntypedStorage<4, 4>   mUnk56c565;
    ::ll::UntypedStorage<4, 4>   mUnk88788f;
    ::ll::UntypedStorage<1, 1>   mUnk1c745c;
    ::ll::UntypedStorage<4, 4>   mUnkb493a6;
    ::ll::UntypedStorage<4, 4>   mUnkd81e72;
    ::ll::UntypedStorage<4, 4>   mUnk83e47f;
    ::ll::UntypedStorage<4, 4>   mUnk538c3c;
    ::ll::UntypedStorage<4, 4>   mUnkd5086e;
    ::ll::UntypedStorage<4, 4>   mUnk7a8db3;
    ::ll::UntypedStorage<4, 4>   mUnk497e0a;
    ::ll::UntypedStorage<8, 8>   mUnk6715bc;
    ::ll::UntypedStorage<8, 8>   mUnk333270;
    ::ll::UntypedStorage<8, 120> mUnk5da0b1;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoReceiverInfo(VideoReceiverInfo const&);
    VideoReceiverInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cricket::VideoReceiverInfo& operator=(::cricket::VideoReceiverInfo const&);

    MCNAPI ~VideoReceiverInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
