#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PatternUtil {

struct PatternData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf7814b;
    ::ll::UntypedStorage<1, 1>  mUnkc37dc1;
    // NOLINTEND

public:
    // prevent constructor by default
    PatternData& operator=(PatternData const&);
    PatternData(PatternData const&);
    PatternData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~PatternData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace PatternUtil
