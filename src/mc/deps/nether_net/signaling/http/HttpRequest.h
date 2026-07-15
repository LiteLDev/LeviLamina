#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct HttpRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3d3861;
    ::ll::UntypedStorage<8, 32> mUnkb54873;
    ::ll::UntypedStorage<8, 32> mUnk6c2505;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpRequest& operator=(HttpRequest const&);
    HttpRequest(HttpRequest const&);
    HttpRequest();
};

} // namespace NetherNet
