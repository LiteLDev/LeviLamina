#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LocalConstBlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 280> mUnk3a4771;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalConstBlockSource& operator=(LocalConstBlockSource const&);
    LocalConstBlockSource(LocalConstBlockSource const&);
    LocalConstBlockSource();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LocalConstBlockSource();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
