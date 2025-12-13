#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ParsedTextureSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk475495;
    ::ll::UntypedStorage<4, 20> mUnk4f3cc9;
    // NOLINTEND

public:
    // prevent constructor by default
    ParsedTextureSet& operator=(ParsedTextureSet const&);
    ParsedTextureSet(ParsedTextureSet const&);
    ParsedTextureSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParsedTextureSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
