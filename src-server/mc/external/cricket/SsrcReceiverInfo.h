#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct SsrcReceiverInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb8a85c;
    ::ll::UntypedStorage<8, 8> mUnk333ae3;
    // NOLINTEND

public:
    // prevent constructor by default
    SsrcReceiverInfo& operator=(SsrcReceiverInfo const&);
    SsrcReceiverInfo(SsrcReceiverInfo const&);
    SsrcReceiverInfo();
};

} // namespace cricket
