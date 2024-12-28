#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IThirdPartyServerRepository {
public:
    // prevent constructor by default
    IThirdPartyServerRepository& operator=(IThirdPartyServerRepository const&);
    IThirdPartyServerRepository(IThirdPartyServerRepository const&);
    IThirdPartyServerRepository();
};
