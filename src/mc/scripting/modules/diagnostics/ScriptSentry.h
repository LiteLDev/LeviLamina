#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/SentryBreadcrumbLevel.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDiagnostics { struct ScriptSentryAlreadyInitializedError; }
namespace ScriptModuleDiagnostics { struct ScriptSentryOptions; }
namespace ScriptModuleDiagnostics { struct ScriptSentryUninitializedError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleDiagnostics {

class ScriptSentry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7775fc;
    ::ll::UntypedStorage<8, 8>  mUnk65a9b2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentry& operator=(ScriptSentry const&);
    ScriptSentry(ScriptSentry const&);
    ScriptSentry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::ScriptModuleDiagnostics::ScriptSentryUninitializedError>
    addBreadcrumb(::SentryBreadcrumbLevel level, ::std::string message, ::std::optional<::std::string> category);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleDiagnostics::ScriptSentryUninitializedError>
    addTag(::std::string key, ::std::string value);

    MCNAPI ::Scripting::Result<
        ::std::unordered_map<::std::string, ::std::string>,
        ::ScriptModuleDiagnostics::ScriptSentryUninitializedError>
    getTags() const;

    MCNAPI ::Scripting::
        Result<void, ::ScriptModuleDiagnostics::ScriptSentryAlreadyInitializedError, ::Scripting::InvalidArgumentError>
        init(::Scripting::ContextConfig const& config, ::ScriptModuleDiagnostics::ScriptSentryOptions const& options);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleDiagnostics::ScriptSentryUninitializedError>
    removeTag(::std::string const& key);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
