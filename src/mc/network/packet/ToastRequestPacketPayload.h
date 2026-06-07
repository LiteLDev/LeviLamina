#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ToastRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTitle;
    ::ll::TypedStorage<8, 32, ::std::string> mContent;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastRequestPacketPayload& operator=(ToastRequestPacketPayload const&);
    ToastRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ToastRequestPacketPayload(::ToastRequestPacketPayload const&);

    MCFOLD ::ToastRequestPacketPayload& operator=(::ToastRequestPacketPayload&&);

    MCAPI ~ToastRequestPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ToastRequestPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
