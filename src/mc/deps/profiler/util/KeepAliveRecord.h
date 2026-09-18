#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::RefCount::details {

struct KeepAliveRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk52c101;
    ::ll::UntypedStorage<8, 16> mUnk36f84b;
    // NOLINTEND

public:
    // prevent constructor by default
    KeepAliveRecord& operator=(KeepAliveRecord const&);
    KeepAliveRecord(KeepAliveRecord const&);
    KeepAliveRecord();
};

} // namespace Bedrock::RefCount::details
