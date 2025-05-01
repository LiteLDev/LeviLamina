#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/IPrinter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
namespace Scripting { struct Error; }
// clang-format on

class ScriptSentryLogger : public ::Scripting::IPrinter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk98dc54;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentryLogger& operator=(ScriptSentryLogger const&);
    ScriptSentryLogger(ScriptSentryLogger const&);
    ScriptSentryLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptSentryLogger() /*override*/ = default;

    // vIndex: 4
    virtual void onException(::Scripting::ContextId, ::Scripting::Error const& error, ::entt::meta_any const&) const
        /*override*/;

    // vIndex: 6
    virtual void
    onPromiseRejection(::Scripting::ContextId, ::Scripting::Error const& error, ::entt::meta_any const&, bool isHandled)
        const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onException(::Scripting::ContextId, ::Scripting::Error const& error, ::entt::meta_any const&) const;

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
