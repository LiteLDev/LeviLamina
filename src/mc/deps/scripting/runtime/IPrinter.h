#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct BaseError; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class IPrinter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPrinter() = default;

    virtual void onInfo(::Scripting::ContextId, ::std::string_view) const;

    virtual void onWarn(::Scripting::ContextId, ::std::string_view) const;

    virtual void onError(::Scripting::ContextId, ::std::string_view) const;

    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    virtual bool
    shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    virtual void
    onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onInfo(::Scripting::ContextId, ::std::string_view) const;

    MCFOLD void $onWarn(::Scripting::ContextId, ::std::string_view) const;

    MCFOLD void $onError(::Scripting::ContextId, ::std::string_view) const;

    MCFOLD bool
    $shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;


    // NOLINTEND
};

} // namespace Scripting
