#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResolvedTextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkadb123;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedTextObject& operator=(ResolvedTextObject const&);
    ResolvedTextObject(ResolvedTextObject const&);
    ResolvedTextObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getAsJsonString() const;

    MCAPI ~ResolvedTextObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
