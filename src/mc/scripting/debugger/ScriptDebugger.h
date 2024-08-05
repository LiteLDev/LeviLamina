#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/DebuggerLogLevel.h"

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

    MCVAPI bool listen(ushort, std::chrono::seconds);

    MCVAPI void publishStats(std::vector<struct ScriptStat> const&);

    MCVAPI void startProfiler();

    MCVAPI void stopProfiler(std::string const& savePath);

    MCAPI
    ScriptDebugger(struct ScriptDebuggerSettings, struct cereal::ReflectionCtx&, class Scripting::ScriptEngine&, class ScriptPluginManager&, class IScriptDebuggerWatchdog&, std::unique_ptr<class IScriptTelemetryLogger>);

    MCAPI bool checkConnections();

    MCAPI bool isConnected() const;

    MCAPI void sendLog(::Scripting::DebuggerLogLevel, std::string_view);

    MCAPI void waitAutoAttach(std::chrono::seconds, std::chrono::seconds);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::IDebuggerController* _createController();

    MCAPI void _releaseController();

    MCAPI std::string _sanitizeHostName(std::string const&) const;

    MCAPI ushort _sanitizePort(uint) const;

    // NOLINTEND
};
