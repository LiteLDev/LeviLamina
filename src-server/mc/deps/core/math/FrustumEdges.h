#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrustumEdges {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk61007a;
    ::ll::UntypedStorage<4, 12> mUnka924ea;
    ::ll::UntypedStorage<4, 12> mUnk2a667a;
    ::ll::UntypedStorage<4, 12> mUnkcb21c4;
    // NOLINTEND

public:
    // prevent constructor by default
    FrustumEdges& operator=(FrustumEdges const&);
    FrustumEdges(FrustumEdges const&);
    FrustumEdges();

};
