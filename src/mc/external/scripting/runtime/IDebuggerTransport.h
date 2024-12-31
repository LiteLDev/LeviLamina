#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerTransport {
public:
    // prevent constructor by default
    IDebuggerTransport& operator=(IDebuggerTransport const&);
    IDebuggerTransport(IDebuggerTransport const&);
    IDebuggerTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDebuggerTransport() = default;

    // vIndex: 1
    virtual bool listen(ushort) = 0;

    // vIndex: 2
    virtual bool connect(::std::string const&, ushort) = 0;

    // vIndex: 3
    virtual bool selectClient(::std::string&) = 0;

    // vIndex: 4
    virtual bool started() const = 0;

    // vIndex: 5
    virtual bool connected() const = 0;

    // vIndex: 6
    virtual bool lostConnection() const = 0;

    // vIndex: 7
    virtual bool readyClose() const = 0;

    // vIndex: 8
    virtual void close() = 0;

    // vIndex: 9
    virtual bool peek() const = 0;

    // vIndex: 10
    virtual bool receive(char*, uint64) = 0;

    // vIndex: 11
    virtual void send(char const*, uint64) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
