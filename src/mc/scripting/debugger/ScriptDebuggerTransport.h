#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IDebuggerTransport.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerTransport; }
// clang-format on

class ScriptDebuggerTransport : public ::Scripting::IDebuggerTransport {
public:
    // prevent constructor by default
    ScriptDebuggerTransport& operator=(ScriptDebuggerTransport const&);
    ScriptDebuggerTransport(ScriptDebuggerTransport const&);
    ScriptDebuggerTransport();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDebuggerTransport() = default;

    // vIndex: 1
    virtual bool listen(ushort port);

    // vIndex: 2
    virtual bool connect(std::string const& host, ushort port);

    // vIndex: 3
    virtual bool selectClient();

    // vIndex: 4
    virtual bool connected() const;

    // vIndex: 5
    virtual bool lostConnection() const;

    // vIndex: 6
    virtual bool readyClose() const;

    // vIndex: 7
    virtual void close();

    // vIndex: 8
    virtual bool peek() const;

    // vIndex: 9
    virtual bool receive(char* buffer, uint64 length);

    // vIndex: 10
    virtual void send(char const* buffer, uint64 length);

    // NOLINTEND
};
