#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Transactions {

class IOperation {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOperation() = default;

    virtual ::std::string_view getName() = 0;

    virtual ::Scripting::Result_deprecated<void> _undo(::Editor::ServiceProviderCollection& services) = 0;

    virtual ::Scripting::Result_deprecated<void> _redo(::Editor::ServiceProviderCollection& services) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Transactions
