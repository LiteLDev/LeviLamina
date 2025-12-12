#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModalFormResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4825e0;
    ::ll::UntypedStorage<8, 24> mUnk8599f0;
    ::ll::UntypedStorage<1, 2>  mUnk6287d5;
    // NOLINTEND

public:
    // prevent constructor by default
    ModalFormResponsePacketPayload& operator=(ModalFormResponsePacketPayload const&);
    ModalFormResponsePacketPayload(ModalFormResponsePacketPayload const&);
    ModalFormResponsePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ModalFormResponsePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
