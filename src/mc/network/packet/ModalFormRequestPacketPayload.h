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
    // prevent constructor by default
    ModalFormRequestPacketPayload(ModalFormRequestPacketPayload const&);
    ModalFormRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ModalFormRequestPacketPayload& operator=(::ModalFormRequestPacketPayload&&);

    MCFOLD ::ModalFormRequestPacketPayload& operator=(::ModalFormRequestPacketPayload const&);

    MCAPI ~ModalFormRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
