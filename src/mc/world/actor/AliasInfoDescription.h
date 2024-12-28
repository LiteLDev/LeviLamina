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
    AliasInfoDescription(AliasInfoDescription const&);
    AliasInfoDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AliasInfoDescription& operator=(::AliasInfoDescription const&);

    MCAPI ~AliasInfoDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
