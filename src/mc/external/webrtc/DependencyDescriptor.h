#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct DependencyDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk15e6c2;
    ::ll::UntypedStorage<1, 1>   mUnkca31ee;
    ::ll::UntypedStorage<4, 4>   mUnkff6074;
    ::ll::UntypedStorage<8, 104> mUnkd876f6;
    ::ll::UntypedStorage<4, 12>  mUnkd5f390;
    ::ll::UntypedStorage<4, 8>   mUnke71e84;
    ::ll::UntypedStorage<8, 8>   mUnkb2561f;
    // NOLINTEND

public:
    // prevent constructor by default
    DependencyDescriptor& operator=(DependencyDescriptor const&);
    DependencyDescriptor(DependencyDescriptor const&);
    DependencyDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DependencyDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
