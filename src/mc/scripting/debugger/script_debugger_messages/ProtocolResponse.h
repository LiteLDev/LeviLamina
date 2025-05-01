#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct ProtocolResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf70fe4;
    ::ll::UntypedStorage<4, 4>  mUnk823392;
    ::ll::UntypedStorage<8, 40> mUnkf809e1;
    ::ll::UntypedStorage<8, 40> mUnk488818;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtocolResponse& operator=(ProtocolResponse const&);
    ProtocolResponse(ProtocolResponse const&);
    ProtocolResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::ProtocolResponse& operator=(::ScriptDebuggerMessages::ProtocolResponse&&);

    MCNAPI ~ProtocolResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
