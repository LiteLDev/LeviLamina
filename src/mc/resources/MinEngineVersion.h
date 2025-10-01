#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MinEngineVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkce6b03;
    ::ll::UntypedStorage<4, 4>  mUnk7524e3;
    ::ll::UntypedStorage<2, 2>  mUnk2c6d18;
    // NOLINTEND

public:
    // prevent constructor by default
    MinEngineVersion& operator=(MinEngineVersion const&);
    MinEngineVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinEngineVersion(::MinEngineVersion const&);

    MCAPI ::MinEngineVersion& operator=(::MinEngineVersion&&);

    MCAPI ~MinEngineVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MinEngineVersion fromString(::std::string const& string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinEngineVersion const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
