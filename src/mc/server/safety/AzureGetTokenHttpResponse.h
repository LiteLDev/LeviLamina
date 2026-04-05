#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct AzureGetTokenHttpResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfb5979;
    ::ll::UntypedStorage<8, 32> mUnk36300f;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureGetTokenHttpResponse& operator=(AzureGetTokenHttpResponse const&);
    AzureGetTokenHttpResponse(AzureGetTokenHttpResponse const&);
    AzureGetTokenHttpResponse();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ~AzureGetTokenHttpResponse();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Services
