#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/IDebuggerTransport.h"

class ScriptDebuggerTransport : public ::Scripting::IDebuggerTransport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkeffb26;
    ::ll::UntypedStorage<8, 8>   mUnk47b104;
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
    // vIndex: 0
    virtual ~ScriptDebuggerTransport() /*override*/ = default;

    // vIndex: 1
    virtual bool listen(ushort port) /*override*/;

    // vIndex: 2
    virtual bool connect(::std::string const& host, ushort port) /*override*/;

    // vIndex: 3
    virtual bool selectClient(::std::string& outClient) /*override*/;

    // vIndex: 4
    virtual bool started() const /*override*/;

    // vIndex: 5
    virtual bool connected() const /*override*/;

    // vIndex: 6
    virtual bool lostConnection() const /*override*/;

    // vIndex: 7
    virtual bool readyClose() const /*override*/;

    // vIndex: 8
    virtual void close() /*override*/;

    // vIndex: 9
    virtual bool peek() const /*override*/;

    // vIndex: 10
    virtual bool receive(char* buffer, uint64 length) /*override*/;

    // vIndex: 11
    virtual void send(char const* buffer, uint64 length) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $listen(ushort port);

    MCNAPI bool $connect(::std::string const& host, ushort port);

    MCNAPI bool $selectClient(::std::string& outClient);

    MCNAPI bool $started() const;

    MCNAPI bool $connected() const;

    MCNAPI bool $lostConnection() const;

    MCNAPI bool $readyClose() const;

    MCNAPI void $close();

    MCNAPI bool $peek() const;

    MCNAPI bool $receive(char* buffer, uint64 length);

    MCNAPI void $send(char const* buffer, uint64 length);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
