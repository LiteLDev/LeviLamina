#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ScriptDebuggerSettings;
struct ScriptResourceStats;
namespace Core { class Path; }
// clang-format on

class IScriptDebugger {
public:
    // prevent constructor by default
    IScriptDebugger& operator=(IScriptDebugger const&);
    IScriptDebugger(IScriptDebugger const&);
    IScriptDebugger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool connect(::std::string const&, ushort) = 0;

    // vIndex: 1
    virtual bool listen(ushort) = 0;

    // vIndex: 2
    virtual void stop() = 0;

    // vIndex: 3
    virtual ::ScriptDebuggerSettings const& getSettings() const = 0;

    // vIndex: 4
    virtual void startProfiler() = 0;

    // vIndex: 5
    virtual ::std::vector<::Core::Path> stopProfiler() = 0;

    // vIndex: 6
    virtual ::ScriptResourceStats getResourceStats() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Path getMemoryDumpSavePath();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
