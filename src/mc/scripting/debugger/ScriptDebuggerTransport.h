#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/IDebuggerTransport.h"

class ScriptDebuggerTransport : public ::Scripting::IDebuggerTransport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkeffb26;
    ::ll::UntypedStorage<8, 8>   mUnk264430;
    ::ll::UntypedStorage<8, 136> mUnkf9bbd8;
    ::ll::UntypedStorage<8, 8>   mUnk34b362;
    ::ll::UntypedStorage<8, 8>   mUnk23a39e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerTransport& operator=(ScriptDebuggerTransport const&);
    ScriptDebuggerTransport(ScriptDebuggerTransport const&);
    ScriptDebuggerTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebuggerTransport() /*override*/ = default;

    virtual bool listen(ushort) /*override*/;

    virtual bool connect(::std::string const&, ushort) /*override*/;

    virtual bool selectClient(::std::string&) /*override*/;

    virtual bool started() const /*override*/;

    virtual bool connected() const /*override*/;

    virtual bool lostConnection() const /*override*/;

    virtual bool readyClose() const /*override*/;

    virtual void close() /*override*/;

    virtual bool peek() const /*override*/;

    virtual bool receive(char*, uint64) /*override*/;

    virtual void send(char const*, uint64) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
