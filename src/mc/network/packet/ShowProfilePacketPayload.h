#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShowProfilePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerXUID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ShowProfilePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
