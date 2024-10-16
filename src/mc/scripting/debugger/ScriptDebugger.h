#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/DebuggerLogLevel.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
namespace Scripting { class ScriptEngine; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptDebugger {
public:
    // prevent constructor by default
    ScriptDebugger& operator=(ScriptDebugger const&);
    ScriptDebugger(ScriptDebugger const&);
    ScriptDebugger();

public:
    // NOLINTBEGIN
    MCVAPI void close();

    MCVAPI bool connect(std::string const& host, ushort port);

    MCVAPI struct ScriptResourceStats getResourceStats() const;

    MCVAPI bool isStatPublisherEnabled() const;

    MCVAPI bool listen(ushort port, std::chrono::seconds duration);

    MCVAPI void publishStats(std::vector<struct ScriptStat> const& stats);

    MCVAPI void startProfiler();

    MCVAPI void stopProfiler(std::string const& savePath);

    MCAPI ScriptDebugger(
        struct ScriptDebuggerSettings                 settings,
        struct cereal::ReflectionCtx&                 ctx,
        class Scripting::ScriptEngine&                scriptEngine,
        class ScriptPluginManager&                    scriptPluginManager,
        class IScriptDebuggerWatchdog&                debuggerWatchdog,
        std::unique_ptr<class IScriptTelemetryLogger> telemetryLogger
    );

    MCAPI bool checkConnections();

    MCAPI bool isConnected() const;

    MCAPI void sendLog(::Scripting::DebuggerLogLevel logLevel, std::string_view message);

    MCAPI void waitAutoAttach(std::chrono::seconds waitDuration, std::chrono::seconds listenDuration);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::IDebuggerController* _createController();

    MCAPI void _releaseController();

    MCAPI std::string _sanitizeHostName(std::string const&) const;

    MCAPI ushort _sanitizePort(uint port) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForIScriptDebugger();

    MCAPI static void** vftableForIScriptStatPublisher();

    MCAPI void* ctor$(
        struct ScriptDebuggerSettings                 settings,
        struct cereal::ReflectionCtx&                 ctx,
        class Scripting::ScriptEngine&                scriptEngine,
        class ScriptPluginManager&                    scriptPluginManager,
        class IScriptDebuggerWatchdog&                debuggerWatchdog,
        std::unique_ptr<class IScriptTelemetryLogger> telemetryLogger
    );

    MCAPI void close$();

    MCAPI bool connect$(std::string const& host, ushort port);

    MCAPI struct ScriptResourceStats getResourceStats$() const;

    MCAPI bool isStatPublisherEnabled$() const;

    MCAPI bool listen$(ushort port, std::chrono::seconds duration);

    MCAPI void publishStats$(std::vector<struct ScriptStat> const& stats);

    MCAPI void startProfiler$();

    MCAPI void stopProfiler$(std::string const& savePath);

    // NOLINTEND
};
