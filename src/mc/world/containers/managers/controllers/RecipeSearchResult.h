#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RecipeSearchResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkccb112;
    ::ll::UntypedStorage<8, 24> mUnk5e5315;
    ::ll::UntypedStorage<8, 24> mUnkb3af04;
    ::ll::UntypedStorage<4, 4>  mUnk242160;
    ::ll::UntypedStorage<4, 4>  mUnkfb7306;
    // NOLINTEND

public:
    // prevent constructor by default
    RecipeSearchResult& operator=(RecipeSearchResult const&);
    RecipeSearchResult(RecipeSearchResult const&);
    RecipeSearchResult();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~RecipeSearchResult();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
