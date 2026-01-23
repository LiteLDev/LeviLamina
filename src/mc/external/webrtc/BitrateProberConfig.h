#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct BitrateProberConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk5f402a;
    ::ll::UntypedStorage<8, 80> mUnk8eb1b1;
    ::ll::UntypedStorage<8, 80> mUnk918866;
    ::ll::UntypedStorage<1, 1>  mUnkd072c6;
    // NOLINTEND

public:
    // prevent constructor by default
    BitrateProberConfig& operator=(BitrateProberConfig const&);
    BitrateProberConfig(BitrateProberConfig const&);
    BitrateProberConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BitrateProberConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
