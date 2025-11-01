#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct RealmsServicePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk89b58d;
    ::ll::UntypedStorage<8, 8>  mUnkacc78b;
    ::ll::UntypedStorage<1, 1>  mUnk7fa56f;
    ::ll::UntypedStorage<8, 24> mUnk1e6fff;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServicePackSourceOptions& operator=(RealmsServicePackSourceOptions const&);
    RealmsServicePackSourceOptions(RealmsServicePackSourceOptions const&);
    RealmsServicePackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmsServicePackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms
