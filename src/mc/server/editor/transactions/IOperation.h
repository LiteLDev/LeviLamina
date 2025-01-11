#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Transactions {

class IOperation {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IOperation();

    // vIndex: 1
    virtual ::std::string_view getName() = 0;

    // vIndex: 2
    virtual ::Scripting::Result<void> _undo(::Editor::ServiceProviderCollection&) = 0;

    // vIndex: 3
    virtual ::Scripting::Result<void> _redo(::Editor::ServiceProviderCollection&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Transactions
