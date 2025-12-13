#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ToastRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9e7824;
    ::ll::UntypedStorage<8, 32> mUnkba5c75;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastRequestPacketPayload& operator=(ToastRequestPacketPayload const&);
    ToastRequestPacketPayload(ToastRequestPacketPayload const&);
    ToastRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ToastRequestPacketPayload& operator=(::ToastRequestPacketPayload&&);

    MCNAPI ~ToastRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
