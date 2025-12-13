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
    MCNAPI LoadResult(::CraftingItemCatalogPackStackLoadUtils::LoadResult&&);

    MCNAPI ~LoadResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CraftingItemCatalogPackStackLoadUtils::LoadResult&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CraftingItemCatalogPackStackLoadUtils
