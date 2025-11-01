#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AliasInfoDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk348b11;
    ::ll::UntypedStorage<8, 64> mUnkaa5c23;
    // NOLINTEND

public:
    // prevent constructor by default
    AliasInfoDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AliasInfoDescription(::AliasInfoDescription const&);

    MCNAPI ::AliasInfoDescription& operator=(::AliasInfoDescription const&);

    MCNAPI ~AliasInfoDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AliasInfoDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
