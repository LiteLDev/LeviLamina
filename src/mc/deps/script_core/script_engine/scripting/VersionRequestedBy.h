#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct VersionRequestedBy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk143185;
    ::ll::UntypedStorage<8, 40> mUnkf3415b;
    ::ll::UntypedStorage<8, 96> mUnk460b40;
    ::ll::UntypedStorage<1, 1>  mUnk135d43;
    ::ll::UntypedStorage<1, 1>  mUnk7590a2;
    ::ll::UntypedStorage<1, 1>  mUnk39326b;
    ::ll::UntypedStorage<1, 1>  mUnk490f0f;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRequestedBy& operator=(VersionRequestedBy const&);
    VersionRequestedBy(VersionRequestedBy const&);
    VersionRequestedBy();
};

} // namespace Scripting
