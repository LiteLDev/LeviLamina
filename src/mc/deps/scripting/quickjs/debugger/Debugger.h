#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/IDebuggerController.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSRuntime;
struct JSValue;
// clang-format on

namespace Scripting::QuickJS {

class Debugger : public ::Scripting::IDebuggerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkae28c9;
    ::ll::UntypedStorage<8, 8>  mUnke101ac;
    ::ll::UntypedStorage<8, 64> mUnk84399a;
    ::ll::UntypedStorage<8, 64> mUnk142c77;
    ::ll::UntypedStorage<8, 64> mUnkbbe543;
    // NOLINTEND

public:
    // prevent constructor by default
    Debugger& operator=(Debugger const&);
    Debugger(Debugger const&);
    Debugger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Debugger() /*override*/ = default;

    // vIndex: 1
    virtual bool attach(
        bool                                      performHandshake,
        ::std::optional<::std::string>            targetModuleUuid,
        ::std::function<void(::std::string_view)> handler
    ) /*override*/;

    // vIndex: 2
    virtual void detach() /*override*/;

    // vIndex: 3
    virtual bool closed() const /*override*/;

    // vIndex: 4
    virtual void pumpMessages() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint ContextToId(::JSContext* ctx, void*);

    MCAPI static char const* ContextToModuleUuidLowerCase(::JSContext* ctx, void*);

    MCAPI static void MessageHandler(void* udata, char const* message, uint64 length);

    MCAPI static void NotifyResume(void* udata);

    MCAPI static char const* ToTypeName(::JSContext* ctx, ::JSValue val);

    MCAPI static void TransportClose(::JSRuntime* rt, void* udata);

    MCAPI static uint64 TransportPeek(void* udata);

    MCAPI static uint64 TransportRead(void* udata, char* buffer, uint64 length);

    MCAPI static uint64 TransportWrite(void* udata, char const* buffer, uint64 length);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $attach(
        bool                                      performHandshake,
        ::std::optional<::std::string>            targetModuleUuid,
        ::std::function<void(::std::string_view)> handler
    );

    MCAPI void $detach();

    MCAPI bool $closed() const;

    MCAPI void $pumpMessages();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
