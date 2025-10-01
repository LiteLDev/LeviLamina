#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduJoinServerResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkce4b98;
    ::ll::UntypedStorage<8, 40> mUnk255f53;
    ::ll::UntypedStorage<8, 40> mUnke883cf;
    // NOLINTEND

public:
    // prevent constructor by default
    EduJoinServerResponse& operator=(EduJoinServerResponse const&);
    EduJoinServerResponse(EduJoinServerResponse const&);
    EduJoinServerResponse();
};

} // namespace Social
