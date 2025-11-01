#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct AzureGetTokenHttpResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfb5979;
    ::ll::UntypedStorage<8, 32> mUnk4456bf;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureGetTokenHttpResponse& operator=(AzureGetTokenHttpResponse const&);
    AzureGetTokenHttpResponse(AzureGetTokenHttpResponse const&);
    AzureGetTokenHttpResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AzureGetTokenHttpResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
