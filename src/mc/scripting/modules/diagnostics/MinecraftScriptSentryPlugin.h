#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/diagnostics/IScriptSentryPlugin.h"

// auto generated forward declare list
// clang-format off
class ScriptSentryLogger;
// clang-format on

namespace ScriptModuleDiagnostics {

class MinecraftScriptSentryPlugin : public ::ScriptModuleDiagnostics::IScriptSentryPlugin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8c3ac7;
    ::ll::UntypedStorage<8, 32> mUnkb98b5a;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScriptSentryPlugin& operator=(MinecraftScriptSentryPlugin const&);
    MinecraftScriptSentryPlugin(MinecraftScriptSentryPlugin const&);
    MinecraftScriptSentryPlugin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftScriptSentryPlugin() /*override*/ = default;

    // vIndex: 1
    virtual void setSentryLogger(::std::unique_ptr<::ScriptSentryLogger> sentryLogger) /*override*/;

    // vIndex: 2
    virtual ::std::string const& getPlatformName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setSentryLogger(::std::unique_ptr<::ScriptSentryLogger> sentryLogger);

    MCNAPI ::std::string const& $getPlatformName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
