#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    // vIndex: 0, symbol: __gen_??1Debugger@QuickJS@Scripting@@UEAA@XZ
    virtual ~Debugger() = default;

    // vIndex: 1, symbol: ?listen@Debugger@QuickJS@Scripting@@UEAA_NG@Z
    virtual bool listen(ushort port);

    // vIndex: 2, symbol:
    // ?connect@Debugger@QuickJS@Scripting@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    virtual bool connect(std::string const& host, ushort port);

    // vIndex: 3, symbol: ?disconnect@Debugger@QuickJS@Scripting@@UEAAXXZ
    virtual void disconnect();

    // vIndex: 4, symbol: ?pollConnections@Debugger@QuickJS@Scripting@@UEAAXXZ
    virtual void pollConnections();

    // vIndex: 5, symbol: ?closed@Debugger@QuickJS@Scripting@@UEBA_NXZ
    virtual bool closed() const;

    // vIndex: 6, symbol: ?isListening@Debugger@QuickJS@Scripting@@UEBA_NXZ
    virtual bool isListening() const;

    // vIndex: 7, symbol:
    // ?sendMessage@Debugger@QuickJS@Scripting@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void sendMessage(std::string const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryAttach@Debugger@QuickJS@Scripting@@AEAA_NXZ
    MCAPI bool _tryAttach();

    // symbol: ?ContextToId@Debugger@QuickJS@Scripting@@CAIPEAUJSContext@@PEAX@Z
    MCAPI static uint ContextToId(struct JSContext* ctx, void*);

    // symbol: ?ToTypeName@Debugger@QuickJS@Scripting@@CAPEBDPEAUJSContext@@UJSValue@@@Z
    MCAPI static char const* ToTypeName(struct JSContext* ctx, struct JSValue val);

    // symbol: ?TransportClose@Debugger@QuickJS@Scripting@@CAXPEAUJSRuntime@@PEAX@Z
    MCAPI static void TransportClose(struct JSRuntime* rt, void*);

    // symbol: ?TransportPeek@Debugger@QuickJS@Scripting@@CA_KPEAX@Z
    MCAPI static uint64 TransportPeek(void*);

    // symbol: ?TransportRead@Debugger@QuickJS@Scripting@@CA_KPEAXPEAD_K@Z
    MCAPI static uint64 TransportRead(void*, char* buffer, uint64 length);

    // symbol: ?TransportWrite@Debugger@QuickJS@Scripting@@CA_KPEAXPEBD_K@Z
    MCAPI static uint64 TransportWrite(void*, char const* buffer, uint64 length);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
