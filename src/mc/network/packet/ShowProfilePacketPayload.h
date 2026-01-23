#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShowProfilePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerXUID;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowProfilePacketPayload(ShowProfilePacketPayload const&);
    ShowProfilePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ShowProfilePacketPayload& operator=(::ShowProfilePacketPayload&&);

    MCFOLD ::ShowProfilePacketPayload& operator=(::ShowProfilePacketPayload const&);

    MCAPI ~ShowProfilePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
