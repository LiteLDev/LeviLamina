#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/logging/LogLevel.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptLogProperties; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptLoggingService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptLoggingService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2eada6;
    ::ll::UntypedStorage<8, 8>  mUnk4209f3;
    ::ll::UntypedStorage<8, 24> mUnk6b9f0d;
    ::ll::UntypedStorage<1, 2>  mUnkc9ec79;
    ::ll::UntypedStorage<8, 40> mUnkd45969;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLoggingService& operator=(ScriptLoggingService const&);
    ScriptLoggingService(ScriptLoggingService const&);
    ScriptLoggingService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptLoggingService(::Editor::ScriptModule::ScriptLoggingService&&);

    MCNAPI ::Scripting::Result_deprecated<void> _logMessage(
        ::Editor::LogLevel                                           level,
        ::std::string                                                message,
        ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    debug(::std::string message, ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps);

    MCNAPI ::Scripting::Result_deprecated<void>
    error(::std::string message, ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps);

    MCNAPI ::Scripting::Result_deprecated<void>
    info(::std::string message, ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps);

    MCNAPI ::Editor::ScriptModule::ScriptLoggingService& operator=(::Editor::ScriptModule::ScriptLoggingService&&);

    MCNAPI ::Scripting::Result_deprecated<void>
    warning(::std::string message, ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptLoggingService&&);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
