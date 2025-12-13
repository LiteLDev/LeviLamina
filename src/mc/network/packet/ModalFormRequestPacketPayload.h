#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModalFormRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk2bdf00;
    ::ll::UntypedStorage<8, 32> mUnk4afd30;
    // NOLINTEND

public:
    // prevent constructor by default
    ModalFormRequestPacketPayload& operator=(ModalFormRequestPacketPayload const&);
    ModalFormRequestPacketPayload(ModalFormRequestPacketPayload const&);
    ModalFormRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ModalFormRequestPacketPayload& operator=(::ModalFormRequestPacketPayload&&);

    MCNAPI ~ModalFormRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
