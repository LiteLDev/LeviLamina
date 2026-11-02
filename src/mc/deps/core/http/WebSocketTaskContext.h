#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

class WebSocketTaskContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk682321;
    ::ll::UntypedStorage<8, 16>  mUnkaa026c;
    ::ll::UntypedStorage<8, 336> mUnk151035;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocketTaskContext& operator=(WebSocketTaskContext const&);
    WebSocketTaskContext(WebSocketTaskContext const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WebSocketTaskContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Bedrock::Http::Internal
