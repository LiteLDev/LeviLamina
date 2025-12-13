#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/IPrinter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct BaseError; }
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptCompositePrintLogger : public ::Scripting::IPrinter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk23130d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCompositePrintLogger& operator=(ScriptCompositePrintLogger const&);
    ScriptCompositePrintLogger(ScriptCompositePrintLogger const&);
    ScriptCompositePrintLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptCompositePrintLogger() /*override*/ = default;

    virtual void onInfo(::Scripting::ContextId, ::std::string_view) const /*override*/;

    virtual void onWarn(::Scripting::ContextId, ::std::string_view) const /*override*/;

    virtual void onError(::Scripting::ContextId, ::std::string_view) const /*override*/;

    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const
        /*override*/;

    virtual bool
    shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const
        /*override*/;

    virtual void
    onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
