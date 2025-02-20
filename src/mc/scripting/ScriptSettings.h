#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class ScriptPackConfigurationManager;
struct ScriptDebuggerSettings;
namespace Scripting { struct WatchdogSettings; }
namespace cereal { struct ReflectionCtx; }
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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                 mExcludedScriptModules;
    ::ll::TypedStorage<4, 36, ::std::optional<::Scripting::WatchdogSettings>>               mWatchdogSettings;
    ::ll::TypedStorage<1, 1, bool>                                                          mDiagnosticsAutoStart;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                                         mMaxDiagnosticsCaptureFiles;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mMaxDiagnosticsCaptureFileSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettings& operator=(ScriptSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSettings(::ScriptSettings const&);

    MCAPI ScriptSettings(::ScriptSettings&&);

    MCAPI ~ScriptSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptSettings const&);

    MCAPI void* $ctor(::ScriptSettings&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
