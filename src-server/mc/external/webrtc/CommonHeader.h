#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class CommonHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk855d58;
    ::ll::UntypedStorage<1, 1> mUnkb0d39c;
    ::ll::UntypedStorage<1, 1> mUnk238f20;
    ::ll::UntypedStorage<4, 4> mUnk537301;
    ::ll::UntypedStorage<8, 8> mUnkdb29c4;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonHeader& operator=(CommonHeader const&);
    CommonHeader(CommonHeader const&);
    CommonHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Parse(uchar const* buffer, uint64 size_bytes);
    // NOLINTEND

};

}
