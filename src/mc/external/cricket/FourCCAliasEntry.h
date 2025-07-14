#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct FourCCAliasEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5e8115;
    ::ll::UntypedStorage<4, 4> mUnkbe781c;
    // NOLINTEND

public:
    // prevent constructor by default
    FourCCAliasEntry& operator=(FourCCAliasEntry const&);
    FourCCAliasEntry(FourCCAliasEntry const&);
    FourCCAliasEntry();
};

} // namespace cricket
