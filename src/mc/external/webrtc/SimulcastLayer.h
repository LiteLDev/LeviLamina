#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SimulcastLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4e596a;
    ::ll::UntypedStorage<1, 1>  mUnke089a4;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulcastLayer& operator=(SimulcastLayer const&);
    SimulcastLayer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SimulcastLayer(::webrtc::SimulcastLayer const&);

    MCNAPI SimulcastLayer(::std::string_view rid, bool is_paused);

    MCNAPI ~SimulcastLayer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::SimulcastLayer const&);

    MCNAPI void* $ctor(::std::string_view rid, bool is_paused);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
