#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

struct WebSocketCallbackContext
: public ::std::enable_shared_from_this<::Bedrock::Http::Internal::WebSocketCallbackContext> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9ae223;
    ::ll::UntypedStorage<8, 16> mUnk256dc7;
    ::ll::UntypedStorage<8, 16> mUnk4a272f;
    ::ll::UntypedStorage<1, 1>  mUnk8753ff;
    ::ll::UntypedStorage<8, 16> mUnk38217f;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocketCallbackContext& operator=(WebSocketCallbackContext const&);
    WebSocketCallbackContext(WebSocketCallbackContext const&);
    WebSocketCallbackContext();
};

} // namespace Bedrock::Http::Internal
