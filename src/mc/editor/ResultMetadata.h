#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct ResultMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke500a7;
    ::ll::UntypedStorage<8, 8>  mUnk22e12a;
    ::ll::UntypedStorage<8, 8>  mUnk689b33;
    ::ll::UntypedStorage<4, 12> mUnk5269c9;
    ::ll::UntypedStorage<1, 1>  mUnk7118f2;
    ::ll::UntypedStorage<4, 4>  mUnk9cecc3;
    ::ll::UntypedStorage<4, 4>  mUnk21a5c3;
    // NOLINTEND

public:
    // prevent constructor by default
    ResultMetadata& operator=(ResultMetadata const&);
    ResultMetadata(ResultMetadata const&);
    ResultMetadata();
};

} // namespace Editor::InteractiveTools
