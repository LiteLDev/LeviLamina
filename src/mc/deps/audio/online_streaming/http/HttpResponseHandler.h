#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class HttpResponseHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke4ec44;
    ::ll::UntypedStorage<1, 1>  mUnkd05684;
    ::ll::UntypedStorage<1, 1>  mUnk331f9e;
    ::ll::UntypedStorage<8, 8>  mUnk86ab58;
    ::ll::UntypedStorage<4, 4>  mUnka8c27e;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpResponseHandler& operator=(HttpResponseHandler const&);
    HttpResponseHandler(HttpResponseHandler const&);
    HttpResponseHandler();
};

} // namespace Audio
