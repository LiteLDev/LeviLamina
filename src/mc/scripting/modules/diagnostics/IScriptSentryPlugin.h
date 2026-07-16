#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptSentryLogger;
// clang-format on

namespace ScriptModuleDiagnostics {

class IScriptSentryPlugin {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptSentryPlugin() = default;

    virtual void setSentryLogger(::std::unique_ptr<::ScriptSentryLogger>) = 0;

    virtual ::std::string const& getPlatformName() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
