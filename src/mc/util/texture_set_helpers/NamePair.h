#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TextureSetHelpers {

struct NamePair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk92c4f0;
    ::ll::UntypedStorage<8, 32> mUnk758a41;
    // NOLINTEND

public:
    // prevent constructor by default
    NamePair& operator=(NamePair const&);
    NamePair(NamePair const&);
    NamePair();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NamePair();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace TextureSetHelpers
