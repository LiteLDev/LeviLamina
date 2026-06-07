#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisconnectPacketMessages {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mMessage;
    ::ll::TypedStorage<8, 32, ::std::string> mFilteredMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectPacketMessages& operator=(DisconnectPacketMessages const&);
    DisconnectPacketMessages();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DisconnectPacketMessages(::DisconnectPacketMessages const&);

    MCFOLD ::DisconnectPacketMessages& operator=(::DisconnectPacketMessages&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::DisconnectPacketMessages const&);
    // NOLINTEND
};
