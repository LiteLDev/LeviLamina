#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SessionInfoManager {
public:
    // prevent constructor by default
    SessionInfoManager& operator=(SessionInfoManager const&);
    SessionInfoManager(SessionInfoManager const&);
    SessionInfoManager();
};

}; // namespace Bedrock
