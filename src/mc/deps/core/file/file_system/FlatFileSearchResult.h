#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FlatFileSearchResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk52cace;
    ::ll::UntypedStorage<8, 8>  mUnkf09954;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileSearchResult& operator=(FlatFileSearchResult const&);
    FlatFileSearchResult(FlatFileSearchResult const&);
    FlatFileSearchResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FlatFileSearchResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
