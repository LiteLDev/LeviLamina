#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ANAStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnked0900;
    ::ll::UntypedStorage<4, 8> mUnkf9a918;
    ::ll::UntypedStorage<4, 8> mUnk44d80f;
    ::ll::UntypedStorage<4, 8> mUnk85f227;
    ::ll::UntypedStorage<4, 8> mUnke3f647;
    ::ll::UntypedStorage<4, 8> mUnk5bbb05;
    ::ll::UntypedStorage<4, 8> mUnk8a1bd7;
    // NOLINTEND

public:
    // prevent constructor by default
    ANAStats& operator=(ANAStats const&);
    ANAStats();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ANAStats(::webrtc::ANAStats const&);

    MCAPI ~ANAStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::ANAStats const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
