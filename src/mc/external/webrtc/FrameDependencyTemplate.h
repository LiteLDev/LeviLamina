#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DecodeTargetIndication.h"

namespace webrtc {

struct FrameDependencyTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkec2d84;
    ::ll::UntypedStorage<4, 4>  mUnk3efd77;
    ::ll::UntypedStorage<8, 48> mUnkd5416e;
    ::ll::UntypedStorage<8, 24> mUnkd96b60;
    ::ll::UntypedStorage<8, 24> mUnkd2fcc7;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameDependencyTemplate& operator=(FrameDependencyTemplate const&);
    FrameDependencyTemplate(FrameDependencyTemplate const&);
    FrameDependencyTemplate();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FrameDependencyTemplate();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
