#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct ProtocolResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk37da2a;
    ::ll::UntypedStorage<4, 4>  mUnk823392;
    ::ll::UntypedStorage<8, 24> mUnk38dffa;
    ::ll::UntypedStorage<8, 40> mUnkbfeaa2;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtocolResponse& operator=(ProtocolResponse const&);
    ProtocolResponse(ProtocolResponse const&);
    ProtocolResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ProtocolResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
