#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    virtual void onInfo(::Scripting::ContextId, ::std::string_view) const = 0;

    // vIndex: 2
    virtual void onWarn(::Scripting::ContextId, ::std::string_view) const = 0;

    // vIndex: 3
    virtual void onError(::Scripting::ContextId, ::std::string_view) const = 0;

    // vIndex: 4
    virtual void onException(::Scripting::ContextId, ::entt::meta_any const&) const = 0;

    // vIndex: 5
    virtual bool shouldPrintException(::Scripting::ContextId, ::entt::meta_any const&) const = 0;

    // vIndex: 6
    virtual void onPromiseRejection(::Scripting::ContextId, ::std::string_view, bool) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
