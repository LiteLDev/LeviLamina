#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7e650c;
    // NOLINTEND

public:
    // prevent constructor by default
    TextDataPayload& operator=(TextDataPayload const&);
    TextDataPayload(TextDataPayload const&);
    TextDataPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TextDataPayload& operator=(::TextDataPayload&&);

    MCNAPI ~TextDataPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
