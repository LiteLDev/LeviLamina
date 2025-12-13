#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ScriptDebuggerSettings;
namespace Core { class Path; }
// clang-format on

class IScriptDebugger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool connect(::std::string const&, ushort) = 0;

    virtual bool listen(ushort) = 0;

    virtual void stop() = 0;

    virtual ::ScriptDebuggerSettings const& getSettings() const = 0;

    virtual void startProfiler() = 0;

    virtual ::std::vector<::Core::Path> stopProfiler() = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& DIAGNOSTICS_CAPTURES_FOLDER();

    MCNAPI static ::std::string_view const& PROFILER_CAPTURES_FOLDER();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
