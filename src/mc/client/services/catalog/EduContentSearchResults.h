#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/CommonSearchResults.h"

struct EduContentSearchResults : public ::CommonSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4df182;
    // NOLINTEND

public:
    // prevent constructor by default
    EduContentSearchResults& operator=(EduContentSearchResults const&);
    EduContentSearchResults(EduContentSearchResults const&);
    EduContentSearchResults();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~EduContentSearchResults();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
