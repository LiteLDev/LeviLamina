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
    // vIndex: 0
    virtual ~IScriptSentryPlugin() = default;

    // vIndex: 1
    virtual void setSentryLogger(::std::unique_ptr<::ScriptSentryLogger>) = 0;

    // vIndex: 2
    virtual ::std::string const& getPlatformName() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
