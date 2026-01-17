#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/OpCode.h"

namespace cohtml {

class IClientSideSocket {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientSideSocket() = default;

    virtual void Send(char const*, uint);

    virtual void Send(char const*, uint, ::cohtml::websocket::OpCode);

    virtual uint GetBufferedAmount();

    virtual char const* GetProtocol();

    virtual void Close(uint, char const*, uint);

    virtual void Terminate(uint, char const*, uint);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
