#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/IPrinter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct BaseError; }
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptPrintLogger : public ::Scripting::IPrinter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrintLogger() /*override*/ = default;

    virtual void onInfo(::Scripting::ContextId, ::std::string_view message) const /*override*/;

    virtual void onWarn(::Scripting::ContextId, ::std::string_view message) const /*override*/;

    virtual void onError(::Scripting::ContextId, ::std::string_view message) const /*override*/;

    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const& error, ::entt::meta_any const&) const
        /*override*/;

    virtual bool
    shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const& errorAny) const
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
    MCAPI void $onInfo(::Scripting::ContextId, ::std::string_view message) const;

    MCAPI void $onWarn(::Scripting::ContextId, ::std::string_view message) const;

    MCAPI void $onError(::Scripting::ContextId, ::std::string_view message) const;

    MCAPI void $onException(::Scripting::ContextId, ::Scripting::BaseError const& error, ::entt::meta_any const&) const;

    MCAPI bool $shouldPrintException(
        ::Scripting::ContextId,
        ::Scripting::BaseError const&,
        ::entt::meta_any const& errorAny
    ) const;

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
