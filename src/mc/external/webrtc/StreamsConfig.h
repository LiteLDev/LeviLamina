#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct StreamsConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfb342a;
    ::ll::UntypedStorage<1, 2>  mUnk7908cb;
    ::ll::UntypedStorage<8, 16> mUnkdd421d;
    ::ll::UntypedStorage<8, 16> mUnk1319a9;
    ::ll::UntypedStorage<8, 16> mUnk5d0a8d;
    ::ll::UntypedStorage<8, 16> mUnk132387;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamsConfig& operator=(StreamsConfig const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StreamsConfig();

    MCAPI StreamsConfig(::webrtc::StreamsConfig const&);

    MCAPI ~StreamsConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::StreamsConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
