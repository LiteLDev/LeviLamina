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
    MCNAPI void $onInfo(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCNAPI void $onWarn(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCNAPI void $onError(::Scripting::ContextId contextId, ::std::string_view message) const;

    MCNAPI void $onException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;

    MCNAPI bool $shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;

    MCNAPI void $onPromiseRejection(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny,
        bool                          isHandled
    ) const;


    // NOLINTEND
};

} // namespace Scripting
