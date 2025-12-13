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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptSentryLogger() /*override*/ = default;

    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const& error, ::entt::meta_any const&) const
        /*override*/;

    virtual void onPromiseRejection(
        ::Scripting::ContextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&,
        bool isHandled
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onException(::Scripting::ContextId, ::Scripting::BaseError const& error, ::entt::meta_any const&) const;

    MCAPI void $onPromiseRejection(
        ::Scripting::ContextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&,
        bool isHandled
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
