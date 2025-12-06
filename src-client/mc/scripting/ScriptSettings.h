#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/watchdog/WatchdogSettings.h"
#include "mc/scripting/ScriptPackConfigurationManager.h"
#include "mc/scripting/debugger/ScriptDebuggerSettings.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

struct ScriptSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCerealContext;
    ::ll::TypedStorage<8, 456, ::ScriptPackConfigurationManager>                            mPackConfigurationManager;
    ::ll::TypedStorage<1, 1, bool>                                                          mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                          mEnableEditorModules;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                                            mBaseGameVersion;
    ::ll::TypedStorage<8, 104, ::ScriptDebuggerSettings>                                    mDebuggerSettings;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>>                                   mExcludedScriptModules;
    ::ll::TypedStorage<4, 36, ::std::optional<::Scripting::WatchdogSettings>>               mWatchdogSettings;
    ::ll::TypedStorage<1, 1, bool>                                                          mDiagnosticsAutoStart;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                                         mMaxDiagnosticsCaptureFiles;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mMaxDiagnosticsCaptureFileSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettings& operator=(ScriptSettings const&);
    ScriptSettings(ScriptSettings const&);
    ScriptSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSettings(::ScriptSettings&&);

    MCNAPI ~ScriptSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptSettings&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
