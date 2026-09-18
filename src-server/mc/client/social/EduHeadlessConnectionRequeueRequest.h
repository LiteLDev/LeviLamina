#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduHeadlessConnectionRequeueRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbaf8ee;
    ::ll::UntypedStorage<8, 64> mUnk67f969;
    ::ll::UntypedStorage<8, 64> mUnk99df36;
    // NOLINTEND

public:
    // prevent constructor by default
    EduHeadlessConnectionRequeueRequest& operator=(EduHeadlessConnectionRequeueRequest const&);
    EduHeadlessConnectionRequeueRequest(EduHeadlessConnectionRequeueRequest const&);
    EduHeadlessConnectionRequeueRequest();
};

} // namespace Social
