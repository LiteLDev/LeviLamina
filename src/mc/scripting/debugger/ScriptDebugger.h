#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/scripting/debugger/IScriptDebugger.h"
#include "mc/scripting/diagnostics/IScriptStatPublisher.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
struct ScriptDebuggerSettings;
namespace Core { class Path; }
namespace ScriptDebuggerMessages { struct DebuggerRequestMessage; }
namespace cereal { class DynamicValue; }
// clang-format on

class ScriptDebugger : public ::IScriptDebugger, public ::IScriptStatPublisher {
public:
    // ScriptDebugger inner types declare
    // clang-format off
    struct AutoAttachTelem;
    // clang-format on

    // ScriptDebugger inner types define
    enum class DebuggerMode : int {
        Stopped = 0,
        Connect = 1,
        Listen  = 2,
    };

    struct AutoAttachTelem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk38ff41;
        ::ll::UntypedStorage<4, 4> mUnk61770b;
        // NOLINTEND

    public:
        // prevent constructor by default
        AutoAttachTelem& operator=(AutoAttachTelem const&);
        AutoAttachTelem(AutoAttachTelem const&);
        AutoAttachTelem();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnkaa78c0;
    ::ll::UntypedStorage<8, 8>   mUnkd106a5;
    ::ll::UntypedStorage<8, 8>   mUnkf7195e;
    ::ll::UntypedStorage<8, 8>   mUnk2f3c05;
    ::ll::UntypedStorage<8, 8>   mUnkbce03b;
    ::ll::UntypedStorage<8, 8>   mUnkd6e3ed;
    ::ll::UntypedStorage<8, 8>   mUnk85bc4f;
    ::ll::UntypedStorage<8, 8>   mUnk53da61;
    ::ll::UntypedStorage<8, 8>   mUnka973d0;
    ::ll::UntypedStorage<8, 8>   mUnk102427;
    ::ll::UntypedStorage<8, 8>   mUnk8ca513;
    ::ll::UntypedStorage<8, 8>   mUnkde53e6;
    ::ll::UntypedStorage<4, 4>   mUnk1e8970;
    ::ll::UntypedStorage<8, 32>  mUnk5186f8;
    ::ll::UntypedStorage<4, 4>   mUnk82a025;
    ::ll::UntypedStorage<8, 24>  mUnk89c845;
    ::ll::UntypedStorage<8, 24>  mUnk50622d;
    ::ll::UntypedStorage<8, 64>  mUnk89cb81;
    ::ll::UntypedStorage<4, 12>  mUnkc99a5f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebugger& operator=(ScriptDebugger const&);
    ScriptDebugger(ScriptDebugger const&);
    ScriptDebugger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebugger() /*override*/ = default;

    virtual ::ScriptDebuggerSettings const& getSettings() const /*override*/;

    virtual bool connect(::std::string const&, ushort) /*override*/;

    virtual bool listen(ushort) /*override*/;

    virtual void stop() /*override*/;

    virtual void startProfiler() /*override*/;

    virtual ::std::vector<::Core::Path> stopProfiler() /*override*/;

    virtual bool isStatPublisherEnabled() const /*override*/;

    virtual void publishStats(uint64, ::std::vector<::ScriptStat> const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerDebuggerRequestHandler(
        ::std::string_view                                                                                command,
        ::std::function<void(::ScriptDebuggerMessages::DebuggerRequestMessage const&, ::ScriptDebugger&)> handler
    );

    MCNAPI void sendDebuggeeResponse(
        int                                     requestSeq,
        bool                                    success,
        ::std::string_view                      responseMessage,
        ::std::optional<::cereal::DynamicValue> args
    );

    MCNAPI void sendLog(::LogLevel logLevel, ::std::string_view message);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
