#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IteratePackResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk80dde3;
    ::ll::UntypedStorage<4, 12> mUnk8343bd;
    ::ll::UntypedStorage<8, 24> mUnke9715b;
    ::ll::UntypedStorage<8, 16> mUnk943241;
    // NOLINTEND

public:
    // prevent constructor by default
    IteratePackResult& operator=(IteratePackResult const&);
    IteratePackResult(IteratePackResult const&);
    IteratePackResult();
};
