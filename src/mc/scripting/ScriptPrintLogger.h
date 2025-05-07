#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/IPrinter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
namespace Scripting { struct Error; }
// clang-format on

class ScriptPrintLogger : public ::Scripting::IPrinter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPrintLogger() /*override*/ = default;

    // vIndex: 1
    virtual void onInfo(::Scripting::ContextId, ::std::string_view message) const /*override*/;

    // vIndex: 2
    virtual void onWarn(::Scripting::ContextId, ::std::string_view message) const /*override*/;

    // vIndex: 3
    virtual void onError(::Scripting::ContextId, ::std::string_view message) const /*override*/;

    // vIndex: 4
    virtual void onException(::Scripting::ContextId, ::Scripting::Error const& error, ::entt::meta_any const&) const
        /*override*/;

    // vIndex: 5
    virtual bool
    shouldPrintException(::Scripting::ContextId, ::Scripting::Error const&, ::entt::meta_any const& errorAny) const
        /*override*/;

    // vIndex: 6
    virtual void
    onPromiseRejection(::Scripting::ContextId, ::Scripting::Error const& error, ::entt::meta_any const&, bool isHandled)
        const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onInfo(::Scripting::ContextId, ::std::string_view message) const;

    MCNAPI void $onWarn(::Scripting::ContextId, ::std::string_view message) const;

    MCNAPI void $onError(::Scripting::ContextId, ::std::string_view message) const;

    MCNAPI void $onException(::Scripting::ContextId, ::Scripting::Error const& error, ::entt::meta_any const&) const;

    MCNAPI bool
    $shouldPrintException(::Scripting::ContextId, ::Scripting::Error const&, ::entt::meta_any const& errorAny) const;

    MCNAPI void $onPromiseRejection(
        ::Scripting::ContextId,
        ::Scripting::Error const& error,
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
