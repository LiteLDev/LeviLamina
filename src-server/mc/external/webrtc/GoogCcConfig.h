#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct GoogCcConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd7c87b;
    ::ll::UntypedStorage<8, 8> mUnk53822f;
    ::ll::UntypedStorage<1, 1> mUnkb6873b;
    // NOLINTEND

public:
    // prevent constructor by default
    GoogCcConfig& operator=(GoogCcConfig const&);
    GoogCcConfig(GoogCcConfig const&);
    GoogCcConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GoogCcConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
