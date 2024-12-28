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
struct ScriptResourceStats;
namespace Core { class Path; }
namespace ScriptDebuggerMessages { struct CommandMessage; }
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
    ::ll::UntypedStorage<8, 24>  mUnkbae419;
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

    // vIndex: 6
    virtual ::ScriptResourceStats getResourceStats() const /*override*/;

    // vIndex: 1
    virtual bool isStatPublisherEnabled() const /*override*/;

    // vIndex: 2
    virtual void publishStats(uint64 collectedTick, ::std::vector<::ScriptStat>&& stats) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDebugger(
        ::ScriptDebuggerSettings       settings,
        ::ServerLevel&                 serverLevel,
        ::MinecraftCommands&           commands,
        ::cereal::ReflectionCtx const& ctx,
        ::Scripting::ScriptEngine&     scriptEngine,
        ::ScriptPluginManager&         pluginManager,
        ::IScriptDebuggerWatchdog&     watchdog,
        ::IScriptTelemetryLogger&      telemetry
    );

    MCAPI void _debuggerMessageHandler(::std::string_view message);

    MCAPI void _handleCommandMessage(::ScriptDebuggerMessages::CommandMessage const& commandMessage);

    MCAPI ::std::string _sanitizeHostName(::std::string const& host) const;

    MCAPI ushort _sanitizePort(uint port) const;

    MCAPI void _sendNotification(::LogLevel logLevel, ::std::string_view message);

    MCAPI bool _tryAttachRuntime(bool expectRuntime);

    MCAPI bool _trySelectTarget();

    MCAPI void sendLog(::LogLevel logLevel, ::std::string_view message);

    MCAPI void update();

    MCAPI void waitAutoAttach(::std::chrono::seconds waitDuration);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ScriptDebuggerSettings       settings,
        ::ServerLevel&                 serverLevel,
        ::MinecraftCommands&           commands,
        ::cereal::ReflectionCtx const& ctx,
        ::Scripting::ScriptEngine&     scriptEngine,
        ::ScriptPluginManager&         pluginManager,
        ::IScriptDebuggerWatchdog&     watchdog,
        ::IScriptTelemetryLogger&      telemetry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ScriptDebuggerSettings const& $getSettings() const;

    MCAPI bool $connect(::std::string const& host, ushort port);

    MCAPI bool $listen(ushort port);

    MCAPI void $stop();

    MCAPI void $startProfiler();

    MCAPI ::std::vector<::Core::Path> $stopProfiler();

    MCAPI ::ScriptResourceStats $getResourceStats() const;

    MCAPI bool $isStatPublisherEnabled() const;

    MCAPI void $publishStats(uint64 collectedTick, ::std::vector<::ScriptStat>&& stats);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIScriptDebugger();

    MCAPI static void** $vftableForIScriptStatPublisher();
    // NOLINTEND
};
