#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnk7888ec;
    ::ll::UntypedStorage<8, 24> mUnk8ae26c;
    ::ll::UntypedStorage<8, 8>  mUnk6d4ee9;
    ::ll::UntypedStorage<1, 1>  mUnk722b9f;
    ::ll::UntypedStorage<1, 1>  mUnkc24318;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockLoadContext& operator=(BedrockLoadContext const&);
    BedrockLoadContext(BedrockLoadContext const&);
    BedrockLoadContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BedrockLoadContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
