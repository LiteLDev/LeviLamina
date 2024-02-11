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
    // vIndex: 0, symbol: __gen_??1ScriptDebuggerTransport@@UEAA@XZ
    virtual ~ScriptDebuggerTransport() = default;

    // vIndex: 1, symbol: ?listen@ScriptDebuggerTransport@@UEAA_NG@Z
    virtual bool listen(ushort port);

    // vIndex: 2, symbol:
    // ?connect@ScriptDebuggerTransport@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    virtual bool connect(std::string const& host, ushort port);

    // vIndex: 3, symbol: ?selectClient@ScriptDebuggerTransport@@UEAA_NXZ
    virtual bool selectClient();

    // vIndex: 4, symbol: ?connected@ScriptDebuggerTransport@@UEBA_NXZ
    virtual bool connected() const;

    // vIndex: 5, symbol: ?lostConnection@ScriptDebuggerTransport@@UEBA_NXZ
    virtual bool lostConnection() const;

    // vIndex: 6, symbol: ?readyClose@ScriptDebuggerTransport@@UEBA_NXZ
    virtual bool readyClose() const;

    // vIndex: 7, symbol: ?close@ScriptDebuggerTransport@@UEAAXXZ
    virtual void close();

    // vIndex: 8, symbol: ?peek@ScriptDebuggerTransport@@UEBA_NXZ
    virtual bool peek() const;

    // vIndex: 9, symbol: ?receive@ScriptDebuggerTransport@@UEAA_NPEAD_K@Z
    virtual bool receive(char* buffer, uint64 length);

    // vIndex: 10, symbol: ?send@ScriptDebuggerTransport@@UEAAXPEBD_K@Z
    virtual void send(char const* buffer, uint64 length);

    // NOLINTEND
};
