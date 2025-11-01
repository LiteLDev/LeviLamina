#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CodecSpecificInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2a767b;
    ::ll::UntypedStorage<8, 1624> mUnkdd9f05;
    ::ll::UntypedStorage<1, 1> mUnk8f3921;
    ::ll::UntypedStorage<8, 224> mUnkc3fc56;
    ::ll::UntypedStorage<8, 136> mUnk421860;
    ::ll::UntypedStorage<1, 2> mUnk6f3e12;
    // NOLINTEND

public:
    // prevent constructor by default
    CodecSpecificInfo& operator=(CodecSpecificInfo const&);
    CodecSpecificInfo(CodecSpecificInfo const&);
    CodecSpecificInfo();

};

}
