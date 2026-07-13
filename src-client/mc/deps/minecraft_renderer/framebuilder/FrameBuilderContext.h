#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

class FrameBuilderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkfd8cea;
    ::ll::UntypedStorage<1, 1>  mUnk332f9b;
    ::ll::UntypedStorage<8, 64> mUnkedf3c4;
    ::ll::UntypedStorage<8, 8>  mUnkd56423;
    ::ll::UntypedStorage<8, 24> mUnk74fea9;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameBuilderContext& operator=(FrameBuilderContext const&);
    FrameBuilderContext(FrameBuilderContext const&);
    FrameBuilderContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FrameBuilderContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder
