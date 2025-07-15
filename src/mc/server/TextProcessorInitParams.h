#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextProcessorInitParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6323d8;
    ::ll::UntypedStorage<8, 64> mUnk519924;
    ::ll::UntypedStorage<8, 64> mUnk9349ca;
    ::ll::UntypedStorage<4, 8>  mUnk4d3f52;
    ::ll::UntypedStorage<8, 32> mUnkff1c15;
    // NOLINTEND

public:
    // prevent constructor by default
    TextProcessorInitParams& operator=(TextProcessorInitParams const&);
    TextProcessorInitParams(TextProcessorInitParams const&);
    TextProcessorInitParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextProcessorInitParams(::TextProcessorInitParams&&);

    MCNAPI ~TextProcessorInitParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TextProcessorInitParams&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
