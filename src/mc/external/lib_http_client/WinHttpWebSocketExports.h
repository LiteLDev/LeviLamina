#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct WinHttpWebSocketExports {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk888c04;
    ::ll::UntypedStorage<8, 8> mUnk893800;
    ::ll::UntypedStorage<8, 8> mUnkaa17dc;
    ::ll::UntypedStorage<8, 8> mUnk142f53;
    ::ll::UntypedStorage<8, 8> mUnkd7aae0;
    ::ll::UntypedStorage<8, 8> mUnk9a5e18;
    ::ll::UntypedStorage<8, 8> mUnk6f528d;
    // NOLINTEND

public:
    // prevent constructor by default
    WinHttpWebSocketExports& operator=(WinHttpWebSocketExports const&);
    WinHttpWebSocketExports(WinHttpWebSocketExports const&);
    WinHttpWebSocketExports();
};

} // namespace xbox::httpclient
