#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct SessionState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb87524;
    ::ll::UntypedStorage<1, 1> mUnkeb22ea;
    ::ll::UntypedStorage<1, 1> mUnkbe96ed;
    ::ll::UntypedStorage<1, 1> mUnkd3398c;
    ::ll::UntypedStorage<4, 4> mUnkdbb5d2;
    ::ll::UntypedStorage<8, 8> mUnkb97b3b;
    ::ll::UntypedStorage<8, 8> mUnk35c5ce;
    ::ll::UntypedStorage<8, 8> mUnka71ed6;
    ::ll::UntypedStorage<8, 8> mUnk45282d;
    ::ll::UntypedStorage<8, 8> mUnk2365a9;
    ::ll::UntypedStorage<8, 8> mUnk14e0b6;
    ::ll::UntypedStorage<4, 4> mUnk619e2c;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionState& operator=(SessionState const&);
    SessionState(SessionState const&);
    SessionState();
};

} // namespace NetherNet
