#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class AsyncBase : public ::std::enable_shared_from_this<::Bedrock::Threading::AsyncBase> {
public:
    // prevent constructor by default
    AsyncBase& operator=(AsyncBase const&);
    AsyncBase(AsyncBase const&);
    AsyncBase();
};

} // namespace Bedrock::Threading
