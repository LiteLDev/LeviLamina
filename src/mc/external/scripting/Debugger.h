#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/DebuggerLogLevel.h"
#include "mc/external/scripting/IDebuggerController.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
struct JSContext;
struct JSRuntime;
struct JSValue;
// clang-format on

namespace Scripting::QuickJS {

class Debugger : public ::Scripting::IDebuggerController {
public:
    // prevent constructor by default
    Debugger& operator=(Debugger const&);
    Debugger(Debugger const&);
    Debugger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Debugger() = default;

    // vIndex: 1
    virtual bool listen(ushort port);

    // vIndex: 2
    virtual bool connect(std::string const& host, ushort port);

    // vIndex: 3
    virtual void disconnect();

    // vIndex: 4
    virtual void pollConnections();

    // vIndex: 5
    virtual bool closed() const;

    // vIndex: 6
    virtual bool isListening() const;

    // vIndex: 7
    virtual void sendMessage(std::string const&) const;

    // vIndex: 8
    virtual void sendLog(::Scripting::DebuggerLogLevel, std::string_view) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _tryAttach();

    MCAPI static uint ContextToId(struct JSContext* ctx, void*);

    MCAPI static void NotifyResume(void*);

    MCAPI static char const* ToTypeName(struct JSContext* ctx, struct JSValue val);

    MCAPI static void TransportClose(struct JSRuntime* rt, void*);

    MCAPI static uint64 TransportPeek(void*);

    MCAPI static uint64 TransportRead(void*, char* buffer, uint64 length);

    MCAPI static uint64 TransportWrite(void*, char const* buffer, uint64 length);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
