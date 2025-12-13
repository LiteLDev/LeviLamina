#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementDataExtractionUtility {

struct Extractors {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2a9b20;
    // NOLINTEND

public:
    // prevent constructor by default
    Extractors& operator=(Extractors const&);
    Extractors(Extractors const&);
    Extractors();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~Extractors();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace MovementDataExtractionUtility
