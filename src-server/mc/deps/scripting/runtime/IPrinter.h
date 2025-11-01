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
    // vIndex: 0
    virtual ~IPrinter() = default;

    // vIndex: 1
    virtual void onInfo(::Scripting::ContextId, ::std::string_view) const;

    // vIndex: 2
    virtual void onWarn(::Scripting::ContextId, ::std::string_view) const;

    // vIndex: 3
    virtual void onError(::Scripting::ContextId, ::std::string_view) const;

    // vIndex: 4
    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    // vIndex: 5
    virtual bool shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    // vIndex: 6
    virtual void onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onInfo(::Scripting::ContextId, ::std::string_view) const;

    MCFOLD void $onWarn(::Scripting::ContextId, ::std::string_view) const;

    MCFOLD void $onError(::Scripting::ContextId, ::std::string_view) const;

    MCFOLD bool $shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
    // NOLINTEND

};

}
