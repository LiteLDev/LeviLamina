#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct SsrcSenderInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk120edd;
    ::ll::UntypedStorage<8, 8> mUnk3c6278;
    // NOLINTEND

public:
    // prevent constructor by default
    SsrcSenderInfo& operator=(SsrcSenderInfo const&);
    SsrcSenderInfo(SsrcSenderInfo const&);
    SsrcSenderInfo();

};

}
