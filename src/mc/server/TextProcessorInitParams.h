#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextProcessorInitParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk6c820b;
    ::ll::UntypedStorage<8, 64>  mUnk208261;
    ::ll::UntypedStorage<8, 64>  mUnk5d0ec6;
    ::ll::UntypedStorage<4, 8>   mUnk4d3f52;
    ::ll::UntypedStorage<8, 32>  mUnkcb05cd;
    // NOLINTEND

public:
    // prevent constructor by default
    TextProcessorInitParams& operator=(TextProcessorInitParams const&);
    TextProcessorInitParams(TextProcessorInitParams const&);
    TextProcessorInitParams();
};
