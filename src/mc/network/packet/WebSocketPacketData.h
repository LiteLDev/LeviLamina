#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebSocketPacketData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mIP;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocketPacketData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WebSocketPacketData(::std::string const& ip);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::string const& ip);
    // NOLINTEND
};
