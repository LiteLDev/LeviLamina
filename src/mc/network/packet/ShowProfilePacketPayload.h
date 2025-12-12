#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShowProfilePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2f85ed;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowProfilePacketPayload& operator=(ShowProfilePacketPayload const&);
    ShowProfilePacketPayload(ShowProfilePacketPayload const&);
    ShowProfilePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ShowProfilePacketPayload& operator=(::ShowProfilePacketPayload&&);

    MCNAPI ~ShowProfilePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
