#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StoreFilter {

struct FilterCollectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9ce58d;
    ::ll::UntypedStorage<4, 4>  mUnkc8f223;
    ::ll::UntypedStorage<1, 1>  mUnk4e998c;
    ::ll::UntypedStorage<1, 1>  mUnka15e24;
    ::ll::UntypedStorage<1, 1>  mUnk3f08c6;
    ::ll::UntypedStorage<1, 1>  mUnkc7848d;
    ::ll::UntypedStorage<8, 24> mUnk3f6944;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterCollectionInfo& operator=(FilterCollectionInfo const&);
    FilterCollectionInfo(FilterCollectionInfo const&);
    FilterCollectionInfo();
};

} // namespace StoreFilter
