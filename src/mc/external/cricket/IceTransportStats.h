#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct IceTransportStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk77f150;
    ::ll::UntypedStorage<8, 24> mUnk5f233e;
    ::ll::UntypedStorage<4, 4>  mUnkdbe7f0;
    ::ll::UntypedStorage<8, 8>  mUnk84d0f8;
    ::ll::UntypedStorage<8, 8>  mUnkd0d359;
    ::ll::UntypedStorage<8, 8>  mUnkfb039d;
    ::ll::UntypedStorage<8, 8>  mUnk6ff23a;
    ::ll::UntypedStorage<4, 4>  mUnk43f242;
    ::ll::UntypedStorage<8, 32> mUnkf53043;
    ::ll::UntypedStorage<4, 4>  mUnk87d328;
    // NOLINTEND

public:
    // prevent constructor by default
    IceTransportStats& operator=(IceTransportStats const&);
    IceTransportStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IceTransportStats(::cricket::IceTransportStats const&);

    MCNAPI ~IceTransportStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::IceTransportStats const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
