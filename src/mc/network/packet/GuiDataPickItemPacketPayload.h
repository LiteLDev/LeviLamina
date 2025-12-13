#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GuiDataPickItemPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbe04dd;
    ::ll::UntypedStorage<8, 32> mUnkbd0956;
    ::ll::UntypedStorage<4, 4>  mUnkbcbc25;
    // NOLINTEND

public:
    // prevent constructor by default
    GuiDataPickItemPacketPayload& operator=(GuiDataPickItemPacketPayload const&);
    GuiDataPickItemPacketPayload(GuiDataPickItemPacketPayload const&);
    GuiDataPickItemPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::GuiDataPickItemPacketPayload& operator=(::GuiDataPickItemPacketPayload&&);

    MCNAPI ~GuiDataPickItemPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
