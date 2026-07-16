#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RidDirection.h"

namespace webrtc {

struct RidDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2121d9;
    ::ll::UntypedStorage<4, 4>  mUnkf0b10b;
    ::ll::UntypedStorage<8, 24> mUnk9de998;
    ::ll::UntypedStorage<8, 16> mUnkb18fff;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RidDescription();

    MCNAPI RidDescription(::webrtc::RidDescription const&);

    MCNAPI RidDescription(::std::string const& rid, ::webrtc::RidDirection direction);

    MCNAPI ::webrtc::RidDescription& operator=(::webrtc::RidDescription const&);

    MCNAPI ~RidDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::RidDescription const&);

    MCNAPI void* $ctor(::std::string const& rid, ::webrtc::RidDirection direction);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
