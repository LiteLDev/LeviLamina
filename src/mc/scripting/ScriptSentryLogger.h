#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/IPrinter.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDiagnostics { class ScriptSentrySession; }
namespace Scripting { struct BaseError; }
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptSentryLogger : public ::Scripting::IPrinter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptModuleDiagnostics::ScriptSentrySession>> mSentrySession;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentryLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptSentryLogger() /*override*/ = default;

    virtual void onException(::Scripting::ContextId error, ::Scripting::BaseError const&, ::entt::meta_any const&) const
        /*override*/;

    virtual void onPromiseRejection(
        ::Scripting::ContextId        error,
        ::Scripting::BaseError const& isHandled,
        ::entt::meta_any const&,
        bool
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptSentryLogger(::std::shared_ptr<::ScriptModuleDiagnostics::ScriptSentrySession> sentrySession);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ScriptModuleDiagnostics::ScriptSentrySession> sentrySession);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onException(::Scripting::ContextId error, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    MCAPI void $onPromiseRejection(
        ::Scripting::ContextId        error,
        ::Scripting::BaseError const& isHandled,
        ::entt::meta_any const&,
        bool
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
