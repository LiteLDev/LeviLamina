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

    virtual void onInfo(::Scripting::ContextId contextId, ::std::string_view message) const;

    virtual void onWarn(::Scripting::ContextId contextId, ::std::string_view message) const;

    virtual void onError(::Scripting::ContextId contextId, ::std::string_view message) const;

    virtual void onException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;

    virtual bool shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;

    virtual void onPromiseRejection(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny,
        bool                          isHandled
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onInfo(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCFOLD void $onWarn(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCFOLD void $onError(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCFOLD bool $shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;


    // NOLINTEND
};

} // namespace Scripting
