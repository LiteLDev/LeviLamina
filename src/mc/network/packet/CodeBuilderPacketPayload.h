#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CodeBuilderPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mURL;
    ::ll::TypedStorage<1, 1, bool>           mShouldOpenCodeBuilder;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CodeBuilderPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
