#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModalFormRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>           mFormId;
    ::ll::TypedStorage<8, 32, ::std::string> mFormJSON;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ModalFormRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
