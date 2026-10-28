#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

struct WebSocketAsyncOperationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk1f160e;
    ::ll::UntypedStorage<8, 40> mUnk83d823;
    ::ll::UntypedStorage<8, 16> mUnkc9c94c;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocketAsyncOperationContext& operator=(WebSocketAsyncOperationContext const&);
    WebSocketAsyncOperationContext(WebSocketAsyncOperationContext const&);
    WebSocketAsyncOperationContext();
};

} // namespace Bedrock::Http::Internal
