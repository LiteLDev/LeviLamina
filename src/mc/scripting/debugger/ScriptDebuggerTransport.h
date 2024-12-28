#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/IDebuggerTransport.h"

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
    virtual ~ScriptDebuggerTransport() /*override*/;

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $listen(ushort port);

    MCAPI bool $connect(::std::string const& host, ushort port);

    MCAPI bool $selectClient(::std::string& outClient);

    MCAPI bool $started() const;

    MCAPI bool $connected() const;

    MCAPI bool $lostConnection() const;

    MCAPI bool $readyClose() const;

    MCAPI void $close();

    MCAPI bool $peek() const;

    MCAPI bool $receive(char* buffer, uint64 length);

    MCAPI void $send(char const* buffer, uint64 length);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
