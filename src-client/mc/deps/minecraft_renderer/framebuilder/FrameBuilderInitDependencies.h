#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct FrameBuilderInitDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk2dde99;
    ::ll::UntypedStorage<4, 4>   mUnk5b574e;
    ::ll::UntypedStorage<4, 4>   mUnk733503;
    ::ll::UntypedStorage<8, 8>   mUnk9c5971;
    ::ll::UntypedStorage<8, 152> mUnkf5aa5c;
    ::ll::UntypedStorage<8, 8>   mUnkbd877e;
    ::ll::UntypedStorage<8, 8>   mUnke9bae3;
    ::ll::UntypedStorage<1, 1>   mUnk6308e7;
    ::ll::UntypedStorage<8, 16>  mUnk7eb84e;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameBuilderInitDependencies& operator=(FrameBuilderInitDependencies const&);
    FrameBuilderInitDependencies(FrameBuilderInitDependencies const&);
    FrameBuilderInitDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FrameBuilderInitDependencies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder
