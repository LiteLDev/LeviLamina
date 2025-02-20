#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/IPrinter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
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
    virtual void onException(::Scripting::ContextId, ::entt::meta_any const& e) const /*override*/;

    // vIndex: 5
    virtual bool shouldPrintException(::Scripting::ContextId, ::entt::meta_any const& e) const /*override*/;

    // vIndex: 6
    virtual void onPromiseRejection(::Scripting::ContextId, ::std::string_view message, bool isHandled) const
        /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onInfo(::Scripting::ContextId, ::std::string_view message) const;

    MCAPI void $onWarn(::Scripting::ContextId, ::std::string_view message) const;

    MCAPI void $onError(::Scripting::ContextId, ::std::string_view message) const;

    MCAPI void $onException(::Scripting::ContextId, ::entt::meta_any const& e) const;

    MCAPI bool $shouldPrintException(::Scripting::ContextId, ::entt::meta_any const& e) const;

    MCAPI void $onPromiseRejection(::Scripting::ContextId, ::std::string_view message, bool isHandled) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
