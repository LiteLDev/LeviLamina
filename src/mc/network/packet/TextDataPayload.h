#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    // NOLINTEND

public:
    // prevent constructor by default
    TextDataPayload(TextDataPayload const&);
    TextDataPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::TextDataPayload& operator=(::TextDataPayload&&);

    MCFOLD ::TextDataPayload& operator=(::TextDataPayload const&);

    MCAPI ~TextDataPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
