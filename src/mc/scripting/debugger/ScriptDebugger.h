#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/scripting/debugger/IScriptDebugger.h"
#include "mc/scripting/diagnostics/IScriptStatPublisher.h"

// auto generated forward declare list
// clang-format off
class IScriptDebuggerWatchdog;
class IScriptTelemetryLogger;
class MinecraftCommands;
class ScriptPluginManager;
class ScriptStat;
class ServerLevel;
struct ScriptDebuggerSettings;
namespace Core { class Path; }
namespace ScriptDebuggerMessages { struct CommandMessage; }
namespace ScriptDebuggerMessages { struct ProfilerMessage; }
namespace Scripting { class ScriptEngine; }
namespace cereal { struct ReflectionCtx; }
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
    ::ll::UntypedStorage<8, 8>   mUnk435135;
    ::ll::UntypedStorage<8, 8>   mUnk8e8e70;
    ::ll::UntypedStorage<8, 8>   mUnkde53e6;
    ::ll::UntypedStorage<4, 4>   mUnk1e8970;
    ::ll::UntypedStorage<8, 32>  mUnk4b5496;
    ::ll::UntypedStorage<4, 4>   mUnk82a025;
    ::ll::UntypedStorage<8, 40>  mUnk2623b0;
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
    // vIndex: 0
    virtual ~ScriptDebugger() /*override*/;

    // vIndex: 3
    virtual ::ScriptDebuggerSettings const& getSettings() const /*override*/;

    // vIndex: 0
    virtual bool connect(::std::string const& host, ushort port) /*override*/;

    // vIndex: 1
    virtual bool listen(ushort port) /*override*/;

    // vIndex: 2
    virtual void stop() /*override*/;

    // vIndex: 4
    virtual void startProfiler() /*override*/;

    // vIndex: 5
    virtual ::std::vector<::Core::Path> stopProfiler() /*override*/;

    // vIndex: 1
    virtual bool isStatPublisherEnabled() const /*override*/;

    // vIndex: 2
    virtual void publishStats(uint64 collectedTick, ::std::vector<::ScriptStat> const& stats) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDebugger(
        ::ScriptDebuggerSettings   settings,
        ::ServerLevel&             serverLevel,
        ::MinecraftCommands&       commands,
        ::cereal::ReflectionCtx&   ctx,
        ::Scripting::ScriptEngine& scriptEngine,
        ::ScriptPluginManager&     pluginManager,
        ::IScriptDebuggerWatchdog& watchdog,
        ::IScriptTelemetryLogger&  telemetry
    );

    MCNAPI void _debuggerMessageHandler(::std::string_view message);

    MCNAPI void _handleCommandMessage(::ScriptDebuggerMessages::CommandMessage const& commandMessage);

    MCNAPI void _handleStopProfilerMessage(::ScriptDebuggerMessages::ProfilerMessage const& profilerMessage);

    MCNAPI ::std::string _sanitizeHostName(::std::string const& host) const;

    MCNAPI ushort _sanitizePort(uint port) const;

    MCNAPI void _sendNotification(::LogLevel logLevel, ::std::string_view message);

    MCNAPI bool _tryAttachRuntime(bool expectRuntime);

    MCNAPI bool _trySelectTarget();

    MCNAPI void sendLog(::LogLevel logLevel, ::std::string_view message);

    MCNAPI void update();

    MCNAPI void waitAutoAttach(::std::chrono::seconds waitDuration);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptDebuggerSettings   settings,
        ::ServerLevel&             serverLevel,
        ::MinecraftCommands&       commands,
        ::cereal::ReflectionCtx&   ctx,
        ::Scripting::ScriptEngine& scriptEngine,
        ::ScriptPluginManager&     pluginManager,
        ::IScriptDebuggerWatchdog& watchdog,
        ::IScriptTelemetryLogger&  telemetry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerSettings const& $getSettings() const;

    MCNAPI bool $connect(::std::string const& host, ushort port);

    MCNAPI bool $listen(ushort port);

    MCNAPI void $stop();

    MCNAPI void $startProfiler();

    MCNAPI ::std::vector<::Core::Path> $stopProfiler();

    MCNAPI bool $isStatPublisherEnabled() const;

    MCNAPI void $publishStats(uint64 collectedTick, ::std::vector<::ScriptStat> const& stats);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIScriptDebugger();

    MCNAPI static void** $vftableForIScriptStatPublisher();
    // NOLINTEND
};
