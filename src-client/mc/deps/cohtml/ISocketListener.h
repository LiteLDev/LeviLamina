#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/OpCode.h"

namespace cohtml {

class ISocketListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISocketListener() = default;

    virtual void OnMessage(char const*, uint);

    virtual void OnMessage(char const*, uint, ::cohtml::websocket::OpCode);

    virtual void OnClose(uint, char const*, uint);

    virtual void OnError(char const*, uint);

    virtual void OnOpen();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
