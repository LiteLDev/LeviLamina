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

    virtual void onInfo(::Scripting::ContextId message, ::std::string_view) const /*override*/;

    virtual void onWarn(::Scripting::ContextId message, ::std::string_view) const /*override*/;

    virtual void onError(::Scripting::ContextId message, ::std::string_view) const /*override*/;

    virtual void onException(::Scripting::ContextId error, ::Scripting::BaseError const&, ::entt::meta_any const&) const
        /*override*/;

    virtual bool
    shouldPrintException(::Scripting::ContextId errorAny, ::Scripting::BaseError const&, ::entt::meta_any const&) const
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
    MCAPI ScriptPrintLogger();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onInfo(::Scripting::ContextId message, ::std::string_view) const;

    MCAPI void $onWarn(::Scripting::ContextId message, ::std::string_view) const;

    MCAPI void $onError(::Scripting::ContextId message, ::std::string_view) const;

    MCAPI void $onException(::Scripting::ContextId error, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    MCAPI bool $shouldPrintException(
        ::Scripting::ContextId errorAny,
        ::Scripting::BaseError const&,
        ::entt::meta_any const&
    ) const;

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
