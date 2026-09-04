#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftNet {

struct ScriptWebSocketClientReceiveEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk892825;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClientReceiveEventIntermediateData&
    operator=(ScriptWebSocketClientReceiveEventIntermediateData const&);
    ScriptWebSocketClientReceiveEventIntermediateData(ScriptWebSocketClientReceiveEventIntermediateData const&);
    ScriptWebSocketClientReceiveEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptWebSocketClientReceiveEventIntermediateData(::std::string const& message);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& message);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
