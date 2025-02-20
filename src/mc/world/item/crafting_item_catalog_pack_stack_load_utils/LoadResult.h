#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CraftingItemCatalogPackStackLoadUtils {

struct LoadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>   mUnk80b06e;
    ::ll::UntypedStorage<8, 1032> mUnk963932;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadResult& operator=(LoadResult const&);
    LoadResult(LoadResult const&);
    LoadResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LoadResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace CraftingItemCatalogPackStackLoadUtils
