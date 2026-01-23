#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/logging/LogLevel.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct LocalizationEntry; }
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
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLoggingService& operator=(ScriptLoggingService const&);
    ScriptLoggingService(ScriptLoggingService const&);
    ScriptLoggingService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> _logMessage(
        ::Editor::LogLevel                                           level,
        ::std::variant<::std::string, ::Editor::LocalizationEntry>   message,
        ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps
    );

    MCNAPI ::Scripting::Result_deprecated<void> debug(
        ::std::variant<::std::string, ::Editor::LocalizationEntry>   message,
        ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps
    );

    MCNAPI ::Scripting::Result_deprecated<void> error(
        ::std::variant<::std::string, ::Editor::LocalizationEntry>   message,
        ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps
    );

    MCNAPI ::Scripting::Result_deprecated<void> info(
        ::std::variant<::std::string, ::Editor::LocalizationEntry>   message,
        ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps
    );

    MCNAPI ::Scripting::Result_deprecated<void> warning(
        ::std::variant<::std::string, ::Editor::LocalizationEntry>   message,
        ::std::optional<::Editor::ScriptModule::ScriptLogProperties> logProps
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
