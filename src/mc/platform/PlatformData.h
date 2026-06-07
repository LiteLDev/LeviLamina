#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PlatformUtils {

struct PlatformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1a0b52;
    ::ll::UntypedStorage<8, 32> mUnk1ebd6c;
    ::ll::UntypedStorage<8, 32> mUnkddb5e1;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformData& operator=(PlatformData const&);
    PlatformData(PlatformData const&);
    PlatformData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlatformData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PlatformUtils
